import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;

/*
<appplet code = "appletPAPER3" height = 500 width = 500>
</applet>
*/

public class appletPAPER3 extends Applet {

	public void init () {

	addKeyListener(new KeyAdapter() {

	public void keyPressed(KeyEvent ke) {

	showStatus("KEY PRESSED");

	}

	});

	}

}
