package Assignment_03;

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class problem_02 {

	public static void main(String[] args) {

		Scanner src = new Scanner(System.in);
		int[] array = new int[10];
		System.out.print("Please enter 10 numbers : ");
		int smallest = 99999999, greatest = 0;
		for (int i = 0; i < 10; i++) {
			int n = src.nextInt();
			array[i] = n;

		}

		for (int i = 0; i < 10; i++) {
			if (array[i] > greatest)
				greatest = array[i];
			if (array[i] < smallest)
				smallest = array[i];
		}
		System.out.println("Smallest number : " + smallest + " greatest number : " + greatest);
		src.close();

	}

}
