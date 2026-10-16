#include <iostream>
using namespace std;
#define SIZE 10
int table[SIZE];
void init()
{ 
  for(int i=0;i<SIZE;i++) 
    table[i]=-1; 
}
void insert(int x)
{ 
  int idx=x%SIZE; 
  while(table[idx]!=-1)
  { 
    idx=(idx+1)%SIZE; 
  } 
  table[idx]=x; 
}
bool search(int x)
{ 
  int idx=x%SIZE, count=0; 
  while(count<SIZE)
  { 
    if(table[idx]==x) 
      return true; 
    if(table[idx]==-1) 
      return false; 
    idx=(idx+1)%SIZE; 
    count++; 
  } 
  return false; 
}
void display()
{ 
  for(int i=0;i<SIZE;i++)
    cout<<i<<" -> "<<table[i]<<endl;
}
int main()
{ 
  init(); 
  insert(123); 
  insert(133); 
  insert(143);
  display(); 
  cout<<(search(133)?"Found":"Not Found");
  return 0; 
}
