from collections import deque

class Solution:
    def parseBoolExpr(self, expression: str) -> bool:
        st = deque()
        for c in expression:
            if c == "," or c == "(":
                continue
            if c in ["t", "f", "!", "&", "|"]:
                st.append(c)
            elif c == ")":
                has_true = False
                has_false = False
                while st[-1] not in ["!", "&", "|"]:
                    top_value = st.pop()
                    if top_value == "t":
                        has_true = True
                    elif top_value == "f":
                        has_false = True
                op = st.pop()
                if op == "!":
                    st.append("t" if not has_true else "f")
                elif op == "&":
                    st.append("f" if has_false else "t")
                else:  # op == "|"
                    st.append("t" if has_true else "f")
        return st[-1] == "t"

solution = Solution()

expression1 = "|(t,f)"
result1 = solution.parseBoolExpr(expression1)
print(f"Expression: {expression1}, Result: {result1}") 

expression2 = "&(t,f)"
result2 = solution.parseBoolExpr(expression2)
print(f"Expression: {expression2}, Result: {result2}") 