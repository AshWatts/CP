class Solution:
    def areSentencesSimilar(self, sentence1: str, sentence2: str) -> bool:
        words1 = sentence1.split()
        words2 = sentence2.split()
        
        if len(words1) < len(words2):
            words1, words2 = words2, words1
        
        start, end = 0, 0
        n1, n2 = len(words1), len(words2)
        
        while start < n2 and words1[start] == words2[start]:
            start += 1
        
        while end < n2 and words1[n1 - end - 1] == words2[n2 - end - 1]:
            end += 1
        
        return start + end >= n2

def main():
    solution = Solution()
    
    sentence1 = "My name is John"
    sentence2 = "My name"
    print(solution.areSentencesSimilar(sentence1, sentence2))  # Output: True

    sentence1 = "A quick brown fox"
    sentence2 = "quick brown"
    print(solution.areSentencesSimilar(sentence1, sentence2))  # Output: False

if __name__ == "__main__":
    main()
