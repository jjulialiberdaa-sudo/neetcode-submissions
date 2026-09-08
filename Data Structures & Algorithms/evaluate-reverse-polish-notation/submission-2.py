class Solution:
    def evalRPN(self, tokens: List[str]) -> int:

        while len(tokens) > 1:
            for i in range(len(tokens)):
                if tokens[i] in '+-*/':
                    a, b = int(tokens[i-2]), int(tokens[i-1])
                    if tokens[i] == '+':
                        ans = a+b
                    elif tokens[i] == '-':
                        ans = a-b
                    elif tokens[i] == '*':
                        ans = a*b
                    else:
                        ans = int(a/b)
                    tokens = tokens[:i-2] + [str(ans)] + tokens[i+1:]
                    break
        return int(tokens[0])





