package Default2;

public class animal{
      
      public int cat_A,cat_B,mouse;
      public void catAndMouse(){
        
           int n=this.cat_A-this.mouse,n1=this.cat_B-this.mouse;
           if(n<0)
           n=n-(2*n);
           if(cat_B<0)
           n1=n1-(2*n1);
           if(n==n1)
           System.out.println("Mouse C");
           else if(n<n1)
           System.out.println("Cat_A");
           else
           System.out.println("Cat_B");
     }
}