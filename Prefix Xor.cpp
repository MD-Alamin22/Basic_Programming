#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,query;
   cin>>n>>query;
   int arr[n+1],pre_xor[n+1];
   arr[0]=0;

   for(int i=1;i<=n;i++)
            cin>>arr[i];

   for(int i=1;i<=n;i++)
            pre_xor[i]=pre_xor[i-1]^arr[i];

   while(query--)
   {
      int l,r;
      cin>>l>>r;
      cout<<(pre_xor[r]^pre_xor[l-1])<<endl;
   }

}
