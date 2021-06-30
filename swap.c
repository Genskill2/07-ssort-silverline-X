void swap_max(int arr[], int n, int l)
  {
  int biggie=arr[l];int pos=l;
  for(int i=l;i<n;i++)
    {
    if(arr[i]>=biggie)
      {
      biggie=arr[i];
      pos=i;
      }
    }
  int temp=arr[pos];
  arr[pos]=arr[l];
  arr[l]=temp;
  }
void ssort(int arr[], int n)
  {
  for(int i=0;i<n;i++)
    {
    swap_max(arr,n,i);
    }
  }
