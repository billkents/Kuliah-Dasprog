#include <stdio.h>

int main() {
    int matrix[3][3], transpose[3][3];

    scanf("%d", &matrix[0][0]);
    scanf("%d", &matrix[0][1]);
    scanf("%d", &matrix[0][2]);

    scanf("%d", &matrix[1][0]);
    scanf("%d", &matrix[1][1]);
    scanf("%d", &matrix[1][2]);

    scanf("%d", &matrix[2][0]);
    scanf("%d", &matrix[2][1]);
    scanf("%d", &matrix[2][2]);

    transpose[0][0] = matrix[0][0];
    transpose[0][1] = matrix[1][0];
    transpose[0][2] = matrix[2][0];

    transpose[1][0] = matrix[0][1];
    transpose[1][1] = matrix[1][1];
    transpose[1][2] = matrix[2][1];

    transpose[2][0] = matrix[0][2];
    transpose[2][1] = matrix[1][2];
    transpose[2][2] = matrix[2][2];

    printf("%d %d %d\n", transpose[0][0], transpose[0][1], transpose[0][2]);
    printf("%d %d %d\n", transpose[1][0], transpose[1][1], transpose[1][2]);
    printf("%d %d %d\n", transpose[2][0], transpose[2][1], transpose[2][2]);

    return 0;
}
