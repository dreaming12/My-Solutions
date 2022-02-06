/**
 * 1041 考试座位号
 * 提交次数: 1
 * TIPS:
 *  - NULL
 */
#include <stdio.h>
#define SIZE 20
#define MAX 1001

typedef struct student {
    char id[SIZE];
    int test;
    int exam;
} Student;

Student students[MAX];

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s %d %d", students[i].id, &students[i].test, &students[i].exam);
        }

        int M, temp;
        scanf("%d", &M);
        while (M--) {
            scanf("%d", &temp);
            for (int i = 0; i < N; i++) {
                if (temp == students[i].test) {
                    printf("%s %d\n", students[i].id, students[i].exam);
                }
            }
        }
    }

    return 0;
}
