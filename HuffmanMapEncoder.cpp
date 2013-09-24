// HuffmanMapEncoder.cpp
// Written by Varun Patel
#include "HuffmanMapEncoder.h"
#define _NULL ""

string HuffmanMapEncoder(string mapCode, const char character,const TreeNode<SymbolPriority>* huffman)
{
	// Case 1- Node is Leaf
	if (huffman->IsLeaf())
	{
		if (huffman->Value.Symbol == character)
			return mapCode;
		else
			return _NULL;
	}
	// Case 2- Character not found
	else
	{
		string temp = HuffmanMapEncoder( mapCode + "0", character, huffman->Left);
		if (temp != _NULL)
			return temp;
		else
		{
			mapCode = mapCode + "1";
			return HuffmanMapEncoder(mapCode, character, huffman->Right);
		}
	}
}