package P2;

import java.util.ArrayList;

import P1.Employee;

public class TestAL {

	public static void main1(String[] args) {
		ArrayList a1=new ArrayList();
		a1.add(10);
		a1.add(30);
		a1.add(5);
		a1.add(20);
		System.out.println(a1);
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList a1=new ArrayList();
		a1.add(new Employee(10,"chaitanya",20000));
		a1.add(new Employee(18,"ketan",25000));
		System.out.println(a1);
		

	}

}