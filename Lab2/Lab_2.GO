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
