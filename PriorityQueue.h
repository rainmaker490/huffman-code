// PriorityQueue.h - class declaration
// Written by Varun Patel
#pragma once
#include <vector>
using namespace std;

// Template Vector Class 
template<typename DATA_TYPE>
class PriorityQueue
{
public:

	// Default Constructor
   PriorityQueue() {}

   // Returns the first element from Queue
   const DATA_TYPE& Top() const
   {
	   return MyQueue[0];
   }
    
   // Returns the size of the Queue
   unsigned int Size() const
   {
	   return MyQueue.size();
   }

   // [] operator returns the index
   DATA_TYPE& operator [] (int index)
   {
	   return MyQueue[index];
   }

   // When Queue is empty, returns true- Checks if Queue is empty
   bool IsEmpty() const
   {
	   return MyQueue.empty();
   }

   // Pops the first element from the Queue 
   // Rearrange the QueueList so that the priority is maintained
   void Pop()
   {
	   // initialize last to the size minus one - [this would be the index of the last element in the Queue]
	   int last = MyQueue.size() - 1;
	   // use the swap function to swap the last element with the first element in the Queue
	   swap(MyQueue[0], MyQueue[last]);

	   // Swap the value at root with the right most node value at bottom of the row
	   MyQueue.pop_back();
	   last = MyQueue.size() - 1;

	   int parent = 0;
	   // odd after parent = 0
	   int firstChild = parent*2 + 1;
	   // even after parent = 0
	   int secondChild = parent*2 + 2;
	   int swapChild;

	   bool swapChildNeeded = false;

	   bool firstChildExist = firstChild <= last;

	   bool secondChildExist = secondChild <= last;

	   // if both children exist, the parent will be compared to the smallest child
	   if (firstChildExist && secondChildExist)
	   {
		   if (MyQueue[firstChild] < MyQueue[secondChild])
			  swapChild = firstChild;
		   else
			  swapChild = secondChild;
	   
		   swapChildNeeded = MyQueue[parent] > MyQueue[swapChild];
	   }
	   else
		   // if only the first child exists then compare parent with firstChild
	   if (firstChildExist)
		   {
			   if (MyQueue[parent] > MyQueue[firstChild])
			   {
				   swapChildNeeded = true;
				   swapChild = firstChild;
			   }
		   }
	   else
		   // if only second child exists then compare parent with secondChild
	   if (secondChildExist)
		   {
			   if (MyQueue[parent] > MyQueue[secondChild])
			   {
				   swapChildNeeded = true;
				   swapChild = secondChild;
			   }
		   }

	   while (swapChildNeeded)
	   {
		   swap(MyQueue[parent], MyQueue[swapChild]);
		   parent = swapChild;
		   // odd after 0 (parent)
		   firstChild = parent*2 + 1;
		   // even after 0 (parent)
		   secondChild = parent*2 + 2;

		   firstChildExist = firstChild <= last;
		   secondChildExist = secondChild <= last;
		   swapChildNeeded = false;
		   if (firstChildExist && secondChildExist)
		   {
			   if (MyQueue[firstChild] < MyQueue[secondChild])
				  swapChild = firstChild;
			   else
				  swapChild = secondChild;
	   
			   swapChildNeeded = MyQueue[parent] > MyQueue[swapChild];
		   }

		   else
		   if (secondChildExist)
			   {
				   if (MyQueue[parent] > MyQueue[secondChild])
				   {
					   swapChildNeeded = true;
					   swapChild = secondChild;
				   }
			   }

		   else
		   if (firstChildExist)
			   {
				   if (MyQueue[parent] > MyQueue[firstChild])
				   {
					   swapChildNeeded = true;
					   swapChild = firstChild;
				   }
			   }
		   }
   } 


   // Pushes a new element into the queue and rearranges the MyQueue to maintain priority
   void Push(const DATA_TYPE& newValue)
   {
		// Push new value to the end of the queue
		MyQueue.push_back(newValue);
		// The index of the child node corresponding to the new value
		int child = MyQueue.size() - 1;
		// Determine the index of it’s parent
		int parent = (child - 1)/2;
		
		// While we are not at the top and the child is larger than the parent
		while ( (parent >= 0) && (MyQueue[parent] > MyQueue[child]) )
			{
			   // Swap the parent and the child to maintain order
				swap (MyQueue[parent], MyQueue[child]);
			   // Now the parent becomes the new child
			   child = parent;
			   parent = (child - 1)/2;
			}

   }
private:
   // PriorityQueue: heap packaged into vector
	vector<DATA_TYPE> MyQueue;
};