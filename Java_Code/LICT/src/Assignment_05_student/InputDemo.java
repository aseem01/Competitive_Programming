package Assignment_05_student;


/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class InputDemo
{
    public String sName;
    public int sReg;
    public String marks;
    

	int sum=0,n,Average;
	int [][] array = new int[5][9999];
	int [][] arr2=new int [5][9999];
	String [] arName=new String[5];
	int [] sSum=new int[7778];
	int [] average = new int[888];
	String [] grade=new String [123];
	String order = null,name;
  public void marks()
  {
	  System.out.println("Enter your 5 students name and marks : ");
	  Scanner src=new Scanner(System.in);
	  Scanner src1=new Scanner(System.in);
	  //System.out.println("I'm here");
	  
	  
	  for(int i=0;i<5;i++)
	  {
		  if(i==0) order="1st";
		  if(i==1) order="2nd";
		  if(i==2) order="3rd";
		  if(i==3) order="4th";
		  if(i==4) order="5th";
		  System.out.print("Enter "+order+" student name and his/her 5 course marks : ");
		  name=src1.nextLine();
		  //System.out.println("Name : "+name);
		  arName[i]=name;
		  
		  for(int j=0;j<5;j++)
		  {
		  
		  n=src.nextInt();
		  array[i][j]=n;
		  }
		  
	  }
	  
	 
}
}