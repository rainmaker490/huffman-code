// HuffmanMapEncoder.h
// Written by Varun Patel
#pragma once

#include <string>

#include "SymbolPriority.h"
#include "TreeNode.h"

using namespace std;

string HuffmanMapEncoder(string mapCode, const char character,const TreeNode<SymbolPriority>* huffman);