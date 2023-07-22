#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1,5,2,7,3,8,4};
  sort(arr,arr+7);
  for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,arr+7,greater<int>());
    for(int i=0;i<7;i++)
      cout<<arr[i]<<" ";
      cout<<endl;
      cout<<"yohooooooooooo!!!!!!";
      return 0;
}
