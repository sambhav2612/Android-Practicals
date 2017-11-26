import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code="demoApplet" width=500 height=50>
</applet>
*/
public class demoApplet extends Applet
 implements KeyListener, MouseListener, MouseMotionListener {

  String msg = "";
  int yPOS = 25;
  int count = 0;
  int x, y;

  public void init () {
    addKeyListener (this);
    addMouseListener (this);
    addMouseMotionListener (this);
  }

  	public void mouseClicked (MouseEvent mv)
	{
		x = mv.getX();
		y = mv.getY();
		msg = "Inside clicked()";
		repaint();
	}
	public void mouseReleased (MouseEvent mv)
        {
                x = mv.getX();
		y = mv.getY();
                msg = "Inside released()";
                repaint();
        }
	public void mousePressed (MouseEvent mv)
        {
                x = mv.getX();
		y = mv.getY();
                msg = "Inside pressed()";
                repaint();
        }
	public void mouseEntered (MouseEvent mv) {}
	public void mouseExited (MouseEvent mv) {}

	// motion

	public void mouseDragged (MouseEvent mv)
        {
                x = mv.getX();
                y = mv.getY();
                msg = "Inside dragged()";
                repaint();
        }
	public void mouseMoved (MouseEvent mv)
        {
                x = mv.getX();
                y = mv.getY();
                msg = "Inside moved()";
                repaint();
        }

  public void keyPressed (KeyEvent ke) {
    showStatus ("Some key has been pressed");

    if (ke.getKeyCode() == KeyEvent.VK_ESCAPE)
      removeKeyListener(this);
  }

  public void keyReleased (KeyEvent ke) {
    showStatus ("some key has been released");
}

  public void keyTyped (KeyEvent ke) {
    msg = ke.getKeyChar();
    repaint ();
  }

  public void paint(Graphics g) {
    ++count;
    g.drawString(msg, 50, yPOS);

    if (count * 10 == yPOS)
      yPOS *= 2;

  }

}
