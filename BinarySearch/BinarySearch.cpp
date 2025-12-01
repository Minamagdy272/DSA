#include <iostream> 
using namespace std ;
int search ( int target , int arr [] , int l , int r )
{
    if ( l == r )
    {
       if (arr [l] != target ) return -1 ;
       return arr[l] ;  
    }
    int mid = (l+r) / 2 ;
    if (arr[mid] == target)
      return mid ;
    if (arr[mid] > target)
      return search(target ,arr , l , mid -1 ) ;
    return search(target , arr , mid+1 , r);     
}