/*Library to convert ASCII chars to Morse Code
 * 
 */

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"


class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void letterPause();
    void wordPause();
    void messagePause();
    String morseEncode(String letter);
    String morseDecode(String coded);
    String encodeString(String word);
    String decodeString(String encodedWord);

  private:
    int _pin;
};

#endif
