// q10

import java.util.*;

class distance
{
	double feet;
	int inch;
	double dist;

	public myClass ()
	{
	  feet = 10; inch = 6;
	}

	public static int calc ()
	{
	  Scanner vlaue = new Scanner (System.in);

	  System.out.print ("\n");
	  System.out.print ("Enter distance in meters: ");
	  dist = value.nextInt();
	  //calculating inches
	  int feet2 = feet * 100;
	  inch = feet2 % 100;
	}
}
