#include<stdio.h>
#define SIZE 1000
 
int main(int argc, char** argv)
{
    int  n = 0;
    scanf("%d", &n);
    int l = 1;
    int r = 1000;
    int id = l;
    int arr[SIZE] = { 0 };
    int max = arr[l];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &l, &r);
    for (int i = 0; i < n; i++)
    {
        if ((i >= l && i <= r-1) && (arr[i] > max))
        {
            max = arr[i];
            id = i+1;
        }
    }
     
    //for (l; l < r; l++)
    //{
    //  if (arr[l] > max)
    //  {
    //      max = arr[l];
    //      id = l;
    //  }
    //}
    printf("%d %d\n", max, id);
    return 0;
}
