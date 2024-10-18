n=5
roads = [[0,1],[1,2],[2,3],[0,2],[1,3],[2,4]]

def maximumImportance(self, n, roads):
    maxValue = 0
    nodeConnections = {}
    nodeValues = {}
    for i in range(len(roads)):
        first = str(roads[i][0])
        second = str(roads[i][1])

        if(first in nodeConnections):
            nodeConnections[first] += 1
        else:
            nodeConnections[first] = 1
        if(second in nodeConnections):
            nodeConnections[second] += 1
        else:
            nodeConnections[second] = 1
        nodeValues[str(roads[i][0])] = 0
        nodeValues[str(roads[i][1])] = 0
    sortable = sorted(nodeConnections.items(), key=lambda x: x[1], reverse=True)
    #print(sortable, nodeConnections)
    for node in sortable:
        nodeValues[node[0]] = n
        n-=1
    for nodeList in roads:
        maxValue += (nodeValues[str(nodeList[0])] + nodeValues[str(nodeList[1])])
    return maxValue

print(maximumImportance("null", n, roads))