import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;

/*
<applet code = "appletPAPER4" width = 500 height = 500>
</applet>
*/

class myFrame extends Frame {

	public myFrame () {}
	public myFrame (String title) {

		super (title);

		addWindowListener(new myWindowAdapter(this));

	}

	public void paint (Graphics gh) {

		gh.drawString ("My Frame", 100, 100);

	}

}

class myWindowAdapter extends WindowAdapter {

	myFrame obj;

	public myWindowAdapter () {}
	public myWindowAdapter (myFrame obj) {

		this.obj = obj;

	}

	public void windowClosing (WindowEvent we) {

		obj.setVisible(false);

	}

}

public class appletPAPER4 extends Applet {

	Frame f;

	public void init () {

		f = new myFrame("A Frame");

		f.setSize(250, 250);
		f.setVisible(true);

	}

	public void start () {

		f.setVisible(true);

	}

 	public void stop () {

                f.setVisible(false);

        }

 	public void paint (Graphics g) { 

                g.drawString("Applet", 100, 100);

        }

}
