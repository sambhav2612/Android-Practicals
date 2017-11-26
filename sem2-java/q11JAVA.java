// Q11 Guidelines

// Write a program to show that during function overloading, if no matching argument is found,
// then java will apply automatic type conversions(from lower to higher data type)

class q11
{
	public static void abc (float a)	{
		System.out.println (a);
	}

	public static void abc (int a, int b)	{
		System.out.println (a + "\t" + b);
	}

	public static void abc (char a)	{
		System.out.println (a);
	}        
	
	public static void main (String args[]) {
		abc (125);
        }


}

