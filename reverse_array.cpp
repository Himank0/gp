/*
// reverse an array
#include <iostream>
using namespace std;
void revar(int a[], int start , int end)
{
    int temp;
    int n = end;
    for(;end>start;start++,end--)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
    }
    for(int i=0;i<=n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int ar[5]={1,2,3,4,5};
    int n = sizeof(ar);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    
    revar(ar,0,n-1);
    return 0;
}
*/
// using recursive approach
// reverse an array
#include <iostream>
using namespace std;
void revar(int a[], int start , int end)
{
   int temp;
   if(end<=start)
        return ;
   temp = a[start];
   a[start]=a[end];
   a[end]=temp;
  revar(a,start+1,end-1);   
}
int main()
{
    int ar[]={1,2,3,4,5};
    revar(ar,0,4);
    cout<<"reverse array:"<<endl;
    for(int i=0;i<5;i++)
        cout<<ar[i];
    return 0;
}