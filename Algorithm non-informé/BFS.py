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
visited = [] #liste des noeuds visités
queue = []  #file d'attente des noeuds à exploré 
def bfs (visited , graph , node) : 
    visited.append(node); #ajouter le noeud actuelle à visited et à la file 
    queue.append(node); 
    while queue : #tant que la file est plein
        m = queue.pop(0) ; #supprimer le premier element de la file
        print(m,end=" ") #afficher le 
        for neighbour in graph[m] : #parcourir les voisisn du noeud actuelle
            if neighbour not in visited : 
                visited.append(neighbour) #si le voisin n'est pas encotre visite ajouter le dans visited et file 
                queue.append(neighbour)
bfs(visited,graph,"B")

