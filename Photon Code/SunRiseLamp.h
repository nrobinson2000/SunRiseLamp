#ifndef SunRiseLamp_h
#define SunRiseLamp_h

#include "application.h"
#include "neopixel/neopixel.h"


//Delecare the hex values in int format
const unsigned int colors[] =
{
    0x000000,
    0x030102,
    0x080403,
    0x0C0704,
    0x120A07,
    0x170C08,
    0x1E0F0A,
    0x25140D,
    0x2B1710,
    0x311A12,
    0x3A1E13,
    0x422217,
    0x482718,
    0x502B1B,
    0x592E1E,
    0x603222,
    0x663622,
    0x6C3924,
    0x733C27,
    0x784029,
    0x80442C,
    0x85472E,
    0x8C4A30,
    0x904D32,
    0x965134,
    0x9B5436,
    0xA15637,
    0xA55A3B,
    0xAA5E3E,
    0xAF603F,
    0xB36340,
    0xB66643,
    0xBA6843,
    0xBD6B46,
    0xBE6C46,
    0xC06E48,
    0xC26E49,
    0xC4704B,
    0xC6734B,
    0xC8754D,
    0xC9764C,
    0xCA774D,
    0xCB784E,
    0xCD7A50,
    0xCE7D52,
    0xCF7E51,
    0xD07F52,
    0xD28154,
    0xD38255,
    0xD48356,
    0xD68558,
    0xD58759,
    0xD7895B,
    0xD88A5A,
    0xD88C5B,
    0xD98D5C,
    0xDA8E5D,
    0xD98F5E,
    0xDB9160,
    0xDB9361,
    0xDC9462,
    0xDD9563,
    0xDD9764,
    0xDE9865,
    0xDF9966,
    0xDE9B67,
    0xDF9C68,
    0xDF9D69,
    0xE09E6A,
    0xDFA06B,
    0xE1A26D,
    0xE0A36D,
    0xE1A46E,
    0xE1A56F,
    0xE2A670,
    0xE3A771,
    0xE1A871,
    0xE3AA73,
    0xE3AC74,
    0xE4AD75,
    0xE3AF76,
    0xE3AF76,
    0xE3B077,
    0xE4B178,
    0xE4B178,
    0xE4B379,
    0xE5B47A,
    0xE3B57A,
    0xE5B67E,
    0xE6B77F,
    0xE6B77F,
    0xE6B980,
    0xE7BA81,
    0xE5BB81,
    0xE5BA83,
    0xE6BB84,
    0xE5BC84,
    0xE6BD85,
    0xE6BD85,
    0xE6BF86,
    0xE6BF86,
    0xE7C089,
    0xE5C089,
    0xE6C18A,
    0xE6C18A,
    0xE6C18A,
    0xE6C38B,
    0xE6C38D,
    0xE7C48E,
    0xE5C48E,
    0xE6C58F,
    0xE6C590,
    0xE6C590,
    0xE6C791,
    0xE6C791,
    0xE6C693,
    0xE5C793,
    0xE6C894,
    0xE7C995,
    0xE7C995,
    0xE7C997,
    0xE5C997,
    0xE6CA98,
    0xE6CA9A,
    0xE6CA9A,
    0xE5CB9A,
    0xE6CC9B,
    0xE6CB9C,
    0xE6CB9C,
    0xE6CB9C,
    0xE7CC9D,
    0xE5CD9F,
    0xE5CD9F,
    0xE5CD9F,
    0xE5CDA1,
    0xE5CDA1,
    0xE6CEA2,
    0xE6CEA2,
    0xE5CEA4,
    0xE6CFA5,
    0xE6CFA5,
    0xE5CFA6,
    0xE5CFA6,
    0xE5CFA6,
    0xE5CFA8,
    0xE3D0A8,
    0xE3D0A8,
    0xE3D0A8,
    0xE2D0AA,
    0xE3D1AB,
    0xE3D1AD,
    0xE3D1AD,
    0xE1D1AD,
    0xE0D0AC,
    0xE1D1AF,
    0xE0D2AF,
    0xE0D2AF,
    0xE0D1B0,
    0xDFD2B0,
    0xDFD2B0,
    0xDFD2B0,
    0xDFD2B2,
    0xDDD2B2,
    0xDDD2B2,
    0xDDD2B4,
    0xDDD2B4,
    0xDBD2B3,
    0xDBD2B5,
    0xDBD2B5,
    0xDBD2B5,
    0xD9D2B6,
    0xD9D2B6,
    0xD9D2B6,
    0xD8D3B6,
    0xD8D2B8,
    0xD8D2B8,
    0xD6D2B7,
    0xD6D2B9,
    0xD6D2B9,
    0xD4D2B9,
    0xD4D2B9,
    0xD4D2BB,
    0xD2D2BA,
    0xD2D2BA,
    0xD2D1BC,
    0xD0D2BC,
    0xD0D2BC,
    0xD0D2BC,
    0xCFD2BD,
    0xCED1BC,
    0xCED1BC,
    0xCDD2BC,
    0xCDD2BE,
    0xCDD2BE,
    0xCBD3BE,
    0xCBD2C0,
    0xCAD1BF,
    0xC9D2BF,
    0xC9D2C1,
    0xC9D2C1,
    0xC6D1C0,
    0xC7D2C1,
    0xC5D2C0,
    0xC5D2C1,
    0xC5D2C1,
    0xC3D1C2,
    0xC4D2C3,
    0xC3D1C4,
    0xC1D1C4,
    0xC1D1C4,
    0xC0D0C3,
    0xBFD1C5,
    0xBFD1C5,
    0xBED0C4,
    0xBCD0C5,
    0xBCD0C5,
    0xBCD0C5,
    0xBBD0C7,
    0xBACFC6,
    0xB9D0C6,
    0xB8CFC5,
    0xB9D0C8,
    0xB6D0C7,
    0xB6D0C7,
    0xB5CEC8,
    0xB4CFC8,
    0xB4CFC8,
    0xB2CFCA,
    0xB1CEC9,
    0xB1CEC9,
    0xB0CFC9,
    0xAFCEC9,
    0xAECEC9,
    0xAECEC9,
    0xAECEC9,
    0xADCDCA,
    0xABCECA,
    0xABCDCC,
    0xA9CDCB,
    0xA9CDCB,
    0xA7CECB,
    0xA5CDCC,
    0xA5CDCC,
    0xA3CDCB,
    0xA1CDCC,
    0xA1CDCC,
    0x9FCDCD,
    0x9FCDCD,
    0x9DCDCD,
    0x9CCCCE,
    0x9ACCCD,
    0x98CBCC,
    0x98CBCE,
    0x95CBCD,
    0x94CBCE,
    0x94CBCE,
    0x91CBCD,
    0x90CBCF,
    0x8FCACE,
    0x8ECBCE,
    0x8BCACF,
    0x8BCACF,
    0x89CACE,
    0x87CAD0,
    0x86C9CF,
    0x85CACF,
    0x84C9D0,
    0x82C9CF,
    0x80C9D0,
    0x80C9D0,
    0x7EC9CF,
    0x7EC9CF,
    0x7BC8D0,
    0x7AC9D0,
    0x79C8CF,
    0x78C8D1,
    0x76C9D1,
    0x75C8D0,
    0x74C9D0,
    0x73C7D1,
    0x71C8D1,
    0x71C8D1,
    0x6FC8D0,
    0x6EC6D0,
    0x6EC6D0,
    0x6DC7D0,
    0x6CC6D1,
    0x6AC6D1,
    0x6AC6D1,
    0x68C6D0,
    0x68C6D0,
    0x68C6D0,
    0x66C7D0,
    0x66C6D2,
    0x65C5D1,
    0x64C6D1,
    0x65C5D1,
    0x65C5D1,
    0x65C5D1,
    0x65C5D1,
};

union colorValues {
    unsigned int hexValue;
    byte ledValue[4];
};

//Create a class called SunRiseLamp were we can call it funtions from the ino file 
//Also Create private varibals that can not be called from .ino file.
class SunRiseLamp {
public:
    SunRiseLamp() {};
    void begin(int totalTime, int pixelCount, int pixelPin, int pixelType);	// total time for sunrise
    bool update();
    void rise();
    void set();
    
private:
    Adafruit_NeoPixel* pixelStringPtr = NULL;
    int colorInterval;
    int lastUpdate;
    int colorIndex = 0;
    int direction = 0;
    int _pixelCount;
    int _pixelPin;
    int _pixelType;
};

#endif