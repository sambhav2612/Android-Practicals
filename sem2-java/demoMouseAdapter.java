import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="demoMouseAdapter" width=300 height=50>
</applet>
*/

public class demoMouseAdapter
	extends Applet {

		public void init () {
			MyMouseAdapter adapter = new MyMouseAdapter (this);
			//addMouseListner (adapter);
		}

		public void paint (Graphics gh) {
			gh.drawString ("YOLO", 10, 20);
		}
	}

class MyMouseAdapter
	extends MouseAdapter {

		demoMouseAdapter adapter;

		public MyMouseAdapter (demoMouseAdapter adapter) {
			this.adapter = adapter;
		}
	}
