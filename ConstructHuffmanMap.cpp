// ConstructHuffmanMap.cpp - 
// Written by Varun Patel

#include "ConstructHuffmanMap.h"

void ConstructHuffmanMap(MyHuffmanMap& huffmanMap, TreeNode <SymbolPriority>* huffman)
{
	string code;
	ConstructHuffmanMap(huffmanMap, huffman, code);
}

void ConstructHuffmanMap(MyHuffmanMap& huffmanMap, TreeNode <SymbolPriority>* huffman, string sentence)
{
	if (!huffman->IsLeaf()) // if not leaf
	{
		// Recursion
		ConstructHuffmanMap(huffmanMap, huffman->Left, sentence+"0");

		if (huffman->Right != NULL)
			ConstructHuffmanMap(huffmanMap, huffman->Right, sentence+"1");

		huffmanMap[huffman->Value.Symbol] = sentence;

	}

	else // if it is leaf
	{
		huffmanMap[huffman->Value.Symbol] = sentence;
		return;
	}
}