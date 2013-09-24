// PrintTree.h
// Written by Varun Patel
#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "TreeNode.h"
#include "PriorityQueue.h"
#include "SymbolPriority.h"

using namespace std;

void PrintTree(TreeNode<SymbolPriority>* huffman);

void PrintTree(string& treeMapCode, TreeNode<SymbolPriority>* huffman);