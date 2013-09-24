// ConstructTree.h
// Written by Varun Patel
#pragma once

#include <string>
#include <vector>
#include <map>
#include "SymbolPriority.h"
#include "TreeNode.h"
#include "PriorityQueue.h"

using namespace std;

TreeNode<SymbolPriority>* ConstructTree(const string& myWords);