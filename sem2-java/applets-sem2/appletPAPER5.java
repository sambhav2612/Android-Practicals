import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;

public class appletPAPER5 extends Applet {

	public void init () {

		addMouseListener(new myMouseAdapter(this));

	}

}

class myMouseAdpater extends MouseAdapter {

	appletPAPER5 paper;

	//public myMouseAdapter () {}
	public myMouseAdapter (appletPAPER5 paper) {

		this.paper = paper;

	}

	public void mouseEntered (MouseEent me) {

		paper.showStatus("Mouse Entered.");

	}

}
