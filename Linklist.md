



Let me give you a quick introduction about myself.
I'm a 3 year Student studying Computer Science as a major
I'm just an average person like other's.
I'm not talented enough, but I work hard & what I know is "Hard work always beats talent, when talent doesn't work Hard!!”


It's not an language specific article. Trust me, you will learn a lot. Right now it's written in Java but trust me it will never be a issue.


So, with that let's start.
Hello, my fellow programmer's today I'm going to teach you how you can become master's in LinkedList
If you want to become master, then you have to follow some rules, only after that you can become Magician or called Master's in LinkedList
Rules:
	• Bring up your pen and a fresh new notebook where you have to write all of these thing's which I will teach you right now.
	• If you had started learning linked list, then don't quit. Here's why, ask yourself this question when you feel about to quit, "If you had to leave, then why you had start?"
	• Look back again at above 2 rule's
Remember : Practice makes a men perfect


													    #Introduction


What is linked list ?
Linked list is an linear data structure, which consists of a group of nodes in a sequence [OR] Linked list in which we store data in linear from!
But, Array also stores data in linear form. Then what's the difference!
In array we have to first define the size of the Array
Let's say:-
int arr[] = new int[8]
Array :- [10, 20, 15, 18, 16, 10, 20, 16]
And each bit has it's memory address, where 1 bit size = 4, therefore 8 bit = 8 * 4 = 32 bit.
But linked list is dynamic, we don't have to define it's size.

In linked list we can add element as many as we want. But, in array size is fixed. So, to add new element we have to create a new array!

     Advantages                                              DisAdvantages
1. Dynamic Nature                                   1. More memory usage due to address pointer
2. Optimal insertion & deletion                     2. Slow traversal compared to arrays
3. Stack's & queues can be easily implemented       3. No reverse traversal in singly linked list
4. No memory wastage                                4. No random access
Real-life Application's :-
	• Previous - n - next page in browser
	• Image Viewer
	• Music Player


											    #Type's of Linked list


There are 4 type's of linked list, but in general we use 3 type's only:-
	1. Singly-linked list: linked list in which each node points to the next node and the last node points to null
	
	2. Doubly-linked list: linked list in which each node has two pointers, p and n, such that p points to the previous node and n points to the next node; the last node's n pointer points to null
	
	3. Circular-linked list: linked list in which each node points to the next node and the last node points back to the first node
	
	4. Circular-Doubly-linked list:
	
Time Complexity:
Access: O(n)
Search: O(n)
Insert: O(1)
Remove: O(1)


Let's see how to create a linked list
Code :-

Therefore,

Output:-
--------       --------       --------
|  10  |  -->  |  20  |  -->  |  30  |
--------       --------       --------


Let's see how we traverse in linked list
Code:-

Output:-
--------       --------       --------
|  10  |  -->  |  20  |  -->  |  30  |  -->  X
--------       --------       --------
curr^
print:- 10
**************************************************
--------       --------       --------
|  10  |  -->  |  20  |  -->  |  30  |  -->  X
--------       --------       --------
               curr^
print:- 10, 20
**************************************************
--------       --------       --------
|  10  |  -->  |  20  |  -->  |  30  |  -->  X
--------       --------       --------
                              curr^
print:- 10, 20, 30
**************************************************
--------       --------       --------
|  10  |  -->  |  20  |  -->  |  30  |  -->  X
--------       --------       --------
                                           curr^
print & return answer :- 10, 20, 30


Let's see how to insert an element[node] in linked list
Code:-

Key Point :- Never miss your node reference! Otherwise, you will lose your linked list;
Output:-
Given :-
--------       --------       --------        --------         --------
|  5  |  -->   |  10  |  -->  |  5  |  -->    |  24  |  -->    |  40  |
--------       --------       --------        --------         --------
  
Insert 30 at 3 index
head˅
--------       --------       --------                  --------         --------
|  5  |  -->   |  10  |  -->  |  5  | --|       |-->    |  24  |  -->    |  40  |
--------       --------       --------  |       |       --------         --------
prev^                         prev^     ˅       |
                                          --------
                                          |  30  |
										  --------
										  toAdd^


Let's delete an element[node] from linked list
Code :-

Key point:- In java, if there is no reference to a node in linked list, garbage collector will take it off.
Ouput :-
Given :-
--------       --------       --------        --------         --------
|  5  |  -->   |  10  |  -->  | 15  |  -->    |  12  |  -->    |  14  |  -->    X
--------       --------       --------        --------         --------
delete 3rd element from linked list
--------       --------       --------        --------         --------
|  5  |  -->   |  10  |  -->  | 15  | |-X-    |  12   | |----> |  14  |  -->    X
--------       --------       --------|       --------  |      --------
                                      |-----------------|


                                                       Best Question's to practice


Problem list is in order from EASY to HARD in a sequence. And all question's are available on LeetCode!
	1. Reverse a Linked List
	2. Middle of the Linked List
	3. Delete Node in a Linked List
	4. Merge Two Sorted Linked List
	5. Remove duplicates from sorted list
	6. Intersection of two linked list
	7. Linked List Cycle
	8. Palindrome Linked List
	9. Swapping Nodes in a Linked List
	10. Odd Even Linked List
	11. Remove nth node from Linked List
	12. Add Two Numbers
	13. Swap Nodes in Pairs
	14. Split Linked List in Parts
	15. Insertion sort on Linked List
	16. Merge sort on Linked List
	17. Copy list with random pointers
	18. Remove zero sum from consecutive nodes from linked list
	19. Merge k sorted Linked List
	20. Reverse nodes in k group
	21. Doubly Linked List
	22. Adding a node at the front, at the end, after a node or before a node
	23. Deleting a node from the front, from the end, after a node or before a node
	24. Circular Doubly Linked List
	25. Adding a node at the front, at the end, after a node or before a node
	26. Deleting a node from the front, from the end, after a node or before a node
	27. LRU Cache
	28. LFU Cache
I highly recommend you to solve these question's & few of them I will solve as well.


206. Reverse Linked List
Problem Statement :-
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Explanation :-
We use 3 pointer's prev = previous, curr = current, forw = forward. Where prev will point to the previous pointer, curr will point to the current pointer & forw will point to the next pointer.
	• Prev will hold the previous value becuase, if we break the link. So, we will not lose our linked list
	• Similarly forw will point to the next pointer after curr. So, that once link is broken we will not lose our remaining linked list.
	• Once curr reaches null our prev will be on our new head. So, we will return our prev as the answer.

Solution :-
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        ListNode forw = null;
        
        while(curr != null){
            forw = curr.next;
            curr.next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
}


876. Middle of the Linked List
Problem Statement :-
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation:-
We will create 2 pointer's fast & slow
	• Fast pointer will move at the speed of 2X
	• Slow pointer will move at the speed of 1X
	• If fast pointer reaches null or fast.next is null we will return our slow pointer which mean's our slow pointer is pointing at mid of linked list

Solution:-
class Solution {
    public ListNode middleNode(ListNode head) {
        // Base Condition
        if(head.next == null) return head;
        
        ListNode slow = head;
        ListNode fast = head;
        
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }
}


141. Linked List Cycle
Problem Statement :-
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation:-
We will create 2 pointer's fast & slow
	• Fast pointer will move at the speed of 2X
	• Slow pointer will move at the speed of 1X
	• If fast pointer & slow pointer meet each other we will return true otherwise they there is no cycle we will return false!!

Solution:-
public class Solution {
    public boolean hasCycle(ListNode head) {
        
        ListNode fast = head;
        ListNode slow = head;
        
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
            
            if(fast == slow) return true;
        }
        return false;
    }
}


234. Palindrome Linked List
Problem Statement :-
Input: head = [1,2,2,1]
Output: true
Explanation:-
	• First we will get the mid so, that we can divide a linked list into two.
	• After that, we will reverse the half of the linked list
	• Then we have our slow pointer on new head & we will compare the value with old head i.e. head
	• We will check these value & move both the pointer's slow & head until slow reaches null.
	• If slow reaches null we will return true, otherwise false.





Solution:-
class Solution {
    public ListNode reverse(ListNode head){
        
        ListNode prev = null;
        ListNode curr = head;
        ListNode forw = null;
        
        while(curr != null){
            forw = curr.next;
            curr.next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    public boolean isPalindrome(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        slow= reverse(slow);
        while(slow != null && (slow.val == head.val)){
            head = head.next;
            slow = slow.next;
        }
        return slow == null;
    }
}


160. Intersection of Two Linked Lists
Problem Statement :-
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation:-
So, what we doing is
	• Take 2 pointer's: pointer A walks through List A and List B (since once it hits null, it goes to List B's head).
	• Pointer B also walks through List B and List A.
	• Regardless of the length of the two lists, the sum of the lengths are the same (i.e. a+b = b+a), which means that the pointers sync up at the point of intersection.
	• If the lists never intersected, it's fine too, because they'll sync up at the end of each list, both of which are null.



Notice that if list A and list B have the same length, this solution will terminate in no more than 1 traversal; if both lists have different lengths, 
this solution will terminate in no more than 2 traversals -- in the second traversal, swapping a and b synchronizes a and b before the end of the
second traversal. 
By synchronizing a and b I mean both have the same remaining steps in the second traversal so that it's guaranteed for them to reach the 
first intersection node, or reach null at the same time (technically speaking, in the same iteration) 
-- see Case 2 (Have Intersection & Different Len) and Case 4 (Have No Intersection & Different Len).
PS: There are many great explanations of this solution for various cases, I believe to visualize it can resolve most of your doubts!
Solution:-
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode a = headA;
        ListNode b = headB;
        
        while(a != b){
            a = a == null ? headB : a.next;
            b = b == null ? headA : b.next;
        }
        return b;
    }
}


Alright, guy's I hope you like my work! If do, then stay tuned. Because i'll post few more solution's**





Last Update :- 28th-Feb-2022

From <https://leetcode.com/discuss/study-guide/1800120/become-master-in-linked-list> 





Description
One of the basic structures in algorithm which can be used to achieve lots of funny algorithms and problems.
Problems
There will be some of the most typical problems in this aspect, which I believe almost covers all the basic techniques that you need to solve a linked list problem.
Remove Duplicates from Sorted List
Given a sorted linked list, delete all duplicates such that each element appear only once.
For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
Solution
We can just solve it like in an array using another index to collect the valid nodes. Here, once I made a serious mistake inserting extra ; after while which directly result in an in-debuggeable situation.

ListNode* deleteDuplicates(ListNode* head) {
    if(!head) return head;
    ListNode *t = head, *p = head->next;
    int pre = head->val;
    while(p) {
        if(pre != p->val) {
            t->next = p;
            pre = p->val;
            t = t->next;
        }
        p = p->next;
    }
    t->next = NULL;
    return head;
}

Remove Duplicates from Sorted List II
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.
Solution
Iterative
ListNode* deleteDuplicates(ListNode* head) {
	ListNode* dummy = new ListNode(0);
	dummy->next = head;
	ListNode* cur = dummy;
	int duplicate;
	while (cur->next && cur->next->next) {
		if (cur->next->val == cur->next->next->val) {
			duplicate = cur->next->val;
			while (cur->next && cur->next->val == duplicate) 
				cur->next = cur->next->next;
		}
		else cur = cur->next;
	}
	return dummy->next;
}
Recursive
ListNode* deleteDuplicates(ListNode* head) {
    if (!head) return 0;
    if (!head->next) return head;
    int val = head->val;
    ListNode* p = head->next;
    if (p->val != val) { head->next = deleteDuplicates(p); return head;} 
    else { 
        while (p && p->val == val) p = p->next; 
        return deleteDuplicates(p); 
    }
}
Palindrome Linked List
Given a singly linked list, determine if it is a palindrome.
Follow up:
Could you do it in O(n) time and O(1) space?
Solution
Converting the linked list into an array to simplify the checking.
bool isPalindrome(ListNode* head) {
    vector<int> v;
    while(head) {
        v.push_back(head->val);
        head = head->next;
    }
    for(int i = 0; i < v.size()/2; ++i) {
        if(v[i] != v[v.size()-i-1]) return false;
    }
    return true;
}

Just do it using linked list
bool isPalindrome(ListNode* head) {
    if(!head || !head->next) return true;
    ListNode *slow = head, *fast = head->next;
    while(fast && fast->next) {//split into two halves while the first half can be one-node longer;
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = slow->next;
    slow->next = NULL;
    ListNode newHead(0); //reverse the second half;
    ListNode *next = NULL, *p = fast;
    while(p) {
        next = p->next;
        p->next = newHead.next;
        newHead.next = p;
        p = next;
    }
    fast = newHead.next; //compare the two lists;
    while(fast) {
        if(fast->val != head->val) return false;
        fast = fast->next;
        head = head->next;
    }
    return fast == NULL;
}

Rotate List
Given a list, rotate the list to the right by k places, where k is non-negative.
For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
Solution
ListNode* rotateRight(ListNode* head, int k) {
    if(!head) return head;
    int len = 1;
    ListNode *p = head;
    while(p->next) { len++; p = p->next; }
    p->next = head;
    if(k %= len)
        for(int i = 0; i < len-k; ++i, p=p->next) ; 
    ListNode* newHead = p->next;
    p->next = NULL;
    return newHead;
}

Add Two Numbers
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Solution
Iterative
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int c = 0;
    ListNode newHead(0);
    ListNode *t = &newHead;
    while(c || l1 || l2) {
        c += (l1? l1->val : 0) + (l2? l2->val : 0);
        t->next = new ListNode(c%10);
        t = t->next;
        c /= 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return newHead.next;
}
Recursive
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if(!l1 && !l2) return NULL;
    int c = (l1? l1->val:0) + (l2? l2->val:0);
    ListNode *newHead = new ListNode(c%10), *next = l1? l1->next:NULL;
    c /= 10;
    if(next) next->val += c;
    else if(c) next = new ListNode(c);
    newHead->next = addTwoNumbers(l2? l2->next:NULL, next);
    return newHead;
}

Reverse Linked List II
Reverse a linked list from position m to n. Do it in-place and in one-pass.
For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,
return 1->4->3->2->5->NULL.
Note: Given m, n satisfy the following condition: 1 ≤ m ≤ n ≤ length of list.
Solution
ListNode* reverseBetween(ListNode* head, int m, int n) {
    ListNode newHead(0);
    newHead.next = head;
    ListNode *pre = &newHead, *cur = head, *next = NULL;
    int i = 1;
    while(i < n) {
        if(i++ < m) { pre = cur; cur = cur->next; }
        else { 
            next = cur->next; 
            cur->next = cur->next->next; 
            next->next = pre->next; 
            pre->next = next; 
        }
    }
    return newHead.next;
}

Linked List Cycle II
Given a linked list, return the node where the cycle begins. If there is no cycle, return null. Note: Do not modify the linked list.
Follow up:
Can you solve it without using extra space?
Solution
Actually we can just use set.insert(key).second to check but it will take up O(n) space which is quite an awful waste, so here we just going to check the circle and then locate it.
	• If there is a circle then once the slow meets the fast the first time, there will be a formula as follows: a+b+kl = 2(a+b) -> kl-b = a (a is the length between the head and the start of the circle, b is the steps the slow pointer moves in the circle while l is the length of the circle).
	• After that we can reset the fast and slow down the fast (same speed as the slow using kl-b = a) then once they meet again, the location will be the start of the circle.
At last we take up constant space to solve this and traverse the linked list twice at most (as for the slow pointer).
ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;   
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(slow != fast) return NULL;
    fast = head;
    while(fast && fast->next) {
        if(slow == fast) return slow;
        slow = slow->next;
        fast = fast->next;
    }
    return NULL;
}

Copy List with Random Pointer
linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.
Return a deep copy of the list.
test
Solution

Recursive
class Solution {
    unordered_map<RandomListNode*, RandomListNode*> cloneMap;
    RandomListNode *helper(RandomListNode* head){
        if(head == NULL) return NULL;
        if(cloneMap.count(head)) return cloneMap[head];
        RandomListNode *cloned = new RandomListNode(head->label);
        cloneMap[head] = cloned; //crucial;
        cloned->next = helper(head->next);
        cloned->random = helper(head->random);
        return cloned;
    }
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        return helper(head);
    } 
};

Iterative
RandomListNode *copyRandomList(RandomListNode *head) {
	RandomListNode newHead(0), *p = head, *t = NULL;
	while(p) {
		RandomListNode *cloned = new RandomListNode(p->label);
		cloned->next = p->next;
		p->next = cloned;
		p = cloned->next;
	}
	p = head;
	while(p && p->next) {
		if(p->random) p->next->random = p->random->next;
		p = p->next->next;
	}
	p = head;
	t = &newHead;
	while(p && p->next) {
		t->next = p->next;
		p->next = p->next->next;
		t = t->next;
		p = p->next;
	}
	t->next = NULL;
	return newHead.next;
}

Reverse Nodes in k-Group
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is. You may not alter the values in the nodes, only nodes itself may be changed. Only constant memory is allowed.
For example,
Given this linked list: 1->2->3->4->5
For k = 2, you should return: 2->1->4->3->5
For k = 3, you should return: 3->2->1->4->5
Solution
ListNode* reverseKGroup(ListNode* head, int k) {
	if(!head || !head->next) return head;
	ListNode newHead(0);
	ListNode *pre = &newHead, *cur = head, *next = NULL;
	newHead.next = head;
	int len = 0;
	for(ListNode *p = head; p; p = p->next) len++;
	int times = len/k;
	while(times) {
		for(int i = 1; i < k; ++i) {
			next = cur->next;
			cur->next = cur->next->next;
			next->next = pre->next;
			pre->next = next;
			if(i == k-1) {
				pre = cur;
				cur = cur->next;
			}
		}
		times--;
	}
	return newHead.next;
}
Always welcome new ideas and practical tricks, just leave them in the comm

From <https://leetcode.com/problems/add-two-numbers/discuss/1340/a-summary-about-how-to-solve-linked-list-problem-c> 
