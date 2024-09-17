from collections import Counter  # Import Counter from collections

class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        all_string = s1.split(' ')
        all_string += s2.split(' ')  # Concatenate both sentences after splitting
        counter = Counter(all_string)  # Use the imported Counter

        ans = []
        for s, cnt in counter.items():
            if cnt == 1:
                ans.append(s)
        return ans

def main():
    s1 = "this apple is sweet"
    s2 = "this apple is sour"
    solution = Solution()
    result = solution.uncommonFromSentences(s1, s2)
    print(result)

if __name__ == "__main__":
    main()
