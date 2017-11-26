import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;

/*
<applet code = "appletPAPER6" width = 400 height = 400>
</applet>
*/

public class appletPAPER6 extends Applet implements ActionListener {

	Button yes, no;
	Label SaveFile;

	public void init () {

	yes = new Button("YES");
	no = new Button("NO");

	SaveFile = new Label("SAVE FILE");

	add(yes);
	add(no);
	add(SaveFile);

	yes.addActionListener(this);
	no.addActionListener(this);

	}

	public void actionPerformed (ActionEvent ae) {

		String str = ae.getActionCommand();

	}

}
