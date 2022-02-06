/**
 * 1047 编程团体赛
 * 提交次数: 2
 * TIPS:
 *  - 队伍编号是不一定小于 N
 */
#include <stdio.h>
#define SIZE 10002

int total[SIZE];

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            int team_id, player_id, score;
            if (scanf("%d-%d %d", &team_id, &player_id, &score) == 3) {
                total[team_id] += score;
            }
        }

        int top_team_id = 1, top_team_score = total[1];
        for (int i = 2; i < SIZE; i++) {
            if (total[i] > top_team_score) {
                top_team_id = i;
                top_team_score = total[i];
            }
        }
        printf("%d %d\n", top_team_id, top_team_score);
    }

    return 0;
}
