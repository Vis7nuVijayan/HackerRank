/*
 * Day 15 : Linked List
 *
 *		Author : Vishnu Vijayan
 *		  Date : 16-Jan-2017
 *		  Time : 12:04:20 AM
 *
 */

#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;

        Node(int d)
        {
            data=d;
            next=NULL;
        }
};


class Solution
{
    public:
		Node* insert(Node *head,int data)
		{
			//Complete this method
			if(!head)
			{
				head = new Node(data);
				return head;
			}

			Node* node = head;

			while(node->next)
				node = node->next;

			node->next = new Node(data);

			return head;
		}

	  void display(Node *head)
	  {
		  Node *start=head;

		  while(start)
		  {
			  cout<<start->data<<" ";
			  start=start->next;
		  }
	  }
};

int main()
{
	Node* head=NULL;
	Solution mylist;

	int T,data;
	cin>>T;

	while(T-->0)
	{
		cin>>data;
		head=mylist.insert(head,data);
	}

	mylist.display(head);

}
