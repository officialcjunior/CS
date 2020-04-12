#include <stdio.h>

void merge(int array1[], int m, int array2[], int n, int array3[]) {

      int i = 0, j = 0, k = 0;
      while (i < m && j < n) {
         
         if (array1[i] < array2[j]){
            array3[k] = array1[i++];
         }

         
         else {
            array3[k] = array2[j++];
         }
         }
         k++;
      
      if (i >= m) {
         
         while (j < n) {
            
            array3[k] = array2[j];
            j++;
            k++;
         }
      }

      if (j >= n){
         
         while (i < m){
            
            array3[k] = array1[i];
            i++;
            k++;
         }
      }
    for (int i=0;i<k;i++)
    printf("%d ",array3[i]);    
    }

int main(int argc, char const *argv[])
{
  int m,n ;
  puts("Enter the number of elements for the first array");
  scanf("%d", &m);
  puts("Enter the array elements");
  int array1[m];
  for (int i=0;i<m;i++)
    scanf("%d",&array1[i]);
  puts("Enter the number of elements for the second array");
  scanf("%d", &n);
  puts("Enter the array elements");
  int array2[n];
  for (int i=0;i<n;i++)
    scanf("%d",&array2[i]);
  int array3[100];
  merge(array1,m,array2,n,array3);
}