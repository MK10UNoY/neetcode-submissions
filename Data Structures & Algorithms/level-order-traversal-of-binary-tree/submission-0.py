# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        res = []
        if root is None:
            return []
        queue = deque([])
        queue.appendleft(root)
        while len(queue):
            lvl_sz= len(queue)
            lvl_lst = []
            for _ in range(lvl_sz):
                node = queue.pop()
                if node:
                    lvl_lst.append(node.val)
                    if node.left: queue.appendleft(node.left)
                    if node.right: queue.appendleft(node.right)
            if lvl_lst:
                res.append(lvl_lst)
        return res