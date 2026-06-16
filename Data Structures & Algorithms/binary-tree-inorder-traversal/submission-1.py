# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        stack = []
        curr = root
        while stack or curr is not None:
            if curr is None:
                node = stack.pop()
                res.append(node.val)
                curr = node.right
            else:
                stack.append(curr)
                curr = curr.left
            # how to increment the curr pointer
        return res