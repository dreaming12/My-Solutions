#include <ctype.h>
#include <stdio.h>
#include <string.h>

void high_and_low(const char *strnum, char *result) {
    int highest = 0;
    int lowest = 0;
    int num = 0;
    int flag = 1;

    // if no (int) here
    // warning: comparison of integers of different signs:
    // 'int' and 'unsigned long' [-Wsign-compare]
    // why <=
    for (int i = 0; i <= (int)strlen(strnum); i++) {
        if (isdigit(strnum[i])) {
            num = num * 10 + strnum[i] - '0';
        } else if (strnum[i] == '-') {
            flag = -1;
        } else {
            num = flag * num;

            if (highest == 0 && lowest == 0) {
                highest = num;
                lowest = num;
            }

            if (num > highest) {
                highest = num;
            } else if (num < lowest) {
                lowest = num;
            }

            num = 0;
            flag = 1;
        }
    }

    // print your answer to result
    sprintf(result, "%d %d", highest, lowest);
}

// kingofpiano
// atoi() 可以从字符串中获取数
// #include <stdio.h>
// #include <stdlib.h>

// void high_and_low (const char *strnum, char *result)
// {
//     int min, max;
  
//     min = max = atoi(strnum);
//     for (int i = 0; strnum[i]; i++){
//         int tmp;
//         if (strnum[i] == ' '){
//             tmp = atoi(strnum + i);
//             if (tmp < min)
//                 min = tmp;
//             if (tmp > max)
//                 max = tmp;
//         }
//     }
//     sprintf(result, "%d %d", max, min); // print your answer to result
// }
