// Main function of the C++ program.


#include <iostream>
using namespace std;


int main()
{
    const int size = 6;
    int myArray[size] = {4, 7, 1, 2, 0, -3};
    int temp;
    
    for(int i = 0; i < size -1; i++){
      for(int i = 0; i < size - 1; i++){
        if(myArray[i] > myArray[i+1]){
            temp = myArray[i];
            myArray[i] = myArray[i+1];
            myArray[i+1] = temp;
        } 
      }
    }
    
    for(int i = 0; i < size; i++){
       cout << myArray[i] << " ";
    }
}
