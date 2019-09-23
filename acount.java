public class acount{
	private String id;
	private String name;
	private int balance;

	acount(String i,String name)
	{
			id=i;
			this.name=name;
		}
	acount(String id,String name,int balance)
	{
		this.id=id;
		this.name=name;
		this.balance=balance;

	}
	public String getid()
	{
		return id;
	}
	public String getname()
	{
		return name;

	}
	public int getbalance()
	{

		return balance;
	}	
	public int credit(int a)
	{	balance = balance +a;
		return balance;
	}
	public int debit(int am)
	{	if(am<=balance){
		balance=balance-am;
		return balance;
		}
		else
		{
				System.out.println(" amount exceeded balance");
				return balance;
		}
	}
	public int transfer(String i,int a)
	{
		if(a<=balance)
		{
			if(id==i)
			{	System.out.println(" hi");
				balance =balance+a;
				return balance;
			}
		}
		else
		System.out.println(" amount cannot be tranfered");
			return balance
	}
	}	