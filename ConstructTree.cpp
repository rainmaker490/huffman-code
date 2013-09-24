// ConstructTree.cpp
// Written by Varun Patel
#include "ConstructTree.h"

TreeNode<SymbolPriority>* ConstructTree(const string& myWords)
{
	string mySentence = myWords;
	
	map<char, int> myMap;
	
	for (unsigned int i = 0; i < mySentence.length();i++)
		myMap[mySentence[i]]++;

	PriorityQueue<TreeNode<SymbolPriority>*> myQueue;
	map <char, int>::iterator pos;
	for (pos = myMap.begin(); pos != myMap.end() ; pos++)
	{
		SymbolPriority mapCase = SymbolPriority(pos->first, pos->second);
		TreeNode<SymbolPriority>* node = new TreeNode<SymbolPriority>(mapCase);
		myQueue.Push(node);
	}

	while(myQueue.Size() > 1)
	{
		TreeNode<SymbolPriority>* right = myQueue.Top();
		myQueue.Pop();
		TreeNode<SymbolPriority>* left  = myQueue.Top();
		myQueue.Pop();
		TreeNode<SymbolPriority>* myNode = new TreeNode<SymbolPriority>(SymbolPriority('*',left->Value.Priority + right->Value.Priority),left,right);
		myQueue.Push(myNode);
	}

	if (myQueue.Size() == 1)
	{
		TreeNode<SymbolPriority>* left  = myQueue.Top();
		myQueue.Pop();
		TreeNode<SymbolPriority>* myNode = new TreeNode<SymbolPriority>(SymbolPriority('*',left->Value.Priority),left);
		return myNode;
	}

	return myQueue.Top();
}