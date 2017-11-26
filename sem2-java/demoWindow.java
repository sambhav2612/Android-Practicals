
import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="demoWindow" width=300 height=50>
</applet>
*/

public class demoWindow 
  extends Applet {

  	demoFrame frame;

  	public void init () {
  		//MyWindowAdapter adapter = new MyWindowAdapter (this);

  		frame = new demoFrame ("Sambhav Jain");
  		frame.setSize (500, 250);
      frame.setVisible(true);

  	}

  	public void start () {
  		frame.setVisible (false);
  	}

  	public void stop () {
  		frame.setVisible (true);
  	}
  	public void paint(Graphics g) {
		  g.drawString("This is in applet window", 10, 20);
   }
  }

class MyWindowAdapter 
  extends WindowAdapter {
	
	demoFrame sampleFrame;
	public MyWindowAdapter(demoFrame sampleFrame) {
		this.sampleFrame = sampleFrame;
	}

	public void windowClosing(WindowEvent we) {
		sampleFrame.setVisible(false);
}
}

class demoFrame 
  extends Frame {

	demoFrame (String title) {
		super (title);
    MyWindowAdapter adapter = new MyWindowAdapter (this);
		addWindowListener (adapter);
	}
	public void paint(Graphics g) {
		g.drawString("This is in frame window", 10, 40);
}
}
