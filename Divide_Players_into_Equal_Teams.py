from typing import List

class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        total_skill = skill[0] + skill[-1]
        chemistry_sum = 0

        for i in range(len(skill) // 2):
            if skill[i] + skill[-i - 1] != total_skill:
                return -1
            chemistry_sum += skill[i] * skill[-i - 1]

        return chemistry_sum

def main():
    solution = Solution()
    skill = [3, 2, 5, 1, 3, 4]
    result = solution.dividePlayers(skill)
    print(f"Total Chemistry: {result}")

if __name__ == "__main__":
    main()