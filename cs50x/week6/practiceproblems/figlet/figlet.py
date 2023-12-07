import sys
import pyfiglet
from pyfiglet import Figlet
import random


fontIsRandom = False

if (len(sys.argv) == 1):
    fontIsRandom = True
elif (len(sys.argv) == 3):
    fontIsRandom = False
else:
    sys.exit ("Command-line not expected")


figlet = Figlet()

availableFonts = figlet.getFonts()

if fontIsRandom == False:
    if(sys.argv[1] not in ["-f" ,"--font"]):
        sys.exit("Second command-line incorrect")
    try:
        font = figlet.setFont(font=sys.argv[2])
    except:
        sys.exit("Font doesn't exist")

else:
    font = random.choice(availableFonts)

print (font)

txt = input("input:")

print(figlet.renderText(txt))



