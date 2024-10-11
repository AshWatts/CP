from typing import List
from heapq import heappop, heappush

class Solution:
    def smallestChair(self, times: List[List[int]], targetFriend: int) -> int:
        order = sorted(range(len(times)), key=lambda x: times[x][0])
        emptySeats, takenSeats = list(range(len(times))), []

        for i in order:
            ar, lv = times[i]

            while takenSeats and takenSeats[0][0] <= ar:
                heappush(emptySeats, heappop(takenSeats)[1])
            seat = heappop(emptySeats)

            if i == targetFriend:
                return seat

            heappush(takenSeats, (lv, seat))

def main():
    solution = Solution()
    print(solution.smallestChair([[1, 4], [2, 3], [4, 6]], 1))  # Test case 1
    print(solution.smallestChair([[3, 10], [1, 5], [2, 3]], 0))  # Test case 2

if __name__ == "__main__":
    main()
