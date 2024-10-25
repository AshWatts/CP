class Solution:
    def removeSubfolders(self, folder: list[str]) -> list[str]:
        folder.sort()
        ans = [folder[0]]
        for i in range(1, len(folder)):
            last_folder = ans[-1] + '/'
            if not folder[i].startswith(last_folder):
                ans.append(folder[i])
        return ans

# Test cases
sol = Solution()
print(sol.removeSubfolders(["/a","/a/b","/c/d","/c/d/e"]))  # Output: ["/a", "/c/d"]
print(sol.removeSubfolders(["/a","/a/b/c","/a/b","/b"]))     # Output: ["/a", "/b"]