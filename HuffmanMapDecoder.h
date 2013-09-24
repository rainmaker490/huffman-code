// HuffmanMapDecoder.h
// Written by Varun Patel
#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "TreeNode.h"
#include "PriorityQueue.h"
#include "SymbolPriority.h"

#define ZERO "0"

using namespace std;

char HuffmanMapDecoder(const string& mapDecode, int& index, const TreeNode<SymbolPriority>* huffman);