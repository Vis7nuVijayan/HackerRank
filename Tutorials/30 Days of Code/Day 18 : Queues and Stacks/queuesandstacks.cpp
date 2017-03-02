/*
 * Day 18 : Queues and Stacks
 *
 *		Author : Vishnu Vijayan
 *		  Date : 18-Jan-2017
 *		  Time : 12:49:21 PM
 *
 */

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution
{
	//Write your code here
	private:
		queue<char> q;
		stack<char> s;

	public:
		void pushCharacter(char ch)
		{
			s.push(ch);
		}

		void enqueueCharacter(char ch)
		{
			q.push(ch);
		}

		char popCharacter()
		{
			char ch = s.top();
			s.pop();

			return ch;
		}

		char dequeueCharacter()
		{
			char ch = q.front();
			q.pop();

			return ch;
		}
};

int main()
{
	// read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome)
        cout << "The word, " << s << ", is a palindrome.";

    else
        cout << "The word, " << s << ", is not a palindrome.";

    return 0;
}
