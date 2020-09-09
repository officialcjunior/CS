package lab2;

import java.util.Scanner;

import exercises.Box;

public class Person {
	private	String name;
	
	public String getName() {
		return name;
	}
	
	public void setName(String newname) {	
		name = newname;
	}
	
	public static void main(String[] args) {
		
		Person myperson = new Person();
		
		System.out.println("Hello, enter your name!");
		Scanner myObj = new Scanner(System.in);		
	    String newname = myObj.nextLine();
	    
	    myperson.setName(newname);
	    System.out.println("Hello, "+ myperson.getName());
		
}}
