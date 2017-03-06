/*
 * Equal Stacks
 *
 *		Author : Vishnu Vijayan
 *		  Date : 06-Mar-2017
 *		  Time : 3:19:31 PM
 *
 */

using namespace std;

#include <iostream>
#include <stack>

void Fill_Stack(stack<int>&,int);
int Get_Equal_Height(stack<int>&,stack<int>&,stack<int>&);
int Get_Smallest_Height(int,int,int);

int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	stack<int> stack1, stack2, stack3;

	Fill_Stack(stack1,n1);
	Fill_Stack(stack2,n2);
	Fill_Stack(stack3,n3);

	cout << Get_Equal_Height(stack1,stack2,stack3);

	return 0;
}

void Fill_Stack(stack<int>& original_stack, int n)
{
	int cylinder_height;
	stack<int> reverse_stack;

	for(int i=0;i<n;++i)
	{
		cin >> cylinder_height;
		reverse_stack.push(cylinder_height);
	}

	while(!reverse_stack.empty())
	{
		if(original_stack.empty())
			original_stack.push(reverse_stack.top());

		else
			original_stack.push(reverse_stack.top()+original_stack.top());

		reverse_stack.pop();
	}
}

int Get_Equal_Height(stack<int>& stack1, stack<int>& stack2, stack<int>& stack3)
{
	while(true)
	{
		if(stack1.empty() || stack2.empty() || stack3.empty())
			return 0;

		if(stack1.top() == stack2.top() && stack2.top() == stack3.top())
			return stack1.top();

		int smallest_height = Get_Smallest_Height(stack1.top(),stack2.top(),stack3.top());

		if(stack1.top() > smallest_height)
			stack1.pop();

		if(stack2.top() > smallest_height)
			stack2.pop();

		if(stack3.top() > smallest_height)
			stack3.pop();
	}
}

int Get_Smallest_Height(int stack1, int stack2, int stack3)
{
	return (stack1<stack2?(stack1<stack3?stack1:stack3):(stack2<stack3?stack2:stack3));
}
