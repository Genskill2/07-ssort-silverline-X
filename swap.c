void swap_max(int arr[], int l, int n)
  {
  int biggie=arr[l];int pos=l;
  for(int i=l;i<n;i++)
    {
    if(arr[i]>biggie)
      {
      biggie=arr[i];
      pos=i;
      }
    }
  arr[pos]+=arr[l];
  arr[l]=arr[pos]-arr[l];
  arr[pos]-=arr[l];
  }
void ssort(int arr[], int n)
  {
  for(int i=0;i<n;i++)
    {
    swap_max(arr,i,n);
    }
  }
