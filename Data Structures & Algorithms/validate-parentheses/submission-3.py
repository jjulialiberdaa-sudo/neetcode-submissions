class Solution:
    def isValid(self, s: str) -> bool:
        stack = [] # previous open bracket
        matches = {')':'(', ']':'[', '}':'{'}
        for char in s:
            if char in '([{':
                stack.append(char)
            else: # closing bracket
                if not stack:
                    return False
                if stack.pop() != matches[char]:
                    return False
        return len(stack) == 0