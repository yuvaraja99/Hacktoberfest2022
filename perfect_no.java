import java.util.*;
class perfect
{
	int num;
	perfect(int nn)
	{
		num=nn;
	}
	int sum_of_factors(int i,int j)
	{
		if(i==j)
				return 0;
		else if(i%j==0)
				return j+sum_of_factors(i,j+1);
		else
				return 0+sum_of_factors(i,j+1);
	}
	void check()
	{
		int k=sum_of_factors(num,1);
		if(num==k)
		{
			System.out.println("it is a perfect number"+'\t'+num);
		}			
		else
		{
			System.out.println("not a perfect number");
		}
	}
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a number");
		int n=sc.nextInt();
		perfect ob= new perfect(n);
		ob.check();
	}
}
