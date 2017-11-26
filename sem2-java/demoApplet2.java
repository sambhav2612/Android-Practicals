/* A simple applet that sets the foreground and
background colors and outputs a string. */
import java.awt.*;
import java.applet.*;
/*
<applet code="demoApplet2" width=500 height=100>
</applet>
*/
public class demoApplet2 extends Applet{
	String msg;
	// set the foreground and background colors.
	public void init() {
		setBackground(Color.cyan);
		setForeground(Color.red);
		msg = "Inside init( ) --";
	}
	// Initialize the string to be displayed.
	public void start() {
		msg = " Inside start( ) --";
	}
	// demonstrating stop
        public void destroy() {
                msg = " Inside destroy()";
        }
	// Display msg in applet window.
	public void paint(Graphics g) {
		msg = " Inside paint( ).";
		g.drawString(msg, 10, 30);
	}
	/*// demonstrating stop
	public void destroy() {
		msg = " Inside destroy()";
	}*/
}
