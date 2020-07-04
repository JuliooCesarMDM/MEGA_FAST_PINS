#include "MEGAFASTPINS.h"

/******************************INFO********************************************/
//AUTOR:JULIO CESAR MATIAS
//MANIPULAÇÃO RAPIDA DOS PINOS DIGITAIS COMO ENTRADA E SAIDA
//APENAS PARA OS MICROC MEGA 1280 OU 2560
//PODE SER MODIFICADO PARA OS MICROC ATMEGA 168 E 328
//DATA:MAIO DE 2020
/******************************************************************************/

void setup() {
  Serial.begin(115200);
  SetPinMode(13, OUTPUTPIN); //DECLARA O PINO 13 COMO SAIDA
}

void loop() {
  FastDigitalWrite(13, BITON);
  delay(1000);
  FastDigitalWrite(13, BITOFF);
  delay(1000);
}
