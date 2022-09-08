package main

func reverse(n int) int {
    new_int := 0
    for n > 0 {
        a := n % 10
        new_int *= 10
        new_int += a 
        n /= 10
    }
    return new_int 
}

func main() {
    print(reverse(123456))   
}
