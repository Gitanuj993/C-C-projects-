#include <iostream>
#include <vector>
using namespace std ;

void display(vector<int>) ;
void merge(vector<int>&,vector<int>&,vector<int>&) ;

void mergeSort(vector<int> &temp) 
{
  
  
  // base case of recursion
  if ( temp.size() <= 1 ) 
  return ;
  
  // spliting of array or list in two halves
  int mid = temp.size() / 2 ;
  vector<int> left ; //left(mid) ;
//  left.resize(mid) ;
  vector<int> right ;
 // right.resize(temp.size()-mid) ;
 
  // copying the left side elements of leftList  as we do not use built in functions.
  
  int term ;
  for ( int i = 0 ; i < mid ; i++ )
  {  term = temp[i] ;
  left.push_back( term ); }  
  
  for ( int i = mid ; i < temp.size() ; i++ )
  { term = temp[i] ;
   right.push_back( term );}
    
  mergeSort(left);
  mergeSort(right) ; 
 
 merge(left,right,temp) ;
 // how to make changes to the original list ?
// list = temp ;
}

void merge(vector<int>&left,vector<int>& right, vector<int>& res)
  {
      int i , j , k ;
      i=j=k=0;
      
      // chose from left and right
      while ( i < left.size() && j < right.size())
      {
          if ( left[i] > right[j])
          { res[k] = right[j] ; j++ ; }
          else {
              res[k] = left[i] ; i++ ;
          }
          k++;
      }
      // to merge remaining left sorted elements 
      while ( i < left.size())
      { res[k] = left[i] ; i++ ; k++ ; }
      // to merge remaining right sorted elements
      while ( j< right.size())
      { res[k] = right[j] ; j++;k++;}
      
}    
  
void display(vector<int> list)
{
     cout << " [ " ;
     for ( int x : list )  
     cout << x << " " ;
     cout << "] " ;
}

void insert(vector<int> &list)
{
    int terms ;
    cout <<" Enter terms : "; cin >> terms ;
    list.resize(terms) ;
    for ( int i = 0 ; i < terms ; i++)
    { cout <<" Enter term : " ; 
    cin>> list[i] ;
    }
    cout << " Inserted Successfully!!!\n";
}

int main(int argc, char *argv[])
{
	vector <int> list ;
	int choice ;
	while ( true )
	{
	    cout << " Choose from the following \n 1. Insert \n 2.mergeSort \n 3. Display \n 4. Exit \n Enter Your Choice : " ;
	    cin >> choice ;
	    
	    switch ( choice )
	    {
	        case 1 : insert(list); break ;
	      case 2 : mergeSort(list); cout<<" Sorted Successfully !!!\n" ; break ;
	        case 3 : display(list) ; break ;
	        case 4 : exit(0) ;
	        default : cout << " Try again !\n" ;
	    }
	    }
	    return 0 ;	   	
}