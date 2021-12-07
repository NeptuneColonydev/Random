print("Simple Command Line Calculator\n")

#User chooses mathmatical operation.
def request(int):
    ent = int(input("[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n"))
    return ent
c = request(int)

#Function for addition.
def add(int):
    #Set sum to 0 and then loop until the user has entered desired inputs.
    sum = 0
    while True:
        print(sum)
        i = int(input("Enter a number: "))
        sum += i
        #Asks if the user wants to enter another number.
        end = input("Add another number? [y/n]")
        endLwr = end.lower()
        #Checks the users input.
        if endLwr == "n":
            return sum
        elif endLwr == "y":
            continue
        else:
            #If the user input is invalid, set sum to 0 making the process restart.
            print("Error: invalid input\n")
            sum = 0
            continue

#Process user inputs.
if c == 1:
    sumStr = str(add(int))
    print("\nSum = "+sumStr)
elif c == 2:
    print("wip")
elif c == 3:
    print("wip")
elif c == 4:
    print("wip")
else:
    print("Error: invalid input\n")