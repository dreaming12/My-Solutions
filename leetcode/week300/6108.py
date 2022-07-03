class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        dict = {}
        alphabet = 'abcdefghijklmnopqrstuvwxyz'
        decoded = ''

        index = 0
        for i in range(len(key)):
            if key[i] != ' ' and key[i] not in dict.keys():
                dict[key[i]] = alphabet[index]
                index += 1

        for i in range(len(message)):
            if message[i] != ' ':
                decoded += dict[message[i]]
            else:
                decoded += ' '

        return decoded


if __name__ == '__main__':
    # key = "the quick brown fox jumps over the lazy dog"
    # message = "vkbs bs t suepuv"

    key = "eljuxhpwnyrdgtqkviszcfmabo"
    message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb"

    s = Solution()
    print(s.decodeMessage(key, message))
