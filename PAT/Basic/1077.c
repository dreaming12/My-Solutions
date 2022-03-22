#include <stdio.h>
#include <stdlib.h>
#define SIZE 101

int scores[SIZE][SIZE];

int main(void) {
    int group;
    int max;
    scanf("%d %d", &group, &max);

    for (int i = 0; i < group; i++) {
        for (int j = 0; j < group; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    for (int i = 0; i < group; i++) {
        int minindex = -1, maxindex = -1;
        for (int j = 1; j < group; j++) {
            int score = scores[i][j];
            if (score <= max && score >= 0) {
                if (minindex == -1) {
                    minindex = maxindex = j;
                }
                if (scores[i][maxindex] < score) {
                    maxindex = j;
                }
                if (scores[i][minindex] > score) {
                    minindex = j;
                }
            } else {
                scores[i][j] = -1;
            }
        }

        int size = 0;
        double res = 0;
        for (int j = 1; j < group; j++) {
            int score = scores[i][j];
            if (j != maxindex && j != minindex && score != -1) {
                res += score;
                size++;
            }
        }

        res = (res / size + scores[i][0]) / 2.0;
        printf("%d\n", (int)(res + 0.5));
    }

    return 0;
}
