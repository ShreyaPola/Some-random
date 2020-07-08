#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n];
      int ans[n];
      int j=0;
      for(int i=0;i<n;i++)
        cin>>a[i];
      ans[j++]=a[n-1];
      int max_ans=a[n-1];
      for(int i=n-2;i>=0;i--)
      {
        if(a[i]>=max_ans)
        {
          ans[j++]=a[i];
          max_ans=a[i];
        }
      }
      for(int i=0;i<j;i++)
        cout<<ans[i]<<" ";
      cout<<"\n";
    }
    return 0;
  }
