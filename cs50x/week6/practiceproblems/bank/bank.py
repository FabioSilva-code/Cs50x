#asks for input and lower cases input and if there are spaces before letter strip will "cut" them
greeting = input("Please enter your greeting: ").lower().strip()

#if input is hello prints 0
if greeting.startswith("hello"):
    print("$0")

#if input is different from hello checks if 1st [0] letter is h then prints 20
elif greeting[0] == "h":
    print("$20")

#if noone of previous occurs prints 100$
else:
    print("$100")

