import serial
import time

ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)#Port of your device of choice
time.sleep(1)

logfile = open('test.csv', 'a')#.csv file to which data is stored

while 1:
	line = ser.readline() 
	a =  "%s" % (line)
	print a	
	logfile.write(a)
        logfile.flush()    
logfile.close()
ser.close()
