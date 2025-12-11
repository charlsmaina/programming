hours = input("Enter the number of  hours worked:, ")
rate = input("Enter the rate oy payment per hour:,")

try :
    hr = float(hours)
    rt = float(rate)
    

except :
    
    print("please enter a valid input") 
    quit()

regular = hr * rt 
overtime = (hr - 40) * rt * 1.5
ovtp = regular + overtime
if hr < 40 :
    
    print("Regular pay:",regular)

else :
    print("Overtime pay :", ovtp)