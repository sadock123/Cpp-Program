Skip to content
logo
Algorithms for Competitive Programming
Dijkstra - finding shortest paths from given vertex

Search

 GitHub
3.6k
898
Home
 
Algebra
 
Data Structures
 
Dynamic Programming
 
String Processing
 
Linear Algebra
 
Combinatorics
 
Numerical Methods
 
Geometry
 
Graphs
 
Miscellaneous
Graphs
Graph traversal
Connected components, bridges, articulations points
Single-source shortest paths
Dijkstra - finding shortest paths from given vertex
Algorithm
Restoring Shortest Paths
Proof
Implementation
References
Practice Problems
Dijkstra on sparse graphs
Bellman-Ford - finding shortest paths with negative weights
0-1 BFS
D´Esopo-Pape algorithm
All-pairs shortest paths
Spanning trees
Cycles
Lowest common ancestor
Flows and related problems
Matchings and related problems
Miscellaneous
Last update: June 8, 2022  Translated From: e-maxx.ru
Dijkstra Algorithm
You are given a directed or undirected weighted graph with  vertices and  edges. The weights of all edges are non-negative. You are also given a starting vertex . This article discusses finding the lengths of the shortest paths from a starting vertex  to all other vertices, and output the shortest paths themselves.

This problem is also called single-source shortest paths problem.

Algorithm
Here is an algorithm described by the Dutch computer scientist Edsger W. Dijkstra in 1959.

Let's create an array  where for each vertex  we store the current length of the shortest path from  to  in . Initially , and for all other vertices this length equals infinity. In the implementation a sufficiently large number (which is guaranteed to be greater than any possible path length) is chosen as infinity.

In addition, we maintain a Boolean array  which stores for each vertex  whether it's marked. Initially all vertices are unmarked:

The Dijkstra's algorithm runs for  iterations. At each iteration a vertex  is chosen as unmarked vertex which has the least value :

Evidently, in the first iteration the starting vertex  will be selected.

The selected vertex  is marked. Next, from vertex  relaxations are performed: all edges of the form  are considered, and for each vertex  the algorithm tries to improve the value . If the length of the current edge equals , the code for relaxation is:

After all such edges are considered, the current iteration ends. Finally, after  iterations, all vertices will be marked, and the algorithm terminates. We claim that the found values  are the lengths of shortest paths from  to all vertices .

Note that if some vertices are unreachable from the starting vertex , the values  for them will remain infinite. Obviously, the last few iterations of the algorithm will choose those vertices, but no useful work will be done for them. Therefore, the algorithm can be stopped as soon as the selected vertex has infinite distance to it.

Restoring Shortest Paths
Usually one needs to know not only the lengths of shortest paths but also the shortest paths themselves. Let's see how to maintain sufficient information to restore the shortest path from  to any vertex. We'll maintain an array of predecessors  in which for each vertex   is the penultimate vertex in the shortest path from  to . Here we use the fact that if we take the shortest path to some vertex  and remove  from this path, we'll get a path ending in at vertex , and this path will be the shortest for the vertex . This array of predecessors can be used to restore the shortest path to any vertex: starting with , repeatedly take the predecessor of the current vertex until we reach the starting vertex  to get the required shortest path with vertices listed in reverse order. So, the shortest path  to the vertex  is equal to:

Building this array of predecessors is very simple: for each successful relaxation, i.e. when for some selected vertex , there is an improvement in the distance to some vertex , we update the predecessor vertex for  with vertex :

Proof
The main assertion on which Dijkstra's algorithm correctness is based is the following:

After any vertex  becomes marked, the current distance to it  is the shortest, and will no longer change.

The proof is done by induction. For the first iteration this statement is obvious: the only marked vertex is , and the distance to is  is indeed the length of the shortest path to . Now suppose this statement is true for all previous iterations, i.e. for all already marked vertices; let's prove that it is not violated after the current iteration completes. Let  be the vertex selected in the current iteration, i.e.  is the vertex that the algorithm will mark. Now we have to prove that  is indeed equal to the length of the shortest path to it .

Consider the shortest path  to the vertex . This path can be split into two parts:  which consists of only marked nodes (at least the starting vertex  is part of ), and the rest of the path  (it may include a marked vertex, but it always starts with an unmarked vertex). Let's denote the first vertex of the path  as , and the last vertex of the path  as .

First we prove our statement for the vertex , i.e. let's prove that . This is almost obvious: on one of the previous iterations we chose the vertex  and performed relaxation from it. Since (by virtue of the choice of vertex ) the shortest path to  is the shortest path to  plus edge , the relaxation from  set the value of  to the length of the shortest path .

Since the edges' weights are non-negative, the length of the shortest path  (which we just proved to be equal to ) does not exceed the length  of the shortest path to the vertex . Given that  (because Dijkstra's algorithm could not have found a shorter way than the shortest possible one), we get the inequality:

On the other hand, since both vertices  and  are unmarked, and the current iteration chose vertex , not , we get another inequality:

From these two inequalities we conclude that , and then from previously found equations we get:

Q.E.D.

Implementation
Dijkstra's algorithm performs  iterations. On each iteration it selects an unmarked vertex  with the lowest value , marks it and checks all the edges  attempting to improve the value .

The running time of the algorithm consists of:

 searches for a vertex with the smallest value  among  unmarked vertices
 relaxation attempts
For the simplest implementation of these operations on each iteration vertex search requires  operations, and each relaxation can be performed in . Hence, the resulting asymptotic behavior of the algorithm is:

This complexity is optimal for dense graph, i.e. when . However in sparse graphs, when  is much smaller than the maximal number of edges , the problem can be solved in  complexity. The algorithm and implementation can be found on the article Dijkstra on sparse graphs.


const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}
Here the graph  is stored as adjacency list: for each vertex   contains the list of edges going from this vertex, i.e. the list of pair<int,int> where the first element in the pair is the vertex at the other end of the edge, and the second element is the edge weight.

The function takes the starting vertex  and two vectors that will be used as return values.

First of all, the code initializes arrays: distances , labels  and predecessors . Then it performs  iterations. At each iteration the vertex  is selected which has the smallest distance  among all the unmarked vertices. If the distance to selected vertex  is equal to infinity, the algorithm stops. Otherwise the vertex is marked, and all the edges going out from this vertex are checked. If relaxation along the edge is possible (i.e. distance  can be improved), the distance  and predecessor  are updated.

After performing all the iterations array  stores the lengths of the shortest paths to all vertices, and array  stores the predecessors of all vertices (except starting vertex ). The path to any vertex  can be restored in the following way:


vector<int> restore_path(int s, int t, vector<int> const& p) {
    vector<int> path;

    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}
References
Edsger Dijkstra. A note on two problems in connexion with graphs [1959]
Thomas Cormen, Charles Leiserson, Ronald Rivest, Clifford Stein. Introduction to Algorithms [2005]
Practice Problems
Timus - Ivan's Car [Difficulty:Medium]
Timus - Sightseeing Trip
SPOJ - SHPATH [Difficulty:Easy]
Codeforces - Dijkstra? [Difficulty:Easy]
Codeforces - Shortest Path
Codeforces - Jzzhu and Cities
Codeforces - The Classic Problem
Codeforces - President and Roads
Codeforces - Complete The Graph
TopCoder - SkiResorts
TopCoder - MaliciousPath
SPOJ - Ada and Trip
LA - 3850 - Here We Go(relians) Again
GYM - Destination Unknown (D)
UVA 12950 - Even Obsession
GYM - Journey to Grece (A)
UVA 13030 - Brain Fry
UVA 1027 - Toll
UVA 11377 - Airport Setup
Codeforces - Dynamic Shortest Path
UVA 11813 - Shopping
UVA 11833 - Route Change
SPOJ - Easy Dijkstra Problem
LA - 2819 - Cave Raider
UVA 12144 - Almost Shortest Path
UVA 12047 - Highest Paid Toll
UVA 11514 - Batman
Codeforces - Team Rocket Rises Again
UVA - 11338 - Minefield
UVA 11374 - Airport Express
UVA 11097 - Poor My Problem
UVA 13172 - The music teacher
Codeforces - Dirty Arkady's Kitchen
SPOJ - Delivery Route
SPOJ - Costly Chess
CSES - Shortest Routes 1
CSES - Flight Discount
CSES - Flight Routes
Contributors:
bimalkant-lauhny (31.44%)jakobkogler (22.68%)tcNickolas (17.01%)Morass (12.37%)likecs (8.76%)adamant-pwn (3.09%)Aryamn (1.55%)ChamanAgrawal (1.55%)RodionGork (1.55%)
Text is available under the Creative Commons Attribution Share Alike 4.0 International License
Copyright © 2014 - 2022 by https://github.com/e-maxx-eng
Made with Material for MkDocs
