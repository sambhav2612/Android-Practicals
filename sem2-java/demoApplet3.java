// simple applet ( entirely ) with newline after each repaint

import java.awt.*;
import.java.applet.*;

class demoApplet3 extends Applet
	implements MouseListener, MouseMotionListener, KeyListener {

	public void init () {

		addMouseListener (this);
		addMouseMotionListener (this);
		addKeyListener (this);
	}
}
