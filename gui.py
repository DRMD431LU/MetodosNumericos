import pygame,sys,time,os
from tkinter import *

root = Tk()

root.title("Métodos Númericos")
root.iconbitmap('descarga.ico')
root.config(bg="dodgerblue", bd="30", relief="sunken")

imagen = PhotoImage(file="plot.gif")
Label(root, image=imagen, bd=5, relief="ridge").pack()
root.mainloop()