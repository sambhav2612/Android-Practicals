/*
to write a simple applet
that works on mouse listener properties
*/

import java.awt.*;
import java.awt.event.*;
import java.awt.Graphics;
import java.applet.*;

/*
<applet code = "demoMouseListener" width = 500 height = 100>
</applet>
*/

public class demoMouseListener extends Applet 
	implements MouseListener, MouseMotionListener
{
	String msg = " ";
	int xpos = 0, ypos = 0;
        //xpos = getX();  ypos = getY();
	public void init ()
	{
		addMouseListener(this);
		addMouseMotionListener(this);
	}

	// static

	public void mouseClicked (MouseEvent mv)
	{
		xpos = mv.getX();
		ypos = mv.getY();
		msg = "Inside clicked()";
		repaint();
	}
	public void mouseReleased (MouseEvent mv)
        {
                xpos = mv.getX();
		ypos = mv.getY();
                msg = "Inside released()";
                repaint();
        }
	public void mousePressed (MouseEvent mv)
        {
                xpos = mv.getX();
		ypos = mv.getY();
                msg = "Inside pressed()";
                repaint();
        }
	public void mouseEntered (MouseEvent mv) {}
	public void mouseExited (MouseEvent mv) {}

	// motion

	public void mouseDragged (MouseEvent mv)
        {
                xpos = mv.getX();
                ypos = mv.getY();
                msg = "Inside dragged()";
                repaint();
        }
	public void mouseMoved (MouseEvent mv)
        {
                xpos = mv.getX();
                ypos = mv.getY();
                msg = "Inside moved()";
                repaint();
        }
	public void paint (Graphics gh)
	{
		gh.drawString (msg, xpos, ypos);
	}
}
