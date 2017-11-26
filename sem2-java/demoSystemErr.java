/*
	simple program to show error on concole
	if wrong values are passed for the inputs
*/

import java.util.*;
import java.io.*;

public class demoSystemErr
{
	public static void main (String[] args) throws IOException
	{

	int x = 0, y = 0;

	PrintWriter p = new PrintWriter (System.out, true);

	BufferedReader val = new BufferedReader (new InputStreamReader (System.in));

	x = (int) val.read();

	/*if (x <= 0)
		System.err.print ("Value cannot be negative or ZERO.");
	else
	{*/
		y = (int) val.read();
		/*while (x > 0)
		{
			y++;
			--x;
		}
*/
		p.println ("x = " + x + "\ny = " + y);
//	}
	}
}
