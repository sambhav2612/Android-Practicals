/**
*
*	@author Sambhav Jain
*
*/

import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;
import java.awt.Graphics.*;

/*
<applet code = "appletPAPER2" height = 500 width = 500>
</applet>
*/

class appletPAPER2 extends Applet
	implements MouseListener, MouseMotionListener {

	int x = 0, y = 0;
	String msg = "";

	public void init () {

	addMouseListener(this);
	addMouseMotionListener(this);

	}

	public void start () {}

	public void mousePressed (MouseEvent me) {

	this.x = me.getX();
	this.y = me.getY();

	msg = "mouse Pressed";
	repaint();

	}

	public void mouseClicked (MouseEvent me) {

        this.x = me.getX();
        this.y = me.getY();

        msg = "mouse Clicked";
	repaint();

        }

	public void mouseReleased (MouseEvent me) {

        this.x = me.getX();
        this.y = me.getY();

        msg = "mouse Released";
	repaint();

        }

	public void mouseEntered (MouseEvent me) {}
        public void mouseExited (MouseEvent me) {}


	public void mouseMoved (MouseEvent me) {

        this.x = me.getX();
        this.y = me.getY();

        msg = "mouse Moved";
	repaint();

        }

	public void mouseDragged (MouseEvent me) {

        this.x = me.getX();
        this.y = me.getY();

        msg = "mouse Dragged";
	repaint();

        }

	public void paint (Graphics gh) {

        gh.drawString(msg, this.x, this.y);

        }


}
