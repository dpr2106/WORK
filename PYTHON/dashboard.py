from tkinter import*
from PIL import Image,ImageTk
class RMS:
    def __init__(self,root):
        self.root=root
        self.root.title("Student Result Management System")
        self.root.geometry("1350x700+0+0")
        self.root.config(bg="white")
        
        self.logo_img=Image.open("images/logo.png")
        self.logo_img=self.logo_img.resize((60,60),Image.LANCZOS)
        self.logo_dash=ImageTk.PhotoImage(self.logo_img)
        title=Label(self.root,
                    text="Student Result Management System",
                    padx=10,
                    compound=LEFT,
                    image=self.logo_dash,
                    font=("goudy old style",30,"bold"),
                    bg="light blue",
                    fg="black").place(x=0,y=0,relwidth=1,height=69)
        M_Frame=LabelFrame(self.root,
                                       text="Menus",
                                       font=("arial black",15),
                                       bg="white",
                                       bd=1,  
                                       relief="solid",       
                                       highlightthickness=0,
                                       labelanchor="nw",       
                                       padx=5, pady=2
                                       )
        M_Frame.place(x=0,
                      y=80,
                      width=1350,
                      height=70)
        btn_course=Button(M_Frame,
                          text="Course",
                          font=("Arial black",14,"bold"),
                          bg="#003049",
                          fg="white",
                          cursor="hand2").place(x=20,y=2,width=150,height=30)
        btn_student=Button(M_Frame,
                          text="Students",
                          font=("Arial black",14,"bold"),
                          bg="#003049",
                          fg="white",
                          cursor="hand2").place(x=190,y=2,width=150,height=30)
        btn_result=Button(M_Frame,
                          text="Result",
                          font=("Arial black",14,"bold"),
                          bg="#003049",
                          fg="white",
                          cursor="hand2").place(x=360,y=2,width=150,height=30)
        btn_view=Button(M_Frame,
                          text="View Student Results",
                          font=("Arial black",12,"bold"),
                          bg="#003049",
                          fg="white",
                          cursor="hand2").place(x=524,y=2,width=200,height=30)
        btn_logout=Button(M_Frame,
                            text="Logout",
                            font=("Arial black",14,"bold"),
                            bg="#003049",
                            fg="white",
                            cursor="hand2").place(x=740,y=2,width=150,height=30)
        btn_exit=Button(M_Frame,
                            text="Exit",
                            font=("Arial black",14,"bold"),
                            bg="#003049",
                            fg="white",
                            cursor="hand2").place(x=910,y=2,width=150,height=30)
        
if __name__ == "__main__":
    root=Tk()
    obj=RMS(root)
    root.mainloop()
        