package Fifth;

class AddressBook {
	private String name,street,city,state;
	private int zipcode;
	AddressBook()
	{
		name="";
		street="";
		city="";
		state="";
		zipcode=0;
	}
	public void addAddress(String name,String street,String city,String state,int zipcode)
	{
		this.name=name;
		this.street=street;
		this.city=city;
		this.state=state;
		this.zipcode=zipcode;
	}
	public void Print()
	{
		System.out.println("Name:- "+name);
		System.out.println("Street:- "+street);
		System.out.println("City:- "+city);
		System.out.println("State:- "+state);
		System.out.println("Zip-code:- "+zipcode);
	}
}
