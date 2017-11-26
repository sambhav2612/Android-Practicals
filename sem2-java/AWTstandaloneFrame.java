
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class AWTstandaloneFrame
	extends Frame {

		String keymsg = "you entered something";
		String mousemsg = "";
		int mouseX = 30;
		int mouseY = 30;

		public AWTstandaloneFrame () {

			addKeyListener (new MyKeyAdapter (this));
			addMouseListener (new MyMouseAdapter (this));
			addWindowListener (new MyWindowAdapter ());
		}

		public void paint (Graphics gh) {
			gh.drawString (keymsg, 10, 40);
			gh.drawString (mousemsg, mouseX, mouseY);
		}

		// frame created here
		public static void main (String[] args) {

			AWTstandaloneFrame app = new AWTstandaloneFrame  ();
			app.setSize (new Dimension (500, 250));
			app.setTitle ("A Standalone AWT Application");
			app.setVisible (true);
		}
	}

class MyKeyAdapter
	extends KeyAdapter {

		AWTstandaloneFrame adapter;

		public MyKeyAdapter (AWTstandaloneFrame adapter) {
			this.adapter = adapter;
		}

		public void keyTyped (KeyEvent ke) {
			adapter.keymsg += ke.getKeyChar();
			adapter.repaint ();
		} 
	}

class MyMouseAdapter
	extends MouseAdapter {

		AWTstandaloneFrame adapter;

		public MyMouseAdapter (AWTstandaloneFrame adapter) {
			this.adapter = adapter;
		}

		public void mouseClicked (MouseEvent m) {
			adapter.mouseX = m.getX();
			adapter.mouseY = m.getY();

			adapter.mousemsg = "Mouse at, (" + adapter.mouseX
										+ ", " + adapter.mouseY
										+ ")";
			adapter.repaint();
		}
	}

class MyWindowAdapter
	extends WindowAdapter {
		public void windowClosing (WindowEvent w) {
		System.exit (0);
	}
}