// HuffmanMapDecoder.cpp
// Written by Varun Patel
#include "HuffmanMapDecoder.h"

char HuffmanMapDecoder(const string& mapDecode, int& index, const TreeNode<SymbolPriority>* huffman)
{
	if (huffman->IsLeaf())
		return huffman->Value.Symbol;
	
	else
	{
		// case 1 - index @ 0 - left part
		if (mapDecode[index] == '0')
			return HuffmanMapDecoder(mapDecode, ++index, huffman->Left);
		// case 2 - index @ 1 - right part
		else 
			return HuffmanMapDecoder(mapDecode, ++index, huffman->Right);
	}
}