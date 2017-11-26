import java.awt.*;
import java.applet.*;
import java.net.*;

/*
<applet code = "appletPAPER1" height=300 width= 500>
</applet>
*/

public class appletPAPER1 extends Applet {

	int height, width;
	String msg = "";
	String docBase = "";
	String codeBase = "";

	public void init () {

		this.height = getSize().height;
		this.width = getSize().width;
		setBackground(Color.blue);
		showStatus("Running");
		//msg += "-In Init()-";
		//repaint();

	}

	public void start() {

		URL url = getDocumentBase();
		msg += url.toString();
		repaint();

		url = getCodeBase();
                msg += url.toString();
                repaint();

	}

	public void paint (Graphics gh) {

		gh.drawString(msg, 100, 100);
		showStatus("RUNNING");

	}

}
