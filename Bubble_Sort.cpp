#include <iostream>
using namespace std ;
void Bubble (int arr[],int length , int&BigO)
{
    BigO = 0 ;
   
 for (int i =0 ; i < length ; i ++ )
 { 
    int flag = 0 ;
    for (int j =0 ; j <length-1-i ; j++)    // for non redundant loops
    {
        ++BigO;
        if (arr[j] > arr[j+1])
        {
          int temp = arr[j+1];
          arr[j+1]=arr[j];
          arr[j]= temp ;
          flag ++ ;
           
        }
    }
 

    if (flag == 0 )  // no swaping occurred then will be my last thing
    {
     return ;
    }               
 }

}






int main()
{
    int arr[] = {6,2,73,39,77,78,82,74,1};
    int length = 9 ;
    int BigOoh = 0 ;
    Bubble(arr,length,BigOoh);
    for ( int i = 0 ; i < length ; i++)
    {
        cout << arr [i]<<"  ";
    }
    cout << endl<<BigOoh;

}