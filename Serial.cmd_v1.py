##buffer = ""
##lista = ""
##f_inicio = None
##f_trama = None
##f_final = None
##
##arduino = serial.Serial('COM6', 115200, timeout=.1)
##while True :
##
##        lectura=arduino.read(size=12)
##        if (len(lectura) == 12) :
##                print(lectura[:4])
##                if lectura[:4] == b"\xac\xc5'7" :
##                        print("Hola")
##                inicio = lectura[:4]
##                f_inicio = struct.unpack("<f",inicio)
##                trama = lectura[4:8]
##                f_trama = struct.unpack("<f",trama)
##                final = lectura[8:14]
##                f_final = struct.unpack("<f",final)
##        time.sleep(0.4)
