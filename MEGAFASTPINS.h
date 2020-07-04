#ifndef MEGAFASTPINS_h
#define MEGAFASTPINS_h
#include <avr/io.h>

#define INPUTPIN  0x00
#define OUTPUTPIN 0x01
#define BITOFF    0x00
#define BITON     0x01

struct Struct_PinMap {
  volatile uint8_t *DDR;
  volatile uint8_t *PIN;
  volatile uint8_t *PORT;
  uint8_t           BITSHIFTH;
};

#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
static const Struct_PinMap DigitalPinMap[] = {
  {&DDRE, &PINE, &PORTE, 0},  //E0  0
  {&DDRE, &PINE, &PORTE, 1},  //E1  1
  {&DDRE, &PINE, &PORTE, 4},  //E4  2
  {&DDRE, &PINE, &PORTE, 5},  //E5  3
  {&DDRG, &PING, &PORTG, 5},  //G5  4
  {&DDRE, &PINE, &PORTE, 3},  //E3  5
  {&DDRH, &PINH, &PORTH, 3},  //H3  6
  {&DDRH, &PINH, &PORTH, 4},  //H4  7
  {&DDRH, &PINH, &PORTH, 5},  //H5  8
  {&DDRH, &PINH, &PORTH, 6},  //H6  9
  {&DDRB, &PINB, &PORTB, 4},  //B4 10
  {&DDRB, &PINB, &PORTB, 5},  //B5 11
  {&DDRB, &PINB, &PORTB, 6},  //B6 12
  {&DDRB, &PINB, &PORTB, 7},  //B7 13
  {&DDRJ, &PINJ, &PORTJ, 1},  //J1 14
  {&DDRJ, &PINJ, &PORTJ, 0},  //J0 15
  {&DDRH, &PINH, &PORTH, 1},  //H1 16
  {&DDRH, &PINH, &PORTH, 0},  //H0 17
  {&DDRD, &PIND, &PORTD, 3},  //D3 18
  {&DDRD, &PIND, &PORTD, 2},  //D2 19
  {&DDRD, &PIND, &PORTD, 1},  //D1 20
  {&DDRD, &PIND, &PORTD, 0},  //D0 21
  /********PINOS ANALOGICOS**********/
  {&DDRA, &PINA, &PORTA, 0},  //A0 22
  {&DDRA, &PINA, &PORTA, 1},  //A1 23
  {&DDRA, &PINA, &PORTA, 2},  //A2 24
  {&DDRA, &PINA, &PORTA, 3},  //A3 25
  {&DDRA, &PINA, &PORTA, 4},  //A4 26
  {&DDRA, &PINA, &PORTA, 5},  //A5 27
  {&DDRA, &PINA, &PORTA, 6},  //A6 28
  {&DDRA, &PINA, &PORTA, 7},  //A7 29
  /**********************************/
  {&DDRC, &PINC, &PORTC, 7},  //C7 30
  {&DDRC, &PINC, &PORTC, 6},  //C6 31
  {&DDRC, &PINC, &PORTC, 5},  //C5 32
  {&DDRC, &PINC, &PORTC, 4},  //C4 33
  {&DDRC, &PINC, &PORTC, 3},  //C3 34
  {&DDRC, &PINC, &PORTC, 2},  //C2 35
  {&DDRC, &PINC, &PORTC, 1},  //C1 36
  {&DDRC, &PINC, &PORTC, 0},  //C0 37
  {&DDRD, &PIND, &PORTD, 7},  //D7 38
  {&DDRG, &PING, &PORTG, 2},  //G2 39
  {&DDRG, &PING, &PORTG, 1},  //G1 40
  {&DDRG, &PING, &PORTG, 0},  //G0 41
  {&DDRL, &PINL, &PORTL, 7},  //L7 42
  {&DDRL, &PINL, &PORTL, 6},  //L6 43
  {&DDRL, &PINL, &PORTL, 5},  //L5 44
  {&DDRL, &PINL, &PORTL, 4},  //L4 45
  {&DDRL, &PINL, &PORTL, 3},  //L3 46
  {&DDRL, &PINL, &PORTL, 2},  //L2 47
  {&DDRL, &PINL, &PORTL, 1},  //L1 48
  {&DDRL, &PINL, &PORTL, 0},  //L0 49
  {&DDRB, &PINB, &PORTB, 3},  //B3 50
  {&DDRB, &PINB, &PORTB, 2},  //B2 51
  {&DDRB, &PINB, &PORTB, 1},  //B1 52
  {&DDRB, &PINB, &PORTB, 0},  //B0 53
  {&DDRF, &PINF, &PORTF, 0},  //F0 54
  {&DDRF, &PINF, &PORTF, 1},  //F1 55
  {&DDRF, &PINF, &PORTF, 2},  //F2 56
  {&DDRF, &PINF, &PORTF, 3},  //F3 57
  {&DDRF, &PINF, &PORTF, 4},  //F4 58
  {&DDRF, &PINF, &PORTF, 5},  //F5 59
  {&DDRF, &PINF, &PORTF, 6},  //F6 60
  {&DDRF, &PINF, &PORTF, 7},  //F7 61
  {&DDRK, &PINK, &PORTK, 0},  //K0 62
  {&DDRK, &PINK, &PORTK, 1},  //K1 63
  {&DDRK, &PINK, &PORTK, 2},  //K2 64
  {&DDRK, &PINK, &PORTK, 3},  //K3 65
  {&DDRK, &PINK, &PORTK, 4},  //K4 66
  {&DDRK, &PINK, &PORTK, 5},  //K5 67
  {&DDRK, &PINK, &PORTK, 6},  //K6 68
  {&DDRK, &PINK, &PORTK, 7}   //K7 69
};
#else
#error "DISPONIVEL APENAS PARA MICROC MEGA 1280 OU 2560"
#endif

static inline __attribute__((always_inline)) void SetPinMode(uint8_t Pin, uint8_t Mode) {
  if (__builtin_constant_p(Pin) && Pin < sizeof(DigitalPinMap) / sizeof(Struct_PinMap)) {
    if (Mode)*DigitalPinMap[Pin].DDR |= 1 << DigitalPinMap[Pin].BITSHIFTH;
    else     *DigitalPinMap[Pin].DDR &= ~(1 << DigitalPinMap[Pin].BITSHIFTH);
  }
}

static inline __attribute__((always_inline)) uint8_t FastDigitalRead(uint8_t Pin) {
  if (__builtin_constant_p(Pin) && Pin < DigitalPinMap)return (*DigitalPinMap[Pin].PIN >> DigitalPinMap[Pin].BITSHIFTH) & 1;
}

static inline __attribute__((always_inline)) void FastDigitalWrite(uint8_t Pin, uint8_t Value) {
  if (__builtin_constant_p(Pin) && Pin < sizeof(DigitalPinMap) / sizeof(Struct_PinMap)) {
    if (Value)*DigitalPinMap[Pin].PORT |= 1 << DigitalPinMap[Pin].BITSHIFTH;
    else      *DigitalPinMap[Pin].PORT &= ~(1 << DigitalPinMap[Pin].BITSHIFTH);
  }
}
#endif
