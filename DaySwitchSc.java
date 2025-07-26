// package java_programs;
import java.util.*;
public class DaySwitchSc {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter b:");
		int b=sc.nextInt();
        sc.close();
		switch(b)
		{
			case 1:
				System.out.println("monday");
				break;
			case 2:
				System.out.println("tuesday");
				break;
			case 3:
				System.out.println("wednesday");
				break;
			default:
				System.out.println("invalid numbers");
				break;
		}
				
	}

}
