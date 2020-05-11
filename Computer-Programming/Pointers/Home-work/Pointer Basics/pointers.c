#include<stdio.h>
int main()
{
  float f=5.2,*fl;
  char c='a',*ch;
  double d=2543209.87,*du;
  fl=&f;            //To store address of the floating point variable
  ch=&c;            //To store the address of charcater variable
  du=&d;            //To store the address of the double variable
  printf("Float %f\n",(*fl));
  printf("Character %c\n",(*ch));
  printf("Double %lf\n",(*du));
  return 0;
}
