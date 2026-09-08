class Solution:
    def isValid(self, s: str) -> bool:
        o = [s.count('('), s.count('['), s.count('{')]
        c = [s.count(')'), s.count(']'), s.count('}')]
        if o != c:
            return False
        po = []
        for i in s:
            if i in [')', ']', '}']:
                if po:
                    p = po.pop()
                    if (i == ')' and p != '(') or (i == ']' and p != '[') or (i == '}' and p != '{'):
                        return False
                else:
                    return False
            elif i in ['(', '[', '{']:
                po.append(i)
        return True

        '''o = [0, 0, 0] # (, [, {
        c = [0, 0, 0] # ), ], }
        po = '' # previous open
        for i in s:

            if i == '(':
                o[0] += 1
                po = i
            elif i == '[':
                o[1] += 1
                po = i
            elif i == '{':
                o[2] += 1
                po = i
            
            elif (i == ')' and po != '(') or (i == ']' and po != '[') or (i == '}' and po != '{'):
                return False'''
            


            