import mesa 
import time 
class Agent_BFS (mesa.Agent): 
    def __init__(self,id,model) : 
        super().__init__(id,model)
        self.graph = self.model.graphe
        self.start = self.model.start
        self.end = self.model.goal 
    def BFS (self,graph,node,goal): 
        visited = []
        queue = []
        visited.append(node)
        queue.append(node)
        while queue : 
            m = queue.pop(0)
            print(m,end=" ")
            if m == goal : 
                return 1
            for n in graph[m]: 
                if n not in visited : 
                    visited.append(n)
                    queue.append(n)
        return 0
    def step(self) : 
        start_time = time.perf_counter()
        print("BFS :")
        self.BFS(self.graph,self.start,self.end)
        end_time = time.perf_counter()
        exec_time = end_time - start_time 
        print(f"Complexite est :{exec_time} ")
class Agent_DFS (mesa.Agent): 
    def __init__(self,id,model) : 
        super().__init__(id,model)
        self.graph = self.model.graphe
        self.start = self.model.start
        self.end = self.model.goal 
        self.visited = set()
        self.end_time = 0
    def DFS(self,graph,node,goal,visited): 
        if node not in visited : 
            print(node,end=" ")
            visited.add(node)
        if node == goal :
            self.end_time = time.perf_counter()
        for n in graph[node] :
            self.DFS(graph,n,goal,visited) 
    def step(self) : 
        print("DFS :")
        start_time = time.perf_counter()
        self.DFS(self.graph,self.start,self.end,self.visited)
        exec_time = self.end_time - start_time ; 
        print(f"Complexite  :{exec_time} ")
class Env (mesa.Model): 
    def __init__(self) : 
        super().__init__()
        self.graphe = {'5' : ['3','7'],
                        '3' : ['2', '4'],
                        '7' : ['8'],
                        '2' : [],
                        '4' : ['8'],
                        '8' : []}
        self.start = "5" 
        self.goal = "8"
        self.BFS = Agent_BFS(0,self)
        self.DFS = Agent_DFS(1,self)
        self.plan = mesa.time.SimultaneousActivation(self)
        self.plan.add(self.BFS)
        self.plan.add(self.DFS)
    def step(self): 
        self.plan.step()

model = Env()
model.step()
