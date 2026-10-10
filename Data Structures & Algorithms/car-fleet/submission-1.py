class Solution:
    def carFleet(self, target: int, position: list[int], speed: list[int]) -> int:
        data = [(position[i],speed[i]) for i in range(len(position))]
        data.sort()
        fleet = 1
        time = (target-data[-1][0])/data[-1][1]
        for i in range(len(position)-2,-1,-1):
            
            
            new_time = (target-data[i][0])/data[i][1]
            if new_time > time :
                time = new_time
                fleet+= 1
                
        return fleet
                