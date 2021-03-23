

#include "MPU9250.h"    // INCLUSIÓ LLIBRERIA

MPU9250 mpu;  // inicialitzem l'objecte MPU
                                                            
int files = 100;                                       
int columnes = 5;                                     
int array1[11][3];  
int dx = 0;
int dy = 0;                              
int F1 = 0;                                                 
int map1 = 0;   


                                                                                               
void setup() {                                              
  Serial.begin(9600);
  Wire.begin();
  delay(1000);
  
}                                                           
void loop() {
    if (mpu.update()) {                         // comprova una modificació en qualsevol dels valors del gyro+accelero
        static uint32_t valor_previ = millis(); // variable que anirà a la vel. processador
        if (millis() > valor_previ + 25) {  // control del temps de mostreig
            printeja(); // printegem valors de rotació Yaw, Pitch, Roll
            valor_previ = millis(); // Reinicialitzem valor per resetejar el temps entre mostreig
        }
    }
}                                                           
void printeja() {
    Serial.print("Yaw: ");
    Serial.print(mpu.getYaw(), 2);Serial.print(" | ");    // arrodonim el valor a 2 utilitzant 
    Serial.print("Pitch: ");
    Serial.print(mpu.getPitch(), 2);Serial.print(" | ");   // arrodonim el valor a 2
    Serial.print("Roll: ");
    Serial.println(mpu.getRoll(), 2);  // arrodonim el valor a 2
}

void taula() {                                                                                                      
  if (dy<12){
    if (dx<4){
      array1[dx][dy] = mpu.getYaw();
      dx+1=;
      array1[i][j] = i;
      delay(100);
      //Serial.print(array1[i]);
    }
    Serial.println(" ");
    delay(100); 
  } 
}
