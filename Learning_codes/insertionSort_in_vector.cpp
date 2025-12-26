#include <iostream>
#include <vector>
using namespace std ;

void insertionSort(vector<long double> &list)
{
     int terms = list.size() ;
     cout << " Size o fl list is : " << terms << endl ;
     int key , j ;
     for (int i = 1 ; i< terms ; i++)
     {
            key = list[i] ;
            j = i - 1 ;
            
            while (    j>=0 && list[j] > key)
            {
                  list[j+1] = list[j] ;
                  list[j] = key ;
                 j-- ;
            }
            list[j+1] = key ;             
     }
}



int main()
{
    vector <long double> list = {   10  , 20 , 11 ,5 ,2 } ;
    insertionSort(list) ;
    cout << " ----------> [ ";
    for ( auto & x : list)
    { cout << x << " " ; }
    cout << "]" << endl ;
    return 0 ;
}