package main

import (
	"fmt"
	"strconv"
	"reflect"
)

func remove(n string) (result string) {
  if len(n) > 2 {
   
  }
  return result
}

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
    var n string
    fmt.Scanln(&n)
    
    for n[0] == '0'{
        n = n[1:len(n)]
    }
    
    intn, err := strconv.Atoi(n)
	fmt.Println(intn, err, reflect.TypeOf(n))
    
    print(reverse(int(intn)))

}
