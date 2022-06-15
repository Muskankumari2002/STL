#include <iostream>
#include<array>

using namespace std;

int main()
{
   array<int, 6> a = {1,2,3,4,5,6};
   cout<<"printing the array using operator"<<endl ;
   for(int i=0;i<6;i++)
   {
       cout<<a[i]<<" ";
     
   }
  cout<<endl;
  cout<<"printing the array using at() "<<endl;
   for(int i=0;i<6;i++)
   {
      cout<< a.at(i)<<" ";
       
   }
   cout<<endl;
   cout<<"printing the array using get()"<<endl;
   cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<" "<<get<3>(a)<<" "<<get<4>(a)<<" "<<get<5>(a)<<" ";
   cout<<endl;
   cout<<"first element of the array"<<endl;
   cout<<a.front()<<endl;
   cout<<"Last element of the array"<<endl;
   cout<<a.back()<<endl;
   cout<<"Size of the array"<<endl;
   cout<<a.size()<<endl;
   cout<<"Maximum size of the array"<<endl;
   cout<<a.max_size()<<endl;
   array<int, 6> b = {5,6,7,8,9,10};
   cout<<"print the array b"<<endl;
   for(int i=0;i<6;i++)
   {
       cout<<b[i]<<" ";
   }
   cout<<endl;
   cout<<"Swap the element of array a and b"<<endl;
   a.swap(b);
   cout<<"print array a"<<endl;
  for(int i=0;i<6;i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<"print array b"<<endl;
  for(int i=0;i<6;i++)
  {
      cout<<b[i]<<" ";
  }
  cout<<endl;
  cout<<"check array a is empty ? "<<endl;
  cout<<a.empty()<<endl;
  array<int, 5> c ;
  cout<<"check array c is empty? "<<endl;
  cout<<c.empty()<<endl;
  cout<<"Fill the all element with 1 in array c "<<endl;
  c.fill(1);
  for(int i= 0;i<5;i++){
      cout<<c[i]<<" ";
  }
  
    return 0;
}
