float x = 3.45;
float inic= 0.00002 ; 
float  fin= 0.00040 ;

void setup(){
  Serial.begin(115200);
}

void loop() {
  char *primero = (char *)&inic;
  char *buff = (char *)&x;
  char *ultimo = (char*)&fin;    // * amb això li diem k ´es un punter  i amb & especifiquem la direcció
  
  Serial.write(primero,4);
  Serial.write(buff,4);
  Serial.write(ultimo,4);
  delay(400);
}

 * char valor = "1";
float i=0.1;
void loop() {
  char* buffn="";  //Cadena donde almacenaremos el número convertido
                                                                            // Número a convertir
                                                                            // Tamaño del número en carácteres
                                                                            // Precisión (nº decimales)
                                                                            // Buffer donde almacenaremos la cadena
  dtostrf(i,10,2,buffn); //Llamada a la función
  char buffer1[4]=""; //Buffer de la cadena donde se devuelve todo, número formateado y cadena concatenada
  char* formato="%s"; //Cadena con la mascara a convertir
                                                                                           //buffer = Buffer donde devolveremos el resultado de los valores convertidos
                                                                                                  //formato = cadena con la máscara de los valores a convertir 
                                                                                             // buffn = Lista de valores que se van a convertir en cadena
  sprintf(buffer1, formato, buffn);
  char buffer = buffer1;
  Serial.println(buffer); 
  delay(500);
}
