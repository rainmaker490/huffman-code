// Decoder.cpp
// Written by Varun Patel
#include "Decoder.h"

string Decoder(const string& decodeString, const TreeNode<SymbolPriority>* huffman)
{
	int size = decodeString.size();
	string final = "";

	if (huffman->IsLeaf())
	{
		final += huffman->Value.Symbol;
		return final;
	}

	for (int i = 0; i < size;)
		final += HuffmanMapDecoder(decodeString, i, huffman);

	return final;
}