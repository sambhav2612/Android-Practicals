// Demonstrate the key event handlers.
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="demoKeyListener" width=300 height=100>
</applet>
*/

public class demoKeyListener extends Applet
  implements KeyListener {

	//StringBuilder msg = new StringBuilder("");
	String msg = "";

	int X = 10, Y = 20;

	public void init() {
	  addKeyListener(this);
	}

	public void destroy () {
	  System.exit(0);
	}

	public void keyPressed(KeyEvent ke) {
	  showStatus("Key Down");
	}

	public void keyReleased(KeyEvent ke) {
	  showStatus("Key Up");
	}

	public void keyTyped(KeyEvent ke) {
	  msg += ke.getKeyChar();
	  if (ke.getKeyChar() == KeyEvent.VK_ESCAPE)
	    //msg += "/n";
            destroy ();
	  repaint();
	}

	// Display keystrokes.
	public void paint(Graphics g) {
	  g.drawString(msg, X, Y);
 	}
}
