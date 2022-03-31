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
