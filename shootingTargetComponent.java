/**
 * This Java program draws a shooting target
 *
 * @author Alberto E Ramirez
 * @version 9-14-21
 */

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class shootingTargetComponent extends JFrame 
{

// variable declaration and initialization
int initialRings = 6;

shootingTargetViewer shoot;

public shootingTargetComponent() 
{
shoot = new shootingTargetViewer();
shoot.setRings(initialRings);

Container content = this.getContentPane();
content.setLayout(new BoxLayout(content, BoxLayout.Y_AXIS));
content.add(shoot);

this.setTitle("Alberto's Target(E3.19)");
this.pack();
this.setResizable(false);
}
}
