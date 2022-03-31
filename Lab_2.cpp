/*Реализовать
представленные задачи на языках программирования C++, Python, Haskell
(только одно задание), C#, Go, Ruby (только одно задание), Java.

1. Дана сторона квадрата a. Найти квадрат его периметра P=4·a.
  С++:
*/
#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int a,p,res;

	cin >> a;
	p = 4 * a;
	res = pow(p, 2);

	cout << res << endl;

	return 0;
}



Python:
	a = float( input())
	print(pow((4*a),2))



GoLang:
	package main
import "fmt"
import "math"

func main() {
    fmt.Println("Введите число:")
    var a int
    var res int
    
    fmt.Scan(&a)
    res = int(math.Pow(float64((a*4)),2))
    
    fmt.Println(res)
}



Java:
package Basics.Lessons;
import java.util.Scanner;

import static java.lang.Math.pow;

//ввод числа, *4, ^2
public class res {
public static void main(String[] args) {
System.out.println("Введите число");
Scanner scanner = new Scanner(System.in);
int a = scanner.nextInt();

int b = (int) pow((a*4),2);

System.out.println(b);
}
}



 Ruby:
puts "Введите длину стороны квадрата:"
a = gets.to_i
a= a*4
a=a*a
puts (a)


C#:

using System;
class square {
  static void Main() {
    Console.WriteLine("Введите длину стороны квадрата:");
    int num = 0;
    num = Convert.ToInt32(Console.ReadLine());
    num*=4;
    num*=num;
    
    Console.Write(num);


  }
}



Hasskell:


	
	