package q3;

public class complex {
	private float real;
	private float img;
	
	complex(float r,float i){
		real = r;
		img = i;
	}
	
	complex(){
		real = 1;
		img = 1;
	}
	
	public void add(complex obj1){
		float real_sum,img_sum;
		real_sum = obj1.real+this.real;
		img_sum = obj1.img+this.img;
		System.out.print(real_sum);
		System.out.print("+");
		System.out.print(img_sum);
		System.out.println("i");
	}
	
	public void sub(complex obj1){
		float real_sum,img_sum;
		real_sum = this.real-obj1.real;
		img_sum = this.img-obj1.img;
		if(img_sum<0) {
			System.out.print(real_sum);
			System.out.print(img_sum);
			System.out.println("i");
		}
		else {
		System.out.print(real_sum);
		System.out.print("+");
		System.out.print(img_sum);
		System.out.println("i");
		}
	}
}
