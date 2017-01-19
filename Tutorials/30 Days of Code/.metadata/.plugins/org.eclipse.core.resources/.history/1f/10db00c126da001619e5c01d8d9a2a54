/*
 * Day 13 : Abstract Classes
 *
 *		Author : Vishnu Vijayan
 *		  Date : 13-Jan-2017
 *		  Time : 12:51:24 PM
 *
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Book
{
    protected:
        string title;
        string author;

    public:
        Book(string t,string a)
    	{
            title=t;
            author=a;
        }

        virtual void display()=0;
};

class MyBook : public Book
{
	protected:
		int price;

	public:
		MyBook(string t, string a, int p) : Book(t,a)
		{
			this->price = p;
		}

		void display()
		{
			cout << "Title: " << this->title;
			cout << "\nAuthor: " << this->author;
			cout << "\nPrice: " << this->price;
		}
};


int main()
{
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;

    MyBook novel(title,author,price);

    novel.display();

    return 0;
}
