package Assignment_03;

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class problem_04_GameClass {

	public void GameMethod() {
		Scanner src = new Scanner(System.in);
		System.out.println("We are ready for Game.Let's start :");

		System.out.println("Which is prime number 32 or 3 or 10 or 12?");
		System.out.print("It's your first chance .Please enter valid answer : ");
		int n = src.nextInt();
		if (n == 3) {
			System.out.println("�Great! You won�");
			System.out.println("If you want to play again,please enter 1.If you want quit pelase enter 0");

			int m = src.nextInt();
			if (m == 1) {
				this.GameMethod();
			} else {
				System.out.println("Thanks to you for participation.");
			}

		} else {
			System.out.print("It's your Second chance .Please enter valid answer : ");
			n = src.nextInt();
			if (n == 3) {
				System.out.println("�Bravo! You won�");

				System.out.println("If you want to play again,please enter 1.If you want quit pelase enter 0");

				int m = src.nextInt();
				if (m == 1) {
					this.GameMethod();
				} else {
					System.out.println("Thanks to you for participation.");
				}

			} else {
				System.out.print("It's your Third chance .Please enter valid answer : ");
				n = src.nextInt();
				if (n == 3) {
					System.out.println("�You won�");

					System.out.println("If you want to play again,please enter 1.If you want quit pelase enter 0");

					int m = src.nextInt();
					if (m == 1) {
						this.GameMethod();
					} else {
						System.out.println("Thanks to you for participation.");
					}

				} else {
					System.out.println("�You Lose� ");
					System.out.println("no");

					System.out.println("If you want to play again,please enter 1.If you want quit pelase enter 0");

					int m = src.nextInt();
					if (m == 1) {
						this.GameMethod();
					} else {
						System.out.println("Thanks to you for participation.");
					}

				}
			}

		}
	}

}
