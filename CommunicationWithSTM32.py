import serial
import tkinter as tk

root = tk.Tk()
portCOM = "COM3"
stm32 = serial.Serial(port=portCOM,baudrate=115200)


def LED_ON():
    stm32.write(str("LED ON").encode('ascii'))
def LED_OFF():
    stm32.write(str("LED OFF").encode('ascii'))

led_on = tk.Button(root,text="Led on",command=LED_ON).pack()
led_off = tk.Button(root,text="Led off",command=LED_OFF).pack()

root.mainloop()