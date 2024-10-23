from collections import deque
from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def replaceValueInTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return None
        
        q = deque([root])
        
        while q:
            level_length = len(q)
            level_sum = 0
            nodes = []

            for _ in range(level_length):
                node = q.popleft()
                level_sum += node.val
                nodes.append(node)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

            for node in nodes:
                sibling_sum = level_sum - node.val
                node.val = sibling_sum

        return root

root1 = TreeNode(1, TreeNode(2), TreeNode(3))
solution = Solution()
new_root1 = solution.replaceValueInTree(root1)
print(new_root1.val, new_root1.left.val, new_root1.right.val)

root2 = TreeNode(4, TreeNode(1, TreeNode(5), TreeNode(6)), TreeNode(2))
new_root2 = solution.replaceValueInTree(root2)
print(new_root2.val, new_root2.left.val, new_root2.right.val)