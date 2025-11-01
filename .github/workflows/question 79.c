#include <stdio.h>

int main() {
    int R, C;
    
    scanf("%d %d", &R, &C);

    int mat[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int d = 0; d < R + C - 1; d++) {
        
        if (d % 2 == 0) {
            int r = (d < R) ? d : (R - 1);
            int c = d - r;

            while (r >= 0 && c < C) {
                printf("%d ", mat[r][c]);
                r--;
                c++;
            }
        } else {
            int c = (d < C) ? d : (C - 1);
            int r = d - c;

            while (r < R && c >= 0) {
                printf("%d ", mat[r][c]);
                r++;
                c--;
            }
        }
    }

    printf("\n");
    return 0;
}
