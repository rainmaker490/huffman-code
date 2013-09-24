// Encoder.h
// Written by Varun Patel
#pragma once

#include <string>
#include "TreeNode.h"
#include "HuffmanMapEncoder.h"
#include "ConstructHuffmanMap.h"
#include "SymbolPriority.h"
using namespace std;

string Encoder(MyHuffmanMap& myMap, const string& encoderString);