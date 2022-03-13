# 95/97 time out
class Solution:
    def digArtifacts(self, n: int, artifacts: list, dig: list) -> int:
        digged = 0

        for i in range(0, len(artifacts)):
            artifact = []
            # for x in range(artifacts[i][0], artifacts[i][2] + 1):
            #     for y in range(artifacts[i][1], artifacts[i][3] + 1):
            #         temp = [x, y]
            #         artifact.append(temp)
            artifact = [[x, y] for x in range(artifacts[i][0], artifacts[i][2] + 1)
                        for y in range(artifacts[i][1], artifacts[i][3] + 1)]
            # print(artifact)

            flag = 1
            for i in artifact:
                if i not in dig:
                    flag = 0
                    break
            if flag == 1:
                digged += 1

        return digged


def TEST(n: int, artifacts: list, dig: list) -> None:
    s = Solution()
    res = s.digArtifacts(n, artifacts, dig)
    print(res)


TEST(2, [[0, 0, 0, 0], [0, 1, 1, 1]], [[0, 0], [0, 1]])  # 1
TEST(2, [[0, 0, 0, 0], [0, 1, 1, 1]], [[0, 0], [0, 1], [1, 1]])  # 2
TEST(6,
     [[0, 2, 0, 5], [0, 1, 1, 1], [3, 0, 3, 3], [4, 4, 4, 4], [2, 1, 2, 4]],
     [[0, 2], [0, 3], [0, 4], [2, 0], [2, 1], [2, 2], [2, 5], [3, 0], [3, 1],
      [3, 3], [3, 4], [4, 0], [4, 3], [4, 5], [5, 0], [5, 1], [5, 2], [5, 4],
      [5, 5]])  # 0
