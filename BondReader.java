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

import java.io.File;
import java.io.IOException;
import java.io.FileNotFoundException;//Imports runtime constructor exceptions
import java.util.ArrayList;
import java.util.Scanner;


public class BondReader
{
	// Instance Variables
	ArrayList<String> bondList = new ArrayList<String>();
	ArrayList<Integer> bondEnergyList = new ArrayList<Integer>();
	ArrayList<Double> bondLengthList = new ArrayList<Double>();
	
	// Constructors
	
	// Methods
	public void readFile(String fileName) throws IOException
	{
		File inFile = new File("C:\\Users\\alber\\Desktop\\bonddata.txt".concat(fileName));
		
		try(Scanner in = new Scanner(inFile))
		{
			readData(in);
		}
	}
	
	public void readData(Scanner in)throws FileNotFoundException 
	{
		while(in.hasNextLine())
		{
			if(in.hasNextInt() || in.hasNextDouble())
			{
				throw new FileNotFoundException ("Expected Bond");
			}
			bondList.add(in.next());
			
			if(!in.hasNextInt())
			{
				throw new FileNotFoundException ("Expected Bond Engery");
			}
			bondEnergyList.add(in.nextInt());
			
			if(!in.hasNextDouble())
			{
				throw new FileNotFoundException ("Expected Bond Length");
			}
			bondLengthList.add(in.nextDouble());
		}
	}
	
	public void printTable()
	{
		System.out.printf("%12s %12s %12s\n", "Bond", "Bond Energy", "Bond Length");
		for(int i = 0; i < bondList.size() && i < bondEnergyList.size() && i < bondLengthList.size(); i++)
		{
			System.out.printf("%12s %12d %12.3f\n", bondList.get(i), bondEnergyList.get(i), bondLengthList.get(i));
		}
	}
	
	public void printRow(int index)
	{
		System.out.printf("%12s %12d %12.3f\n", bondList.get(index), bondEnergyList.get(index), bondLengthList.get(index));
	}
	
	public ArrayList<String> getBondList()
	{
		return this.bondList;
	}
	
	public ArrayList<Double> getBondLengthList()
	{
		return this.bondLengthList;
	}
	
	public ArrayList<Integer> getBondEnergyList()
	{
		return this.bondEnergyList;
	}
}
