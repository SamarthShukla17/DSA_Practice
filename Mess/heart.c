#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>  // For Sleep on Windows
#else
    #include <unistd.h>   // For usleep on Unix
#endif

int main() {
    // Clear screen and hide cursor
    printf("\x1b[2J\x1b[?25l");

    float t = 0; // Variable to control the beat over time
    while (1) {  // Replaced `true` with `1` for C compatibility
        float zb[100 * 40] = {0};
        float maxz = 0, c = cos(t), s = sin(t);

        for (float y = -0.5f; y <= 0.5f; y += 0.01f) {
            // Beating effect: adjust radius over time based on `t`
            float r = 0.4f + 0.05f * pow(0.5f + 0.5f * sin(t * 6 + y * 2), 8);
            for (float x = -0.5f; x <= 0.5f; x += 0.01f) {
                // Heart formula
                float z = -x * x - pow(1.2f * y - fabs(x) * 2 / 3, 2) + r * r;
                if (z < 0)
                    continue;
                z = sqrt(z) / (2 - y);
                for (float tz = -z; tz <= z; tz += z / 6) {
                    // Rotate
                    float nx = x * c - tz * s;
                    float nz = x * s + tz * c;

                    // Add perspective
                    float p = 1 + nz / 2;
                    int vx = (int)((nx * p + 0.5f) * 80 + 10);
                    int vy = (int)((-y * p + 0.5f) * 39 + 2);
                    int idx = vx + vy * 100;
                    if (zb[idx] <= nz) {
                        zb[idx] = nz;
                        if (maxz <= nz)
                            maxz = nz;
                    }
                }
            }
        }

        // Clear the screen and move the cursor to the top
        printf("\x1b[H");

        // Print the heart shape
        for (int i = 0; i < 100 * 40; i++) {
            putchar(i % 100 ? " .,-~:;=!*#$@@"[(int)(zb[i] / maxz * 13)] : 10);
        }

        // Increment `t` to animate the beating effect
        t += 0.05f;

        // Small delay to control the speed of the beating animation
#ifdef _WIN32
        Sleep(30);  // 30 milliseconds on Windows
#else
        usleep(30000);  // 30 milliseconds on Unix systems
#endif
    }

    // Show cursor again (if you end the loop)
    printf("\x1b[?25h");

    return 0;
}
