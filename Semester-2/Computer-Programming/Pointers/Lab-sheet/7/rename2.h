double pair(int choice1,int choice2,int **matrix)
{
  int i;
  double distance,sum=0;
  for (i=0;i<3;i++)
  {
    sum += pow(matrix[choice2][i]-matrix[choice1][i],2);
  }
  distance=sqrt(sum);
  return distance;
}
