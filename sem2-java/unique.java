import java.util.*;

class unique 
{
	public static void main(String[] args) 
	{
		int i, j;
		int array[] = new int[10];
		Scanner value = new Scanner(System.in);
		System.out.print("Enter size: ");
		int size = value.nextInt();
		for (i = 0; i < size ; ++i) 
		{
			System.out.print("Enter Element " + (i+1) + ": ");
			array[i] = value.nextInt();
		}
	}
}