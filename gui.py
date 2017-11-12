from sympy import *
from tkinter import *
from tkinter import messagebox as MessageBox

#se define la funcion de boton de salir
operations = [
        ['1', "uno"],
        ['2', "dos"],
        ['3', "tres"],
        ['e', "exponente"],
        ['*', "multiplicacion"],
        ['^', "potencia"],
        ['4', "cuatro"],
        ['5', "cinco"],
        ['6', "seis"],
        ['sqrt', "raiz2"],
        ['rt(x)', "raiz"],
        ['/', "division"],
        ['7', "siete"],
        ['8', "ocho"],
        ['9', "nueve"],
        ['sin', "sin"],
        ['cos', "cos"],
        ['tan', "tan"],
        ['CE', "CE"],
        ['0', "cero"],
        ['x', "equis"],
        ['sinh', "sinh"],
        ['cosh', "cosh"],
        ['tanh', "tanh"],
        ['ENTER', "enter"],
        ['-', "neg"],
        ['+', "add"],
    ]
def quit(event=None):
    salida=MessageBox.askquestion("Salir","¿Estás seguro que deseas salir del programa?")
    if (salida=="yes"):
        root.destroy()
    else:
        pass
    
def pretty():
    palabra= pprint((sympify(funcion_entrada.get())))
    return palabra

#se crea un objeto Tk como raiz, con la configuracion de icono y fondo de pantalla    
root = Tk()
root.title("Métodos Númericos")
root.iconbitmap('/imagenes/descarga.ico')
root.config(bg="dodgerblue", bd="30", relief="sunken")   
        
imagen = PhotoImage(file="imagenes/plot.gif")

#se definen las variables globales y a utilizar en la entrada y salida de la gui
i=6
j=5
funcion_entrada= StringVar()
funcion_salida=StringVar()
opcion= IntVar()
intervalo=StringVar()
#palabra=pprint()
#se elige la fuente a utilizar en el programa y los labels de las funciones
font = 'georgia 16 bold'
hwtext = Label(root, text='¡Programa de Métodos Númericos!', font=font,background='dodgerblue').grid(row=0, column=1,sticky="n", padx=5, pady=5)
#Label(root,image=imagen).grid(row=0,column=0)
#se crean los widgets dentro de los frames
hwframe = Frame(root,background='dodgerblue').grid(row=1)

label1=Label(hwframe, text="Ingrese la función",font=font,background='dodgerblue').grid(row=2,column=0,padx=5, pady=5)
entry1=Entry(hwframe, width=50,textvariable=funcion_entrada,justify="center").grid(row=2,column=1,padx=5, pady=5)
label3=Label(hwframe, text="Intervalo",font=font,background='dodgerblue').grid(row=4,column=0,padx=5, pady=5)
entry3=Entry(hwframe, width=50,textvariable=intervalo,justify="center").grid(row=4,column=1,padx=5, pady=5)
#label2=Label(hwframe, text=palabra,font=font,background='dodgerblue').grid(row=3,column=0,padx=5, pady=5)
entry2 =Entry(hwframe, width=50,textvariable=funcion_salida,state="disabled").grid(row=3,column=1,padx=5, pady=5)
boton_funcion=Button(hwframe,text="Función formateada", background='green',foreground='white', width=20, command=pretty).grid(row=3,column=2)

btn_frame=Frame(root,background='dodgerblue').grid(row=4)
#pad de los metodos:
Radiobutton(btn_frame,text="Método de Bisección",background='dodgerblue',variable=opcion,value=1).grid(row=6,column=0,sticky="w", padx=5, pady=1)
Radiobutton(btn_frame,text="Método de Falsa Posición",background='dodgerblue',variable=opcion,value=2).grid(row=7,column=0,sticky="w", padx=5, pady=1)
Radiobutton(btn_frame,text="Método de la Secante",background='dodgerblue',variable=opcion,value=3).grid(row=8,column=0,sticky="w", padx=5, pady=1)
Radiobutton(btn_frame,text="Método de Newton",background='dodgerblue',variable=opcion,value=4).grid(row=9,column=0,sticky="w", padx=5, pady=1)
Radiobutton(btn_frame,text="Método de Newton-Raphson",background='dodgerblue',variable=opcion,value=5).grid(row=10,column=0,sticky="w", padx=5, pady=1)

#pad de botones para las operaciones, facilita el formato de operaciones soportadas por el programa

for button in operations:
    i+=1
    Button(btn_frame, text=button[0], width=9,background='black',foreground='white').grid(row=j,column=i)
    
    if (i%6)==0:
        j+=1
        i=6
        

#Boton de salida del programa
quit_button = Button(root, text='Salir del sistema', command=quit,
                     background='red', foreground='white').grid(row=20,column=3,padx=5, pady=5)

root.bind('<q>', quit)


root.mainloop()