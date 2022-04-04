// 注意 0000
// 字符串形式比较好
#include <stdio.h>
#include <string.h>
#define OSIZE 11
#define SSIZE 1001
#define NSIZE 5

typedef struct student {
    char name[NSIZE];
    int objects[SSIZE];
} Student;

int forbidden[OSIZE];
Student students[SSIZE];
int problem[SSIZE];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        scanf("%d", &forbidden[i]);
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < OSIZE; j++) {
            students[i].objects[j] = -1;
        }
    }

    // for (int i = 0; i < M; i++) {
    //     printf("%d\n", forbidden[i]);
    // }

    int size;
    int object;
    int index = 0;
    int flag = 0;
    for (int i = 0; i < N; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &size);
        for (int j = 0; j < size; j++) {
            scanf("%d", &object);
            for (int k = 0; k < M; k++) {
                if (object == forbidden[k]) {
                    students[i].objects[j] = object;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag) {
            problem[index++] = i;
            flag = 0;
        }
    }

    // for (int i = 0; i < N; i++) {
    //     printf("----------\n");
    //     printf("%s\n", students[i].name);
    //     for (int j = 0; j < OSIZE; j++) {
    //         printf("%d ", students[i].objects[j]);
    //     }
    //     putchar('\n');
    // }

    int num = 0;
    for (int i = 0; i < index; i++) {
        int index = problem[i];
        printf("%s:", students[index].name);
        for (int j = 0; j < OSIZE; j++) {
            int id = students[index].objects[j];
            if (id != -1) {
                printf(" %04d", id);
                num++;
            }
        }
        putchar('\n');
    }
    printf("%d %d\n", index, num);

    return 0;
}

