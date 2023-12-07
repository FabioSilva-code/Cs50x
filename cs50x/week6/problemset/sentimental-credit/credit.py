from cs50 import get_int

while True:
    card = get_int("Credit Card:")
    first_two_digits = card // 100
    if card > 0:
        break

card1 = ((card % 100) / 10) * 2
card2 = ((card % 10000) / 1000) * 2
card3 = ((card % 1000000) / 100000) * 2
card4 = ((card % 100000000) / 10000000) * 2
card5 = ((card % 10000000000) / 1000000000) * 2
card6 = ((card % 1000000000000) / 100000000000) * 2
card7 = ((card % 100000000000000) / 10000000000000) * 2
card8 = ((card % 10000000000000000) / 1000000000000000) * 2

card1 = ((card1 % 100) / 10) + (card1 % 10)
card2 = ((card2 % 100) / 10) + (card2 % 10)
card3 = ((card3 % 100) / 10) + (card3 % 10)
card4 = ((card4 % 100) / 10) + (card4 % 10)
card5 = ((card5 % 100) / 10) + (card5 % 10)
card6 = ((card6 % 100) / 10) + (card6 % 10)
card7 = ((card7 % 100) / 10) + (card7 % 10)
card8 = ((card8 % 100) / 10) + (card8 % 10)

sum1 = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8

card9 = ((card % 10) / 1)
card10 = ((card % 1000) / 100)
card11 = ((card % 100000) / 10000)
card12 = ((card % 10000000) / 1000000)
card13 = ((card % 1000000000) / 100000000)
card14 = ((card % 100000000000) / 10000000000)
card15 = ((card % 10000000000000) / 1000000000000)
card16 = ((card % 1000000000000000) / 100000000000000)

card9 = ((card9 % 100) / 10) + (card9 % 10)
card10 = ((card10 % 100) / 10) + (card10 % 10)
card11 = ((card11 % 100) / 10) + (card11 % 10)
card12 = ((card12 % 100) / 10) + (card12 % 10)
card13 = ((card13 % 100) / 10) + (card13 % 10)
card14 = ((card14 % 100) / 10) + (card14 % 10)
card15 = ((card15 % 100) / 10) + (card15 % 10)
card16 = ((card16 % 100) / 10) + (card16 % 10)

sum2 = sum1 + card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16:

while True:
    if sum2 % 10 == 0:
        first_two_digits = card // 100

    length = 0
    visa = card
    amex = card
    master = card

    while card > 0:
        card = card // 10
        length += 1

    while visa >= 10:
        visa //= 10
    if visa == 4 and (length == 13 or length == 16):
        print("VISA")
        break

    while amex >= 10000000000000:
        amex //= 10000000000000
    if (amex == 34 or amex == 37) and length == 15:
        print("AMEX")
        break

    while master >= 100000000000000:
        master //= 100000000000000
    if (master == 51 or master == 52 or master == 53 or master == 54 or master == 55) and length == 16:
        print("MASTERCARD")
        break

    if first_two_digits not in [4, 34, 37, 51, 52, 53, 54, 55]:
        print("INVALID")
        break
    else:
     print("INVALID")