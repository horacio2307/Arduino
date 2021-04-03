from tkinter import*

global Foco 
Foco = False
def change_foco():
    global Foco
    if Foco is not True:
        print("1")
        Color = "green"
        Text = "On"
        Foco = True
        
    else:
        print("0")
        Color = "red"
        Text = "Off"
        Foco = False
    l = Label(ventana,text="Foco "+ str(Text),bg=Color)
    l.place(x=35,y=0)

ventana=Tk()
ventana.title("Arduino")
ventana.geometry("100x70")
Color = "Red"
Text = "Off"
l = Label(ventana,text="Foco "+ str(Text),bg=Color)
l.place(x=35,y=0)
b = Button(ventana,text = "I/O",width=5,height=2,command=change_foco)
b.pack(side = BOTTOM)
ventana.mainloop()

