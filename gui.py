from sympy import *
from tkinter import *


#se define la funcion de boton de salir
def quit(event=None):
    root.destroy()

#se crea un objeto Tk como raiz, con la configuracion de icono y fondo de pantalla    
root = Tk()
root.title("Métodos Númericos")
root.iconbitmap('descarga.ico')
root.config(bg="dodgerblue", bd="30", relief="sunken")   
        
#imagen = PhotoImage(file="plot.gif")
#Label(root, image=imagen, bd=5, relief="ridge").pack()
#se crea un frame en la raiz y se empaqueta
top = Frame(root)       
top.grid(row=0,column=0) 

font = 'georgia 18 bold'
hwtext = Label(root, text='¡Programa de Métodos Númericos!', font=font,background='dodgerblue').grid(row=0,column=3, sticky="n", padx=5, pady=5)
#se crean los widgets
hwframe = Frame(top).grid(row=5)
# this frame (row) is packed from top to bottom (in the top frame):


#rframe = Frame(top).pack(side='top', padx=10, pady=20)
label1=Label(root, text="Ingrese la función",font=font,background='dodgerblue').grid(row=5,column=0,padx=5, pady=5)
r_entry = Entry(root, width=20).grid(row=5,column=2,padx=5, pady=5)

#Boton de salida
quit_button = Button(root, text='Salir del sistema', command=quit,
                     background='red', foreground='white').grid(row=10,column=3,padx=5, pady=5)

root.bind('<q>', quit)


root.mainloop()