package main

func Convert_to_roman(number int) string {
    conversions := []struct{
        value int
        digit string
    }{
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"},
    }

    roman := ""
    for _, conversion := range conversions {
        for number >= conversion.value {
            roman += conversion.digit
            number -= conversion.value
        }
    }
    return roman
}
 func main(){
    print(Convert_to_roman(132)) 
 }
