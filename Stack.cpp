#include"Stack.h"
#include <iostream>
#include<stack>

using namespace std;

//bool Stack::Push(int elem)
//{
//	// якщо в стеку Ї м≥сце
//	// то "п≥дн≥маЇмо" вершину стека
//	// та добавл€Їмо новий елемент
//	if (!IsFull()) {
//		data[++topIndex] = elem;
//		return true;
//	}
//	return false;
//}
//
//int Stack::Pop()
//{
//	//якщо стек не порожн≥й,
//	// то повертаЇмо останн≥й елемент
//	// ≥ зменшуЇмо вершину стека
//	if (!IsEmpty()) {
//		return data[topIndex--];
//	}
//	return 0;
//}
//
//int Stack::Peek() const
//{
//	if (!IsEmpty()) {
//		return  data[topIndex];
//	}
//	return 0;
//}
//
//int Stack::GetCount() const
//{
//	// к≥лье≥сть елемент≥в в стеку
//	return  topIndex +1;
//}
//
//bool Stack::IsEmpty() const
//{
//	//якщо стек порожн≥й
//	return topIndex == empty;
//}
//
//bool Stack::IsFull() const
//{
//	 // €кщо стек повний
//	return topIndex==full;
//}
//
//
//
