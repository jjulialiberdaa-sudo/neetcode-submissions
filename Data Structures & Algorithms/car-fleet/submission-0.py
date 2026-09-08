class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        n = len(position)
        cars = [(position[x], speed[x]) for x in range(n)]
        cars.sort(reverse = True)
        stack = []

        for p, s in cars:
            stack.append((target-p)/s)
            if len(stack)>=2 and stack[-1] <= stack[-2]:
                stack.pop()

        return len(stack)