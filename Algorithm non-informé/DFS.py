graph = {
    "B" : ["A","D","E"],
    "A" : ["B","C"],
    "C" : ["A","D"],
    "D" : ["B","C","E"],
    "E" : ["B","D","G","F"],
    "F" : ["E","G"],
    "G" : ["E","F","H"],
    "H" : ["G"]
}
visited = set()  # Set des element vistité
def DFS (visited,graph,node): 
    if node not in visited :  #si le noeud actuelle n'est pas encore visité
        print(node ,end=" ") #afficher le 
        visited.add(node) # et ajouter le dans visited
        for neighbour in graph[node] : #pour tous les seccesseur de noued
            DFS(visited,graph,neighbour) # fonction recursive pour explorer les voisin non visités 
DFS(visited,graph,"B")
