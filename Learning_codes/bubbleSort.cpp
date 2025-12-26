#include <iostream>
#include <cstring>
using namespace std ;

class bubbleSort
{
    int terms ;
    int arr[100];
    public :
 bubbleSort(int term) 
{ terms = term ; 
 int a[term] ;
    for ( int i = 0 ; i <term ; i++)
    {
    cout << "Enter "<<i+1 <<" Element : "; 
    cin>>a[i]; 
    }
    
    for (    int i = 0 ; i <= term-2 ; i++)
    {
         for ( int j = 0 ; j <=term-2-i ; j++)   
         {
              if (    a[j] > a[j+1] )   
              {
                   int max = a[j]   ;
                   a[j] = a[j+1] ; // bubble
                   a[j+1] = max ;
              }
         }
    }
     //   strcpy(arr,a);
     // copy the array
     for (int i=0 ; i<term ; i++)
     {    arr[i] = a[i] ;
   
     }
         showA()   ;
 
}
 
 void showA()   
 {
 char ans ; 
 cout <<"   Do you want to sort ? ( y/n ) :"   ;
 cin >>ans ;
 if ( ans == 'y' || ans =='Y')
 {
    for (    int i = 0 ; i<terms; i++)
    { cout << arr[i] << " "; }
 }
 else { exit(0) ; }
 
 }
};
 int main()
 {
    
    int term ;
    cout << "Enter number of terms : ";
    cin>>term;
    bubbleSort s(term);
     
     
    return 0 ; 
 }