#include <iostream>
using namespace std;
class kStack{
    private:
        int *top;
        int *data;
        int *next;
        int free, n, k;
    public:
        kStack(int n, int k);
        
        bool isFull(){
            return (free == -1);
        }

        void push(int x, int sn);
        
        int pop(int sn);

        bool isEmpty(int sn){
            return top[sn] == -1;
        }
};
kStack::kStack(int n1, int k1){
    k = k1;
    n = n1;
    data = new int[n];
    top = new int[k];
    next = new int[n];

    for(int i = 0; i < k; i++)
        top[i] = -1;
    
    free = 0;
    for(int i = 0; i < n; i++){
        next[i] = i + 1;
    }
    next[n-1] = -1;
}
void kStack::push(int x, int sn){
    if(isFull()){
        cout<<"Stack Overflow\n";
        return;
    }
    int i = free;      // Store index of first free slot
  
    // Update index of free slot to index of next slot in free list
    free = next[i];
  
    // Update next of top and then top for stack number 'sn'
    next[i] = top[sn];
    top[sn] = i;
  
    // Put the item in array
    data[i] = x;
}

int kStack::pop(int sn)
{
    // Underflow check
    if (isEmpty(sn))
    {
         cout << "\nStack Underflow\n";
         return INT_MAX;
    }
  
  
    // Find index of top item in stack number 'sn'
    int i = top[sn];
  
    top[sn] = next[i];  // Change top to store next of previous top
  
    // Attach the previous top to the beginning of free list
    next[i] = free;
    free = i;
  
    // Return the previous top item
    return data[i];
}
  