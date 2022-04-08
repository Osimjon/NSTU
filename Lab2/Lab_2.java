package Basics.Lessons;
import java.util.Scanner;

import static java.lang.Math.pow;

//ввод числа, *4, ^2
public class res {
public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);
  
int a = scanner.nextInt();
int b = (int) pow((a*4),2);

System.out.println(b);
  }
}
