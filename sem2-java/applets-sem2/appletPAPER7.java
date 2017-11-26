import java.awt.event.*;
import java.awt.*;
import java.applet.Applet;

/*
<applet code = "appletPAPER7" width = 400 height = 400>
</applet>
*/

public class appletPAPER7 extends Frame implements ActionListener {

        Button yes, no;
        Label SaveFile;

        public appletPAPER7 () {

        yes = new Button("YES");
        no = new Button("NO");

        SaveFile = new Label("SAVE FILE");

        add(yes);
        add(no);
        add(SaveFile);

        yes.addActionListener(this);
        no.addActionListener(this);
	addWindowListener(new myWindowAdapter());

        }

        public void actionPerformed (ActionEvent ae) {

                String str = ae.getActionCommand();

	}

	public static void main (String[] args) {

		appletPAPER7 obj = new appletPAPER7();

		obj.setSize(500, 500);
		obj.setTitle("A FRAME");
		obj.setVisible(true);

	}

}

class myWindowAdapter extends WindowAdapter {

	public void windowClosing() {

		System.exit(0);

	}

}
