#pragma once
#include <iostream>
#include <stack>

using namespace std;
template <class T_arr>

class Stack
{
	int empty;
	int full;

	T_arr* data;
	int topIndex;

 public:

	Stack() 
	{ 
		data = nullptr;
		empty = -1;
		full = 0;
		topIndex = empty;
	} 

	Stack(int maxSizeStack) 
	{
		full = maxSizeStack-1;
		data = new T_arr[maxSizeStack];
		empty = -1;
		topIndex = empty;
	}
	
	~Stack() {
		if (data != nullptr) delete[]data;
	}
	
	bool Push(T_arr elem);

	T_arr Pop();	// вилучення елементів


	T_arr Peek()const;   // повертає останній елемент 

	int GetCount()const; 	// кількість елементів в стеку

	bool IsEmpty()const;	// пеервірка чи стек порожній

	bool IsFull()const;	//Перевірка чи стек максимально заповнений

};

template<class T_arr>
inline bool Stack<T_arr>::Push(T_arr elem)
{
	if (!IsFull()) {
		data[++topIndex] = elem;
		return true;
	}
	
	return false;
}

template<class T_arr>
inline T_arr Stack<T_arr>::Pop()
{
	if (!IsEmpty()) {
	return data[topIndex--];
	}
	return 0;
}

template<class T_arr>
inline T_arr Stack<T_arr>::Peek() const
{
	if (!IsEmpty()) return  data[topIndex];
	
	return 0;
}

template<class T_arr>
inline int Stack<T_arr>::GetCount() const
{
	return  topIndex +1;
}

template<class T_arr>
inline bool Stack<T_arr>::IsEmpty() const
{
	return data[topIndex];
}

template<class T_arr>
inline bool Stack<T_arr>::IsFull() const
{
	return topIndex==full;
}
