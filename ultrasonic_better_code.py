import serial
import csv
ser=serial.Serial("COM5",baudrate=9600)
csv=open(r"C:\Users\adhee\OneDrive\Desktop\ultrasonic.csv",'a')
try:
    while True:
            value=ser.readline()
            valueInstring=str(value,'UTF-8')
            a=valueInstring.split(' ')
            print(valueInstring)
            csv.write(valueInstring)
            csv.flush()
except Exception as e:
    print(e)
    csv.write("COMPORT error")
    csv.flush()
except KeyboardInterrupt as e:
     print('Program interrupted by keyboard')
     csv.write('Program interrupted by keyboard')