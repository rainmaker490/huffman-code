// TreeNode.h - TreeNode class declaration
// Written by Varun Patel
#pragma once

template<typename DATA_TYPE>
struct TreeNode
{
	TreeNode(const DATA_TYPE& value, TreeNode* left = NULL, TreeNode* right = NULL)
	{
		Value = value;
		Left = left;
		Right = right;
	}

	TreeNode()
	{
		Left = NULL;
		Right = NULL;
	}

	DATA_TYPE Value;
	TreeNode* Left;
	TreeNode* Right;

	bool IsLeaf() const
	{
		return Left == NULL && Right == NULL;
	}

	bool operator == (const TreeNode<DATA_TYPE>& compareTo)
	{
		return (Value==compareTo.Value);
	}

	bool operator < (const TreeNode<DATA_TYPE>& compareTo)
	{
		return (Value<compareTo.Value);
	}

	bool operator > (const TreeNode<DATA_TYPE>& compareTo)
	{
		return (Value>compareTo.Value);
	}

};