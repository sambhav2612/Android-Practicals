//display the ladders

import java.util.*;

class ladder
{
	public static void main (String[] args)
	{
	  int size;
	  Scanner value = new Scanner(System.in);
	  System.out.print ("Enter size: ");
	  size = value.nextInt();

	  //ladder 1
	  System.out.println ("Ladder #1"); 
	  for (int i = 0; i < size; ++i)
	  {
	    for (int j = 0; j <= i; ++j)
	    {
	      System.out.print ("* ");
	    }
	    System.out.println ("");
	  }
	  System.out.println ("");

	  //ladder 2
          System.out.println ("Ladder #2");
	  for (int i = 0; i < size; i += 2)
          {
            for (int j = 0; j <= i; ++j)
            {
              System.out.print ("* ");
            }
            System.out.println ("");
          }
	  System.out.println ("");

	  //ladder 3
	  int size2 = size;
          System.out.println ("Ladder #3");
	  for (int i = 0; i < size2; ++i)
          {
            for (int k = size-1; k > 0; --k)
            {
              System.out.print (" ");
            }
	    for (int j = 0; j <= i; ++j)
            {
              System.out.print ("* ");
            }
            System.out.println ("");
	    --size;
          }
	  System.out.println ("");

	  //ladder 4
	  int abc = 1;
          System.out.println ("Ladder #4");
          for (int i = 0; i < size2; i += 2)
          {
            for (int j = 0; j <= i; ++j)
            {
              System.out.print ((abc++) + " ");
            }
            System.out.println ("");
          }
          System.out.println ("");


	}
}
