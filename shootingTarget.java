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

public class shootingTarget 
{
public static void main() 
{
JFrame target = new shootingTargetComponent();
target.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
target.setVisible(true);
}
}
