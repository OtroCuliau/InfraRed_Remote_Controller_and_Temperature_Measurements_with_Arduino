#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremote.h>

#include <IRremote.h>

IRsend irsend;
uint16_t irSignal[] ={3116, 1612, 464, 1196, 492, 1168, 492, 352, 468, 380, 468, 376, 468, 1200, 492, 352, 468, 384, 468, 1196, 492, 1172, 488, 352, 472, 1196, 464, 376, 468, 380, 464, 1204, 492, 1184, 488, 348, 496, 1176, 488, 1172, 492, 352, 496, 348, 468, 1200, 468, 376, 468, 384, 496, 1172, 488, 356, 492, 352, 468, 376, 468, 376, 492, 356, 492, 352, 480, 372, 468, 376, 492, 352, 492, 352, 468, 380, 468, 376, 492, 352, 492, 356, 464, 388, 492, 348, 468, 376, 468, 1196, 492, 352, 496, 352, 488, 1176, 492, 352, 468, 384, 472, 1196, 468, 1192, 492, 352, 492, 352, 472, 376, 468, 376, 492, 352, 496, 356, 468, 376, 464, 1200, 468, 1200, 492, 352, 492, 352, 468, 376, 468, 380, 492, 360, 468, 1196, 492, 1168, 492, 352, 468, 1196, 492, 1172, 488, 1180, 488, 356, 464, 388, 468, 372, 468, 380, 464, 380, 464, 408, 492, 352, 468, 376, 492, 356, 468, 384, 468, 376, 464, 380, 468, 376, 468, 376, 468, 380, 464, 380, 468, 376, 468, 384, 468, 376, 468, 376, 468, 380, 464, 380, 472, 372, 468, 376, 468, 380, 468, 384, 468, 372, 468, 380, 492, 352, 468, 376, 468, 376, 468, 380, 468, 376, 468, 384, 468, 1192, 468, 376, 472, 1192, 464, 1200, 492, 1168, 468, 1200, 464, 1200, 464, 380, 468};
uint16_t irApagar[] ={3148, 1580, 492, 1164, 496, 1168, 492, 352, 496, 348, 496, 352, 492, 1176, 492, 352, 492, 360, 492, 1172, 492, 1168, 492, 352, 496, 1168, 496, 348, 492, 356, 492, 1172, 492, 1180, 496, 344, 496, 1172, 496, 1172, 492, 352, 496, 348, 496, 1172, 492, 352, 496, 356, 492, 1172, 496, 348, 496, 348, 496, 352, 496, 348, 492, 352, 496, 352, 492, 360, 492, 348, 496, 352, 492, 352, 492, 352, 492, 352, 496, 352, 492, 352, 492, 360, 492, 352, 492, 352, 492, 352, 492, 356, 492, 348, 496, 1168, 496, 352, 488, 360, 500, 1168, 492, 1168, 492, 352, 496, 352, 492, 352, 492, 352, 492, 352, 496, 356, 496, 348, 492, 1172, 492, 1172, 492, 352, 496, 348, 496, 352, 492, 352, 496, 356, 496, 1168, 496, 1168, 492, 352, 492, 1168, 496, 1168, 492, 1172, 496, 352, 492, 360, 492, 348, 496, 348, 496, 352, 492, 352, 496, 348, 496, 348, 496, 352, 496, 356, 492, 352, 492, 352, 492, 352, 496, 348, 496, 352, 492, 352, 492, 352, 496, 356, 492, 352, 492, 352, 496, 348, 496, 352, 492, 352, 492, 352, 492, 356, 492, 360, 492, 348, 496, 352, 492, 352, 492, 352, 496, 348, 492, 352, 496, 352, 492, 360, 492, 1172, 492, 352, 492, 352, 492, 1176, 492, 1168, 492, 1176, 492, 1168, 492, 360, 492};
 

void setup()
{

}


void loop() {

  int khz = 38; // 38kHz carrier frequency for the NEC protocol

  irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz); //Note the approach used to automatically calculate the size of the array.
  delay(1000);
  irsend.sendRaw(irApagar, sizeof(irSignal) / sizeof(irSignal[0]), khz); //Note the approach used to automatically calculate the size of the array.
  
  delay(5000); //In this example, the signal will be repeated every 5 seconds, approximately.
 
}
