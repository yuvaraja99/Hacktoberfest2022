import java.util.Scanner;
class StackImp 
{
	int top;	
	int max;
	int a[];		
	StackImp() 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of stack blocks");
		max=sc.nextInt();
		top=-1;
		a=new int[max];
	}
	void Push(int no)
	{
		if(top+1==max)
		{
			System.out.println("Stack is full");
		}
		else
		{
			a[++top]=no;
		}
	}
	void Pop()
	{
		if(top==-1)
		{
			System.out.println("Stack is empty");
			// underflow condition
		}
		else
		{
			System.out.println("Delete element is = "+a[top--]);
			
		}
	}
	void Disp()
	{
		if(top==-1)
		{
			System.out.println("Stack is empty");
		}
		else
		{
			for(int i=top;i>=0;i--)
			{
				System.out.print(a[i]+"\t");
			}
			System.out.println();
		}

	}
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		StackImp ob=new StackImp();
		while(true)
		{
			System.out.println("1. PUSH(Insertion)");
			System.out.println("2. POP(Deletion)");
			System.out.println("3. Display");
			System.out.println("4. Exit");
			int choice=sc.nextInt();
			switch(choice)
			{
				case 1:
						System.out.println("Enter a number");
						ob.Push(sc.nextInt());
						break;
				case 2:
						ob.Pop();
						break;
				case 3:
						ob.Disp();
						break;
				case 4:
						System.exit(0);
				default:	
						System.out.println("Wrong choice");				
			}
		}
	}
}
