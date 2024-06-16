class Robot:

    def __init__(self, width: int, height: int):
        self.w = width
        self.h = height
        self.pos = [0, 0]
 
        self.arr = []
        for i in range(width):
            self.arr.append([i, 0])
        for i in range(1, height):
            self.arr.append([width - 1, i])
        for i in range(1, width):
            self.arr.append([width - 1 - i, height - 1])
        for i in range(1, height - 1):
            self.arr.append([0, height - 1 - i])
        
        self.flag = 1

    def step(self, num: int) -> None:
	
        i = self.arr.index(self.pos)
        self.pos = self.arr[(i + num) % (self.w * 2 + self.h * 2 - 4)]
		
        self.flag = 0

    def getPos(self) -> List[int]:
        return self.pos

    def getDir(self) -> str:
        if self.flag:
            return "East"

        if self.pos[0] == 0:
            if self.pos[1] == self.h - 1:
                return "West"
            else:
                return "South"

        if self.pos[0] == self.w - 1:
            if self.pos[1] == 0:
                return "East"
            else:
                return "North"

        if self.pos[1] == 0:
            return "East"

        return "West"