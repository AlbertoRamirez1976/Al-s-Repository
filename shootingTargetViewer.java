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


public class shootingTargetViewer extends JPanel 
{

// constant variable is declared and initialized
static final int SIZE = 300;
int rings = 3; // Number of rings to draw

public shootingTargetViewer() 
{
this.setBackground(Color.WHITE);
this.setPreferredSize(new Dimension(SIZE, SIZE));
}

// method sets rings and accepts a parameter value
public void setRings(int cir) 
{
rings = cir;
this.repaint();
}

public void paintComponent(Graphics g) 
{
super.paintComponent(g);

// variable declaration and initialization for the x and y values
int x = SIZE/2;
int y = SIZE/2;

// for loop will create iterationsfor the COLOR function
for (int i=rings; i>0; i--) 
{
if (i%2 == 0) {
g.setColor(Color.WHITE);
} else {
g.setColor(Color.BLACK);
}
int radius = i * 70/rings; // radius of the ring
g.fillOval(x-radius, y-radius, radius*2, radius*2);
}
}
}