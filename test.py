import random
import time
string = "Hello World"
string2 = ""

index = 0
while True:
    if string == string2:
        break;
    randomString = chr(random.randrange(31,123))
    if randomString == string[index]: 
        string2+=randomString
        index+=1
    print(string2,end="")
    print(randomString if randomString.isalpha() else "")
    # print()
    time.sleep(0.005)


