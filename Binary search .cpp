#include<iostream>
using namespace std;
int main()
{
    int a,n,q,frnt,en,mid;
    cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    while(q--)
    {
        cin>>a;
        frnt=1;
        en=n;
    int ans=1;
        while(frnt<=en)
        {
             mid=(frnt+en)/2;
           if(arr[mid]==a)
           {
                ans=0;
                break;
           }
           else if(arr[mid]>a)
            en=mid-1;
            else
                frnt=mid+1;
        }
        if(ans==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
