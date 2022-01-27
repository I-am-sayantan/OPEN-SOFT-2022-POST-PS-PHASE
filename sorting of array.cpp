#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int size, i, j, temp;

    cout<<"Enter the  size of array: "<<endl;
    cin>>size;
 
   
    cout<<"Enter elements in array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
           
    if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"Elements of array in ascending order:"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}