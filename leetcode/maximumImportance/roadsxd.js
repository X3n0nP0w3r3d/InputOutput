// TEST
n = 5;
roads = [[0,3],[2,4],[1,3]];
// o(n!) algorithms are all i can do
var maxValue = 0;
var nodeConnections = {};
var nodeValues = {};

var maximumImportance = function(n, roads) {
    // count number of connections for each node
    for(let i=0; i<roads.length; i++){
        let first = String(roads[i][0]);
        let second = String(roads[i][1]);
        nodeConnections[first] ? nodeConnections[first] += 1 : nodeConnections[first] = 1;
        nodeConnections[second] ? nodeConnections[second] += 1 : nodeConnections[second] = 1;
        nodeValues[roads[i][0]] = 0;
        nodeValues[roads[i][1]] = 0;
    }
    // sort for easy looping (in reverse)
    var sortable = Object.keys(nodeConnections)
    sortable.sort(function(a, b) {
        return nodeConnections[b] - nodeConnections[a];
    })
    for(node in sortable){
        nodeValues[sortable[node]] = (n - sortable.indexOf(sortable[node]))
    }
    for(nodeList in roads){
        maxValue += (nodeValues[roads[nodeList][0]] + nodeValues[roads[nodeList][1]])
    }
    console.log(maxValue);
};

maximumImportance(n, roads);

