int cbinsearch(int *arr, int size, int value)
{
  int left=0;
  int right=size-1;
  int src=0;
  while (left <= right){
    int s=(left+right)/2;
    if (arr[s] == value){
      src = src+1;
    }
    if (arr[s]>value) right = s-1;
      else left = s+1;    
  }
  return src;
}
