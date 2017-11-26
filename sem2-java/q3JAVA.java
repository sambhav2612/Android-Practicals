// q3 - enter a array dynamically
import java.util.*;

class arrayDynamic {

	public static void main (String[] args) {

		int size = 0;
		char ch = 'y';

		Scanner value = new Scanner (System.in);

		ArrayList <Integer> intList = new ArrayList<Integer>();
		while((ch == 'y') || (ch == 'Y')){

			System.out.print ("Enter a number: ");
			int number = value.nextInt();
			intList.add(number);

			++size;

			System.out.print ("Wanna enter more? (Y/N)");
			ch = StringAt(0);
		}
	}
}
