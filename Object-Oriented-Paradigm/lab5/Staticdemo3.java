package lab5;

	public class Staticdemo3 {
		
		 private static int numInstances = 0;
		  int a;
	
		   private static int getCount() {
		      return numInstances;
		   }
	
		   private static void addInstance() {
		      numInstances++;
		   }
	   
		   Staticdemo3() 
		   {
			   Staticdemo3.addInstance();
		   }
	      public void  doublea()
	      {
	         int doub=2*a;
	         System.out.println("double a="+doub);
	         System.out.println("Starting with " + getCount() + " instances");
	         
	      }
		public static void main(String[] args) {
			// TODO Auto-generated method stub
			System.out.println("Starting with " + getCount() + " instances");
	
		      for (int i = 0; i < 600; ++i) {
		    	  Staticdemo3 obj=new Staticdemo3(); // Or new StaticMain() is enough as we dont need object
		      }
		      System.out.println("Created " + getCount() + " instances");
		      System.out.println("Starting with " + Staticdemo3.getCount() + " instances");
		      //doublea() //Error Cannot make static reference to non static method doublea
		      Staticdemo3 obj2=new Staticdemo3();
		      obj2.doublea();
		}

}
