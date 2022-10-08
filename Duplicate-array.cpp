C++ Programs to Find Duplicate Array Element


#include <iostream>
 
using namespace std;
void duplicate_element(int arr[], int num) // finding duplicate values
{
int i, j;
printf("Repeating elements are following: ");
for(i = 0;i < num;i++)
{
  for(j = i+1;j < num;j++)
  {
    if(arr[i] == arr[j])
    {
     cout << arr[j] << " ";
    }
  }
}
}
int main()
{
int no; 
cout<<"enter the size of array";
cin >> no; // taking size of array
int ele[no];  
int i;
cout<<"\n enter elements:";  // taking elements.
for(i = 0; i < no; i++)
{
cin >> ele[i];
}
duplicate_element(ele,no); // passing value to function
return 0;
}
Outputs:-
  enter size of array 5
  enter elements 1 3 2 1 2 
  Repeating element are 1 2
