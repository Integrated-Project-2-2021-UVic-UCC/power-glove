from PyQt5.QtWidgets import *
from PyQt5 import uic
from var import *


class FinPpal(QMainWindow):
    def __init__(self):
        super().__init__()
        uic.loadUi("interficie.ui",self)
        #self.QMainWindow.setIcon()
        #Carreguem la interficie ui
        self.lcdThumb.display(dit_g)    #g=gordo
        self.lcdIndex.display(dit_i)    #i=index
        self.lcdMiddle.display(dit_b)   #b=butifarra
        self.lcdRing.display(dit_a)     #a=anular
        self.lcdPinky.display(dit_p)    #p=petit
        self.lcdYaw.display(yaw)
        self.lcdPitch.display(pitch)
        self.lcdRoll.display(roll)
       
    
app=QApplication([])
finestra=FinPpal()
finestra.show()
app.exec_()
