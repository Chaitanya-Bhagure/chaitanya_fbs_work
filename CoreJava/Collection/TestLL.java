package P2;

import java.util.LinkedList;

import P1.Employee;

public class TestLL {

	public static void main1(String[] args) {
		// TODO Auto-generated method stub
		LinkedList l1=new LinkedList();
		l1.add(10);
		l1.add(5);
		l1.add(20);
		l1.add(30);
		System.out.println(l1);

	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LinkedList l1=new LinkedList();
		l1.add(new Employee(10,"chaitanya",20000));
		l1.add(new Employee(18,"ketan",25000));
		System.out.println(l1);
		

	}

}