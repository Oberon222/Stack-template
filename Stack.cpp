#include"Stack.h"
#include <iostream>
#include<stack>

using namespace std;

//bool Stack::Push(int elem)
//{
//	// ���� � ����� � ����
//	// �� "�������" ������� �����
//	// �� ���������� ����� �������
//	if (!IsFull()) {
//		data[++topIndex] = elem;
//		return true;
//	}
//	return false;
//}
//
//int Stack::Pop()
//{
//	//���� ���� �� �������,
//	// �� ��������� ������� �������
//	// � �������� ������� �����
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
//	// ������� �������� � �����
//	return  topIndex +1;
//}
//
//bool Stack::IsEmpty() const
//{
//	//���� ���� �������
//	return topIndex == empty;
//}
//
//bool Stack::IsFull() const
//{
//	 // ���� ���� ������
//	return topIndex==full;
//}
//
//
//
