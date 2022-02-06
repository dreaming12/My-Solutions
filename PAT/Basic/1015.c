/**
 * 1015 德才论
 * 提交次数: 6
 * TIPS:
 *  - 注意排序算法的使用，不然容易超时
 *  - 注意数据的组织方式，建议定义一个结构体
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100001

typedef struct {
    int no;
    int de;
    int cai;
    int level;
} student;

student stu[SIZE];

int mycompare(const void *, const void *);

int main(void) {
    int N, L, H;

    while (scanf("%d %d %d", &N, &L, &H) != EOF) {
        int passed = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d %d %d", &stu[i].no, &stu[i].de, &stu[i].cai);
            
            if (stu[i].de >= H && stu[i].cai >= H) {
                stu[i].level = 1;
                passed++;
            } else if (stu[i].de >= H && stu[i].cai >= L) {
                stu[i].level = 2;
                passed++;
            } else if (stu[i].de >= L && stu[i].cai >= L) {
                if (stu[i].de >= stu[i].cai) {
                    stu[i].level = 3;
                } else {
                    stu[i].level = 4;
                }
                passed++;
            }
        }

        qsort(stu, N, sizeof(student), mycompare);

        // for (int i = 0; i < N - 1; i++) {
        //     for (int j = 0; j < N - 1 - i; j++) {
        //         int score1 = stu[j].de + stu[j].cai;
        //         int score2 = stu[j + 1].de + stu[j + 1].cai;
        //         int flag = 0;
        //         
        //         if (score1 < score2) {
        //             flag = 1;
        //         }
        //         if (score1 == score2) {
        //             if (stu[j].de < stu[j + 1].de) {
        //                 flag = 1;
        //             } else if (stu[j].de == stu[j + 1].de) {
        //                 if (stu[j].no > stu[j + 1].no) {
        //                     flag = 1;
        //                 }
        //             }
        //         }

        //         if (flag) {
        //             student temp = stu[j + 1];
        //             stu[j + 1] = stu[j];
        //             stu[j] = temp;
        //         }
        //     }
        // }
                           
        printf("%d\n", passed);
        for (int k = 1; k < 5; k++) {
            for (int l = 0; l < N; l++) {
                if (k == stu[l].level) {
                    printf("%d %d %d\n", stu[l].no, stu[l].de, stu[l].cai);
                }
            }
        }
    }
    return 0;
}

int mycompare(const void *a, const void *b) {
    const student *x = (const student *)a;
    const student *y = (const student *)b;

    int score1 = x->de + x->cai;
    int score2 = y->de + y->cai;
    int flag = -1;

    if (score1 < score2) {
        flag = 1;
    } 
    if (score1 == score2) {
        if (x->de < y->de) {
            flag = 1;
        } else if (x->de == y->de) {
            if (x->no > y->no) {
                flag = 1;
            }
        }
    }

    return flag;
}
