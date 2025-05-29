num1=int (input("Enter 1st number:"))
num2=int (input("Enter 2nd number:"))

operators=input("Enter Operators:")

match operators:
    case "+":
        print(num1+num2)
    case "-":
        print(num1-num2)
    case "*":
        print(num1*num2)
    case "/":
        print(num1/num2)
    case "**":
        print(num1**num2)
    case "//":
        print(num1//num2)
    case "%":
        print("the remainders is :" ,num1%num2)
    case "&":
        print(num1&num2)
    case "|":
        print(num1|num2)







