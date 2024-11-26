#include<iostream>
using namespace std;
class temp
{	
private:
 int Q[5];
 public:
  void assign(int p[])
  {

  for(int a=0; a<=3; a++)
  {
  	Q[a]=p[a];
  }
  }
  
  void insert(  int loc,int val)
  {
  
  for(int b=4; b>=loc; b--)
  {
  	Q[b+1]=Q[b];
  	Q[loc]=val;
  }
  
  	
  }
  
  void print(int n)
  {
 
  for(int c=0; c<=n; c++)
  {
  	cout<<Q[c]<<" ";
  }
   	
  }
  
  
};
int main()
{
   temp obj;
   int pos,n,a[4]={1,2,3,4};
   obj.assign(a);
   cout<<"The value before Inserting is:"<<endl;
   obj.print(3);
   cout<<"Enter value to insert:";
   cin>>n;
   cout<<"Enter Position to insert:";
   cin>>pos;
   if(pos>=5)
   {
   	cout<<"Invalid Location..."<<endl;
   }
   obj.insert(pos,n);
   cout<<"Value After Inserting is:";
   obj.print(4);
}
