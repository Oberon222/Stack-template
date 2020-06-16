#include <iostream>
#include<stack>
#include"Stack.h"

using namespace std;

int main() {
	Stack <int>st;
	string code1 = "({x-y-z} * [x + 2y] - (z + 4x))";
	string code2 = "([x-y-z} * [x + 2y) - {z + 4x)]";

	enum ScopeType
	{
		CIRCLE_IN = '(',
		CIRCLE_OUT = ')',
		SQUARE_IN = '[',
		SQUARE_OUT = ']',
		FIGURED_IN = '{',
		FIGURED_OUT = '}'
	};

	for (char s : code1)
	{
		switch (s)
		{
		case CIRCLE_IN:
			st.Push(s);
			break;

		case CIRCLE_OUT:
			if (st.Peek() == CIRCLE_OUT)
				st.Pop();
			else
				cout << "Error at symbol: " <<s << endl;
			break;
		case SQUARE_IN:
			st.Push(s);
			break;

		case SQUARE_OUT:
			if (st.Peek() == SQUARE_OUT)
				st.Pop();
			else
				cout << "Error at symbol: " << s << endl;
			break;

		case FIGURED_IN:
			st.Push(s);
			break;

		case FIGURED_OUT:
			if (st.Peek() == FIGURED_OUT)
				st.Pop();
			else
				cout << "Error at symbol: " << s << endl;
			break;
		}
	}

	if (!st.IsEmpty()) {
		cout << "Error!" << endl;
	}

	else
		cout << "Correct code!" << endl;

	system("pause");
	return 0;
}