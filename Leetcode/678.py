# Python Stack Question
class Solution:
    def checkValidString(self, s: str) -> bool:
        stack = []
        ast = []
        for i in range(len(s)):
            if s[i] == '(':
                stack.append(i)
            if s[i] == '*':
                ast.append(i)
            if s[i] == ')':
                if len(stack)>0:
                    stack.pop(-1)
                elif len(ast)>0:
                    ast.pop(-1)
                else:
                    return False
        if len(stack) == 0:
            return True
        while(len(stack)>0 and len(ast)>0):
            if stack[-1] > ast[-1]:
                return False
            stack.pop(-1)
            ast.pop(-1)
        return (len(stack) == 0)
        