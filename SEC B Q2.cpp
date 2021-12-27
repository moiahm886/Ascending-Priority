#include<iostream>
using namespace std;
class List
{
	int* list;
	int size;
	int rear, front;
public:
	List(int size)
	{
		this->size = size;
		list = new int[size];
		rear = front = -1;
	}
	bool isfull()
	{
		return rear == size ? true : false;
	}
	bool isempty()
	{
		return rear == -1 ? true : false;
	}
	void insertion(int val)
	{
		if (!isfull())
		{
			if (isempty())
			{
				list[++rear] = val;
				front++;
			}
			else
			{
				list[++rear] = val;
			}
		}
		else
		{
			cout << "list is full/n";
		}
	}
	void deletion()
	{
		if (!isempty())
		{
			int min = INT_MAX;
			int x{};
			for (int i = 0; i <= rear; i++)
			{
				if (list[i] < min)
				{
					min = list[i];
					x = i;
				}

			}
			for (int i = x; i <=rear; i++)
			{
				list[i] = list[i+1];
			}
			rear--;

		}
		else
		{
			cout << "List is empty\n";
		}
	}
	void display()
	{
		for (int i = 0; i <= rear; i++)
		{
			cout << list[i] << "\t";
		}
		cout << endl;
	}

};
int main()
{
	List l(98);
	l.insertion(34);
	l.insertion(23);
	l.insertion(98);
	l.insertion(1);
	l.insertion(69);
	l.display();
	l.deletion();
	l.display();
	l.deletion();
	l.display();
}