// ConstructHuffmanMap.h - ConstructHuffmanMap function declaration
// Written by Varun Patel
#pragma once

#include <string>
#include "PriorityQueue.h"
#include <map>
#include "SymbolPriority.h"
#include "TreeNode.h"
#include <vector>
#include <iostream>

using namespace std;

typedef map<char, string> MyHuffmanMap;

void ConstructHuffmanMap(MyHuffmanMap& huffmanMap, TreeNode <SymbolPriority>* huffman, string sentence);
void ConstructHuffmanMap(MyHuffmanMap& huffmanMap, TreeNode <SymbolPriority>* huffman);