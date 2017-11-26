import java.util.*;

class driveByMenu
{
	public static void reversal ()
	{
	  Scanner value = new Scanner(System.in);
	  int[] array = new int[100];
      System.out.println ("Enter Size of array: ");
	  int size = value.nextInt();	//taking size of array
	
	  for (int i = 0; i < size; ++i)
	    array[i] = value.nextInt();	//taking array elements
	  int temp = 0;
	
	  //reversing here
	  for (int i = 0, k = size-1; i < size/2; ++i, --k)
	  {  
	     temp = array[i];
	     array[i] = array[k];
	     array[k] = temp;
	     if (i == k)
	       break;
	  }

	  //printing
	  System.out.println ("Array is: ");
	  for (int i = 0; i < size; ++i)
	    System.out.println (array[i] + " ");
	}

	public static void pORa ()
	{
	  Scanner value = new Scanner(System.in);
	  System.out.println ("Enter a Number: ");
	  int num = value.nextInt();

	  int digit = 0, sum = 0;
	  //armstrong

	  int num2 = num;

	  while (num > 0)
	  {
	  	digit = num % 10;
	  	sum += (digit * digit * digit);
	  	num /= 10;
	  }

	  num = num2;

	  if (num == sum)
	  	System.out.println ("YES! " + num + " is Armstrong.");
	  else
	  	System.out.println ("NO! " + num + " is not Armstrong.");
	}

	public static void main (String[] args)
	{
	  char ch;
	  char abc;
	  Scanner value = new Scanner(System.in);
	  do
	  {
	    	//object to redirect the user in default case and wrong cases
	    System.out.println ("------MENU------");
	    System.out.println ("1. Array Reversal");
	    System.out.println ("2. Palindrome/Armstrong");
	    System.out.println ("3. Finding Odd-One-Out");
	    System.out.println ("4. Enter a choice (1/2/3) :");
	    ch = value.next().charAt(0);	// taking characters, as the first element of string passed

	    switch (ch)
	    {
	      case '1' : reversal();
			 break;
	      case '2' : pORa();
			 break;
	      case '3' : //findingOddOneOut();
			 break;
	      default  : while ((ch != '1') && (ch != '2') && (ch != '3'))
			 {
			   System.out.println ("Enter from (1/2/3) only ... redirecting ...");
			   ch = value.next().charAt(0);
			 }
			 break;
	    }

	    System.out.println ("Want to continue? (Y/N) ");
	    abc = value.next().charAt(0);
	  }while((abc == 'y') || (abc == 'Y'));
	}
}
