#pragma once

#include <iostream>

template <class T>
class TListNode
{
	protected:
		T value;
		TListNode* left;
		TListNode* right;
	public:
		TListNode();
		TListNode(T value_);
		TListNode(const TListNode<T>& nd);
		TListNode(TListNode<T>&& nd);
		~TListNode();
		T GetValue() const;
		T& GetValueRef();
		TListNode<T>* GetLeft();
		TListNode<T>* GetRight();

		void SetValue(const T newValue);
		void SetLeft(TListNode* newLeft);
		void SetRight(TListNode* newRight);
};

template<class T>
inline TListNode<T>::TListNode()
{
	value = 0;
	left = nullptr;
	right = nullptr;
}

template<class T>
inline TListNode<T>::TListNode(T value_)
{
	value = value_;
	left = nullptr;
	right = nullptr;
}

template<class T>
inline TListNode<T>::TListNode(const TListNode<T>& nd)
{
	value = nd.value;
	left = nd.left;
	right = nd.right;
}

template<class T>
inline TListNode<T>::TListNode(TListNode<T>&& nd)
{
	value = nd.value;
	left = nd.left;
	right = nd.right;
	nd.value = 0;
	nd.left = nullptr;
	nd.right = nullptr;
}

template<class T>
inline TListNode<T>::~TListNode()
{
	if (left != nullptr)
	{
		left = nullptr;
		delete left;
	}
	if (right != nullptr)
	{
		right = nullptr;
		delete right;
	}
}

template<class T>
inline T TListNode<T>::GetValue() const
{
	return value;
}

template<class T>
inline T& TListNode<T>::GetValueRef()
{
	return value;
}

template<class T>
inline TListNode<T>* TListNode<T>::GetLeft()
{
	return left;
}

template<class T>
inline TListNode<T>* TListNode<T>::GetRight()
{
	return right;
}

template<class T>
inline void TListNode<T>::SetValue(const T newValue)
{
	value = newValue;
}

template<class T>
inline void TListNode<T>::SetLeft(TListNode* newLeft)
{
	left = newLeft;
}

template<class T>
inline void TListNode<T>::SetRight(TListNode* newRight)
{
	right = newRight;
}
