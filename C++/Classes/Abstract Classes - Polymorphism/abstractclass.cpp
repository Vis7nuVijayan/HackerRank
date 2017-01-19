#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>

using namespace std;

struct Node
{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache
{
   protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function
};


class LRUCache : public Cache
{
	public:
		LRUCache(int capacity)
		{
			cp = capacity;
			head = NULL;
			tail = NULL;
		}

		void set(int key, int value)
		{
			Node *new_node = new Node(key, value);

			if(mp.size() < cp)
			{
				mp[key] = new_node;
				insertIntoHead(new_node);
			}

			else
			{
				Node *temp = tail;
				tail = tail->prev;
				tail->next = NULL;
				int erase_key = temp->key;
				mp.erase(erase_key);
				insertIntoHead(new_node);
				mp[key] = new_node;
			}
		}

		int get(int key)
		{
			if(mp.find(key) != mp.end())
			{
				Node *node = mp[key];
				return node->value;
			}

			return -1;
		}

	private:
		void insertIntoHead(Node* node)
		{
			node->prev = NULL;
			node->next = head;
			head = node;

			if(tail)
			{
				tail = node;
			}
		}
};


int main()
{
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);

   for(i=0;i<n;i++)
   {
      string command;
      cin >> command;

      if(command == "get")
      {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }

      else if(command == "set")
      {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
