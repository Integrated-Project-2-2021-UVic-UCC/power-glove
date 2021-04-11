

          // CONNEXIONAT
                  //A4 : DATA
                  //A5 : CLOCK
                  //GND : terra
                  //VCC : 3,3 V











#include "MPU9250.h"    // INCLUSIÓ LLIBRERIA

MPU9250 mpu;  // inicialitzem l'objecte MPU

void setup() {
    Serial.begin(9600);
    Wire.begin();
    delay(2000);

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
    Serial.print(mpu.getYaw(), 2);    // arrodonim el valor a 2 utilitzant 
    Serial.print("Pitch: ");
    Serial.print(mpu.getPitch(), 2);   // arrodonim el valor a 2
    Serial.print("Roll: ");
    Serial.println(mpu.getRoll(), 2);  // arrodonim el valor a 2


    
}
