/* A simple applet that sets the foreground and
background colors and outputs a string. */
import java.awt.*;
import java.applet.*;
/*
<applet code="resizeApplet" width=300 height=50>
</applet>
*/
public class resizeApplet extends Applet{

	String msg;
	int count = 0;

	// set the foreground and background colors.
	public void init() {
		setBackground(Color.cyan);
		setForeground(Color.red);
		msg = "Inside init( ) --";

		showStatus ("Applet Successfully Started and Running");
	}

	// Initialize the string to be displayed.
	public void start() {
		msg += " Inside start( ) --";
	}

	// Display msg in applet window.
	public void paint(Graphics g) {
		++ count;

		msg += " Inside paint( ).";
		g.drawString (msg, 10, 30);

		showStatus ("Applet Successfully Started and Running");	

		if (count*10 == )
		resize (300, 100);
		g.drawString ("Resized", 10, 40);
	}
}
