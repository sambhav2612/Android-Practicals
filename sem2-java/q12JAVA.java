// Q12

// Write a program to show the difference between public and private access specifiers.
// The program should also show that primitive data types are passed by value and objects are passed
// by reference and to learn use of final keyword.

class Super	{

	public static int abc (final int a)	{
		System.out.println (a);

		++a;
		return a;
	}

	private static void rex (int x)  {
		System.out.println (x);
        }

	public static void MAIN ()      {
                Super obj = new Super();

                obj.abc (5);
                obj.rex (6);
        }
}

class inner extends Super	{

	public static void MAIN ()	{
		Super obj = new Super();

		int var = obj.abc (5);
		System.out.println(++var);
		//obj.rex (6);
		// private calling outside class
	}
}

class driver	{

	public static void main (String[] args)	{
		Super obj = new Super();
		inner newObj = new inner();

		//obj.rex (6);
		// private calling outside class
		newObj.MAIN();
	}
}
