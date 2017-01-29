/*
 * Day 24 : More Linked Lists
 *
 *		Author : Vishnu Vijayan
 *		  Date : 24-Jan-2017
 *		  Time : 2:06:48 PM
 *
 */

#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

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
		Node* removeDuplicates(Node *head)
		{
			//Write your code here
			if(head == NULL)
				return head;

			Node* prev = head;
			Node* node = head->next;

			while(node)
			{
				if(prev->data == node->data)
				{
					prev->next = node->next;
					free(node);
					node = prev->next;
				}

				else
				{
					prev = node;
					node = node->next;
				}
			}

			return head;
		}

        Node* insert(Node *head,int data)
        {
             Node* p=new Node(data);

             if(head==NULL)
                 head=p;

             else if(head->next==NULL)
                 head->next=p;

             else
             {
                 Node *start=head;

                 while(start->next!=NULL)
                     start=start->next;

                 start->next=p;
             }

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

	head=mylist.removeDuplicates(head);

	mylist.display(head);

}
