import java.util.*;
public class test2{
	public static void main(String argu[]){
		acount a=new acount("1234","mayank");
		System.out.println(" the account id is "+a.getid()+" the name is "+a.getname());
		acount a1=new acount("1234","mayank",60000);
		System.out.println(" the account id is "+a.getid()+" the name is "+a.getname()+"the balance is "+a1.getbalance());
		System.out.println(" enter the amount to be credited into the aaccount");
		Scanner o= new Scanner(System.in);
		int b2=o.nextInt();
		int b=a1.credit(b2);
		System.out.println(" the balance now is "+b);
		System.out.println(" enter the amount to be debited from the aaccount");
		b2=o.nextInt();
		b=a1.debit(b2);
		System.out.println(" the balance now is "+b);
		System.out.println(" enter the account id and money to transfer");
		String ac=o.next();
		b2=o.nextInt();
		a1.transfer(ac,b2);
		System.out.println(" money added to the account");
		System.out.println(" the balance now is "+b);

	}
}