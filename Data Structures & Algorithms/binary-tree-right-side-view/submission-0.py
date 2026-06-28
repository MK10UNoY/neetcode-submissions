# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        if root is None: return []
        queue = deque([root])
        while len(queue):
            lvl_sz = len(queue)
            for i in range(lvl_sz):
                node = queue.pop()
                if node:
                    if i == lvl_sz - 1:
                        res.append(node.val)
                    if node.left: queue.appendleft(node.left)
                    if node.right: queue.appendleft(node.right)
        return res