class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        return False if len(s) != len(goal) else s in goal + goal
