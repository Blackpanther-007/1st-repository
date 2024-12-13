import time
timestamp= time.strftime('%H:%M:%S')
print(timestamp)
h= int(time.strftime('%H'))
m= int(time.strftime('%M'))
s= int(time.strftime('%S'))
if h<12:
    print("Good Morning!!")
if h>=12 and h<16:
    print("Good Afternoon!!")
if h>=16 and h<19:
    print("Good Evening!!")
else:
    print("Good Night!!")