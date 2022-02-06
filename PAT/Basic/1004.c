/**
 * 1004 成绩排名
 * 提交次数: 1
 * TIPS:
 * 	- XXX
 */
#include <stdio.h>
#define SIZE 11

typedef struct {
    char name[SIZE];
    char no[SIZE];
    int score;
} student;
student students[SIZE];

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        scanf("%s", students[n].name);
        scanf("%s", students[n].no);
        scanf("%d", &students[n].score);
    }

    student *top, *bottom;
    top = bottom = &students[0];
    for (int i = 0; students[i].name[0] != '\0'; i++) {
        if (students[i].score > top->score) {
            top = &students[i];
        } else if (students[i].score < bottom->score) {
            bottom = &students[i];
        }
    }

    printf("%s %s\n", top->name, top->no);
    printf("%s %s\n", bottom->name, bottom->no);

    return 0;
}
