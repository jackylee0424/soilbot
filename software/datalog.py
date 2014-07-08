import serial
import time
import os

## ls /dev/tty*  ### check your serial connection here
device = "/dev/tty.usbmodemfa131"
ser = serial.Serial(device, 9600, timeout=5, parity="N", bytesize=8)
print "connecting Soilbot..."
time_start = time.time()
if not os.path.exists("data"):
    os.makedirs("data")
filename = os.path.join("data", str(int(time_start)) + ".txt")
FILE = open(filename, "w", 0)
while True:
    line = ser.readline()
    t = int(time.time())
    try:
        map(lambda x: int(x), line.strip().split(','))
        s = str(t) + "," + line.strip()
        if (t > time_start + 5):
            print s
            FILE.write(s + "\n")
    except:
        print "error"
        pass
    time.sleep(.01)
    ser.flushInput()
