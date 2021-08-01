/****************************************************/
/* Name : Alberto Ramirez                           */
/* Palomar Student ID : 006095053                   */
/* Week 9 Assignment				    */
/* Assignment 9     Program: P11.14                 */
/* Date: 8/1/21                                     */
/* This program accepts data from one column and    */
/* returns the corresponding data from the other    */
/* columns in the stored file			    */
/****************************************************/
package bondProgram;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

public class BondTester
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		BondReader reader = new BondReader();
		
		boolean isDone = false;
		
		//Banner message
		System.out.println("Welcome to the Chemical Bond Program");
		System.out.println("");//Blank Line
		
		while(!isDone)
		{
			try
			{
				
				//Note:
            	//File path for the wrong file: C:\Users\alber\Desktop\bonddata.txt 
				
				System.out.println("Enter Input File Name: ");
				String fileName = in.next();
				reader.readFile(fileName);
				in.close();
				reader.printTable();
				
				System.out.print("");//Blank Line
				System.out.println("\nEnter Any Value From the Table and It Will Print Rows with the Same Value for the Given Column:");
				if(in.hasNextInt())
				{
					// We are looking for the bond length
					int bondEnergy = in.nextInt();
					
					// Check each array to find any corresponding rows
					for(int i = 0; i < reader.getBondEnergyList().size(); i++)
					{
						if(reader.getBondEnergyList().get(i) == bondEnergy)
						{
							// Print out the entire row
							reader.printRow(i);
						}
					}
				}
				else if(in.hasNextDouble())
				{
					// We are looking for the bond length
					double bondLength = in.nextDouble();
					
					// Check each Array to find any corresponding rows
					for(int i = 0; i < reader.getBondLengthList().size(); i++)
					{
						if(reader.getBondLengthList().get(i) == bondLength)
						{
							// Print out the entire row
							reader.printRow(i);
						}
					}
				}
				else
				{
					// Otherwise we will look for the bond
					String bond = in.next();
					
					// Check each array for the same bond (Should never print any other array)
					for(int i = 0; i < reader.getBondList().size(); i++)
					{
						if(reader.getBondList().get(i) == bond)
						{
							// Print out the entire row
							reader.printRow(i);
						}
					}
				}
				
				isDone = true;
			}
			catch(FileNotFoundException e)
			{
				System.out.print("");//Blank Line
				System.out.println("ERROR: File Not Found");
			}
			catch(IOException e)
			{
				e.getStackTrace();
			}
		
		}
		
		in.close();
	}
}
