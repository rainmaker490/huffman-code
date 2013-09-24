// PrintTree.cpp
// Written by Varun Patel
#include "PrintTree.h"

void PrintTree(TreeNode<SymbolPriority>* huffman)
{
	string treeMapCode = "";
	PrintTree(treeMapCode, huffman);
}

void PrintTree(string& treeMapCode, TreeNode<SymbolPriority>* huffman)
{
	// Base Case
	if (huffman==NULL)
		return;
	else
	
	// Case 1 - Print Tree Recursively
	if (huffman->IsLeaf())
		cout << '\'' << huffman->Value.Symbol << '\'' << " " << treeMapCode << endl;
	else
	{
		PrintTree(treeMapCode + "0", huffman->Left);
		PrintTree(treeMapCode + "1", huffman->Right);
	}

	return;
}