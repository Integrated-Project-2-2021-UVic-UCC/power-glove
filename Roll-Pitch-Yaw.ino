#include "MPU9250.h"

MPU9250 mpu;   //Objecte MPU

void setup() {
    Serial.begin(9600);
    Wire.begin();
    delay(2000);

    if (!mpu.setup(0x68)) {  // change to your own address
        while (1) {
            Serial.println("MPU connection failed.");
            delay(5000);
        }
    }
}

void loop() {
    if (mpu.update()) {
        static uint32_t prev_ms = millis();
        if (millis() > prev_ms + 25) {
            print_roll_pitch_yaw();
            prev_ms = millis();
        }
    }
}

void print_roll_pitch_yaw() {
    Serial.print("Yaw: ");Serial.print(mpu.getYaw(), 2);Serial.print("   ");
    Serial.print("Pitch: ");Serial.print(mpu.getPitch(), 2);Serial.print("   ");
    Serial.print("Roll: ");Serial.print(mpu.getRoll(), 2);Serial.print("   \n");
}
