double scalar_product (int len , double arr1[], double arr2[])//To find the scalar product
{
   int i;
   double product=0;  //To store the scalar product value
   for(i=0;i<len;i++)
   {
     product+=((arr1[i])*(arr2[i]));
   }
   return product; 
}
