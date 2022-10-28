Floyd’s Cycle Finding Algorithm
• Difficulty Level : Basic
• Last Updated : 16 May, 2022
• Read
• Discuss
Floyd’s cycle finding algorithm or Hare-Tortoise algorithm is a pointer algorithm that uses only two pointers, moving through the sequence at different speeds. This algorithm is used to find a loop in a linked list. It uses two pointers one moving twice as fast as the other one. The faster one is called the faster pointer and the other one is called the slow pointer.
How Does Floyd’s Cycle Finding Algorithm Works?
While traversing the linked list one of these things will occur-
• The Fast pointer may reach the end (NULL) this shows that there is no loop n the linked list.
• The Fast pointer again catches the slow pointer at some time therefore a loop exists in the linked list.
Example:



Pseudocode:
• Initialize two-pointers and start traversing the linked list.
• Move the slow pointer by one position.
• Move the fast pointer by two positions.
• If both pointers meet at some point then a loop exists and if the fast pointer meets the end position then no loop exists.
Below is the C++ program to implement the above approach:
• C++
• Java
• Python3
• C#
• Javascript

// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
 
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
// initialize a new head for the linked list
Node* head = NULL;
class Linkedlist {
public:
    // insert new value at the start
    void insert(int value)
    {
        Node* newNode = new Node(value);
        if (head == NULL)
            head = newNode;
        else {
            newNode->next = head;
            head = newNode;
        }
    }
 
    // detect if there is a loop
    // in the linked list
    bool detectLoop()
    {
        Node *slowPointer = head,
             *fastPointer = head;
 
        while (slowPointer != NULL
               && fastPointer != NULL
               && fastPointer->next != NULL) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            if (slowPointer == fastPointer)
                return 1;
        }
 
        return 0;
    }
};
 
int main()
{
    Linkedlist l1;
    // inserting new values
    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    l1.insert(50);
 
    // adding a loop for the sake
    // of this example
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
 
    temp->next = head;
 
    // loop added;
 
    if (l1.detectLoop())
        cout << "Loop exists in the"
             << " Linked List" << endl;
    else
        cout << "Loop does not exists "
             << "in the Linked List" << endl;
 
    return 0;
}
Output
Loop exists in the Linked List
Time complexity: O(n), as the loop is traversed once. 
Auxiliary Space: O(1), only two pointers are used therefore constant space complexity.
Why Does Floyd’s Algorithm Works?
Let us consider an example:

• Let,
X = Distance between the head(starting) to the loop starting point.
Y = Distance between the loop starting point and the first meeting point of both the pointers.
C = The distance of the loop
• So before both the pointer meets-
The slow pointer has traveled X + Y + s * C distance, where s is any positive constant number.
The fast pointer has traveled X + Y + f * C distance, where f is any positive constant number.
• Since the fast pointer is moving twice as fast as the slow pointer, we can say that the fast pointer covered twice the distance the slow pointer covered. Therefore-                  
 X + Y + f * C = 2 * (X + Y + s * C)
X + Y = f * C – 2 * s * C
We can say that,
f * C – 2 * s * C = (some integer) * C
                         = K * C
Thus,
X + Y = K * C       – ( 1 )
X = K * C – Y        – ( 2 )
Where K is some positive constant.    
• Now if reset the slow pointer to the head(starting position) and move both fast and slow pointer by one unit at a time, one can observe from 1st and 2nd equation that both of them will meet after traveling X distance at the starting of the loop because after resetting the slow pointer and moving it X distance, at the same time from loop meeting point the fast pointer will also travel K * C – Y distance(because it already has traveled Y distance).
• From equation (2) one can say that X = K * C – Y therefore, both the pointers will travel the distance X i.e. same distance after the pink node at some point to meet at the starting point of the cycle.
• Here, by some point, it means that the fast pointer can complete the K * C distance out of which it has already covered the Y distance.
Below is the C++ program to implement the above approach-
• C++
• Java

// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
 
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
// initialize a new head
// for the linked list
Node* head = NULL;
class Linkedlist {
public:
    // insert new value at the start
    void insert(int value)
    {
        Node* newNode = new Node(value);
        if (head == NULL)
            head = newNode;
        else {
            newNode->next = head;
            head = newNode;
        }
    }
 
    // detect if there is a loop
    // in the linked list
    Node* detectLoop()
    {
        Node *slowPointer = head,
             *fastPointer = head;
 
        while (slowPointer != NULL
               && fastPointer != NULL
               && fastPointer->next != NULL) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            if (slowPointer == fastPointer)
                break;
        }
 
        // if no loop exists
        if (slowPointer != fastPointer)
            return NULL;
 
        // reset slow pointer to head
        // and traverse again
        slowPointer = head;
        while (slowPointer != fastPointer) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next;
        }
 
        return slowPointer;
    }
};
 
int main()
{
    Linkedlist l1;
    // inserting new values
    l1.insert(10);
    l1.insert(20);
    l1.insert(30);
    l1.insert(40);
    l1.insert(50);
 
    // adding a loop for the sake
    // of this example
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    // loop added;
    temp->next = head;
 
    Node* loopStart = l1.detectLoop();
    if (loopStart == NULL)
        cout << "Loop does not exists" << endl;
    else {
        cout << "Loop does exists and starts from "
             << loopStart->data << endl;
    }
 
    return 0;
}
Output
Loop does exists and starts from 50
Time complexity: O(n), as we have traversed the loop once and then traveled X distance. 
Auxiliary space: O(1), as only pointers are used therefore constant space complexity.

From <https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/> 

Now To know on which node the cycle is starting 

Now store the node where the intersection has happened and then start the new slow2 from begin
And contonue the old slow these two slows will intersect at the node where the linklist will start the circular part



