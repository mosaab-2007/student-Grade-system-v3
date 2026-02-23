#include <stdio.h>

int main() {
    int n, i;
    float grades[100];
    float sum = 0, average, max, min;

    printf("Project by: Mosaab and Abdulrahman\n");

    printf("Enter students number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter grade: ");
        scanf("%f", &grades[i]);
        
        sum = sum + grades[i];

        if (i == 0) {
            max = grades[i];
            min = grades[i];
        } else {
            if (grades[i] > max) {
                max = grades[i];
            }
            if (grades[i] < min) {
                min = grades[i];
            }
        }
    }

    average = sum / n;

    printf("Average: %.2f\n", average);
    printf("Max: %.2f\n", max);
    printf("Min: %.2f\n", min);

    return 0;
}
