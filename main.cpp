// main.cpp - HuffmanMap main entry point
// Written by Varun Patel

#include <iostream>
#include <string>

// PriorityQueue Lab
#include "PriorityQueue.h"
#include "SymbolPriority.h"

// Huffman Map
#include "HuffmanMapEncoder.h"
#include "Encoder.h"
#include "TreeNode.h"
#include "ConstructTree.h"
#include "PrintTree.h"
#include "Decoder.h"
#include "ConstructHuffmanMap.h"

// Extra Credit
#include "MakeByteArray.h"
#include "GetByteArray.h"

using namespace std;


void main()
{
	string dataToBeCompressed;
	
	cout << "Enter Data that needs to be Encoded and Decoded: " << "\n" << endl;

	getline(cin, dataToBeCompressed);
	cout << "\n";
	
	TreeNode<SymbolPriority>* huffman = ConstructTree(dataToBeCompressed);
	MyHuffmanMap mapHuffman;
	cout << "\n";

	string sentence;
	ConstructHuffmanMap(mapHuffman, huffman);
	PrintTree(huffman);
	cout <<"\n";


	string encodedData = Encoder(mapHuffman, dataToBeCompressed);
	cout << encodedData << "\n";

	int codeLength = encodedData.length();
	string byte = MakeByteArray(encodedData, codeLength);

	int byteLength = byte.length();

	for (int i = 0; i < byteLength; i++)
	{
		int value = (int) byte[i];
		if (value < 0)
			value += 256;

		cout << value << " ";
	}
	cout << "\n" ;

	string decodedData = Decoder(encodedData, huffman);
	cout << decodedData << "\n";
	cout << "\n";

	string encoderGetByte = GetByteArray(byte, codeLength);
	cout << encoderGetByte << "\n";
	cout << "\n";

	cout << "\n";



	system("pause");
}