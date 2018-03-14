/*
  Library for flashing Morse Code
 */

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Morse::dot(){
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(1000);
}

void Morse::dash(){
  digitalWrite(_pin,HIGH);
  delay(3000);
  digitalWrite(_pin,LOW);
  delay(1000);
}

void Morse::letterPause(){
  digitalWrite(_pin,LOW);
  delay(3000);
}

void Morse::wordPause(){
  digitalWrite(_pin,LOW);
  delay(7000);
}

void Morse::messagePause(){
  digitalWrite(_pin,LOW);
  delay(30000);
}

String Morse::encodeString(String word){
  String encodedString = "";
  for(int i=0;i<word.length();i++){
    encodedString += morseEncode(String(word[i]));
  }
  return encodedString;
}

String Morse::decodeString(String encodedWord){
  String dencodedString = "";
  String encodedLet = "";
  for(int i=0;i<encodedWord.length();i++){
    if(String(encodedWord[i]) == " "){
      dencodedString += morseDecode(encodedLet);
      encodedLet = "";
    }
    else if(String(encodedWord[i]) == "/"){
      dencodedString += morseDecode(encodedLet);
      dencodedString += " ";
      encodedLet ="";
    }
    else if((i+1) == encodedWord.length()){
      encodedLet += encodedWord[i];
      dencodedString += morseDecode(encodedLet);
    }
    else{
      encodedLet += encodedWord[i];
    }
  }
  return dencodedString;
}



String Morse::morseEncode(String letter){
  //Take a Letter character and encode it in morse
  // Using a character array
  String sentCode="";
  if(letter == "A"){
    sentCode=".-";
    return sentCode;
  }
  else if(letter == "B"){
    sentCode="-...";
    return sentCode;
  } 
  else if(letter == "C"){
    sentCode="-.-.";
    return sentCode;
  }
  else if(letter == "D"){
    sentCode="-..";
    return sentCode;
  } 
  else if(letter == "E"){
    sentCode=".";
    return sentCode;
  }
  else if(letter == "F"){
    sentCode="..-.";
    return sentCode;
  }       
  else if(letter == "G"){
    sentCode="--.";
    return sentCode;
  }
  else if(letter == "H"){
    sentCode="....";
    return sentCode;
  }    
  else if(letter == "I"){
    sentCode="..";
    return sentCode;
  }    
  else if(letter == "J"){
    sentCode=".---";
    return sentCode;
  }
  else if(letter == "K"){
    sentCode="-.-";
    return sentCode;
  }    
  else if(letter == "L"){
    sentCode=".-..";
    return sentCode;
  }    
  else if(letter == "M"){
    sentCode="--";
    return sentCode;
  }
  else if(letter == "N"){
    sentCode="-.";
    return sentCode;
  }    
  else if(letter == "O"){
    sentCode="---";
    return sentCode;
  }
  else if(letter == "P"){
    sentCode=".--.";
    return sentCode;
  }
  else if(letter == "Q"){
    sentCode="--.-";
    return sentCode;
  }          
  else if(letter == "R"){
    sentCode=".-.";
    return sentCode;
  }
  else if(letter == "S") {   
    sentCode="...";
    return sentCode;
  }
  else if(letter == "T"){
    sentCode="-";
    return sentCode;
  }
  else if(letter == "U"){
    sentCode="..-";
    return sentCode;
  }    
  else if(letter == "V"){
    sentCode="...-";
    return sentCode;
  }
  else if(letter == "W"){
    sentCode=".--";
    return sentCode;
  }
  else if(letter == "X"){
    sentCode="-..-";
    return sentCode;
  }    
  else if(letter == "Y"){
    sentCode="-.--";
    return sentCode;
  }    
  else if(letter == "Z"){
    sentCode="--..";
    return sentCode;
  }
  if(letter == "a"){
    sentCode=".-";
    return sentCode;
  }
  else if(letter == "b"){
    sentCode="-...";
    return sentCode;
  } 
  else if(letter == "c"){
    sentCode="-.-.";
    return sentCode;
  }
  else if(letter == "d"){
    sentCode="-..";
    return sentCode;
  } 
  else if(letter == "e"){
    sentCode=".";
    return sentCode;
  }
  else if(letter == "f"){
    sentCode="..-.";
    return sentCode;
  }       
  else if(letter == "g"){
    sentCode="--.";
    return sentCode;
  }
  else if(letter == "h"){
    sentCode="....";
    return sentCode;
  }    
  else if(letter == "i"){
    sentCode="..";
    return sentCode;
  }    
  else if(letter == "j"){
    sentCode=".---";
    return sentCode;
  }
  else if(letter == "k"){
    sentCode="-.-";
    return sentCode;
  }    
  else if(letter == "l"){
    sentCode=".-..";
    return sentCode;
  }    
  else if(letter == "m"){
    sentCode="--";
    return sentCode;
  }
  else if(letter == "n"){
    sentCode="-.";
    return sentCode;
  }    
  else if(letter == "o"){
    sentCode="---";
    return sentCode;
  }
  else if(letter == "p"){
    sentCode=".--.";
    return sentCode;
  }
  else if(letter == "q"){
    sentCode="--.-";
    return sentCode;
  }          
  else if(letter == "r"){
    sentCode=".-.";
    return sentCode;
  }
  else if(letter == "s") {   
    sentCode="...";
    return sentCode;
  }
  else if(letter == "t"){
    sentCode="-";
    return sentCode;
  }
  else if(letter == "u"){
    sentCode="..-";
    return sentCode;
  }    
  else if(letter == "v"){
    sentCode="...-";
    return sentCode;
  }
  else if(letter == "w"){
    sentCode=".--";
    return sentCode;
  }
  else if(letter == "x"){
    sentCode="-..-";
    return sentCode;
  }    
  else if(letter == "y"){
    sentCode="-.--";
    return sentCode;
  }    
  else if(letter == "z"){
    sentCode="--..";
    return sentCode;
  }
  else if(letter == "1"){
    sentCode=".----";
    return sentCode;
  } 
  else if(letter == "2"){
    sentCode="..---";
    return sentCode;
  }
  else if(letter == "3"){
    sentCode="...--";
    return sentCode;
  }
  else if(letter == "4"){
    sentCode="....-";
    return sentCode;
  }
  else if(letter == "5"){
    sentCode=".....";
    return sentCode;
  }
  else if(letter == "6"){
    sentCode="-....";
    return sentCode;
  }
  else if(letter == "7"){
    sentCode="--...";
    return sentCode;
  }
  else if(letter == "8"){
    sentCode="---..";
    return sentCode;
  }    
  else if(letter == "9"){
    sentCode="----.";
    return sentCode;
  }
  else if(letter == "0"){
    sentCode="-----";
    return sentCode;
  }
  else if(letter == " "){
    sentCode="/";
    return sentCode;
  }
}

String Morse::morseDecode(String coded){
    String decodedMorse = "";
    if(coded == ".-"){
      decodedMorse='A';
      return decodedMorse;}
    else if(coded == "-..."){
      decodedMorse='B';
      return decodedMorse;}
    else if(coded == "-.-."){
      decodedMorse='C';
      return decodedMorse;}
    else if(coded == "-.."){
      decodedMorse='D';
      return decodedMorse;}
    else if(coded == "."){
      decodedMorse='E';
      return decodedMorse;}
    else if(coded == "..-."){
      decodedMorse='F';
      return decodedMorse;}
    else if(coded == "--."){
      decodedMorse='G';
      return decodedMorse;}
    else if(coded == "...."){ 
      decodedMorse= 'H';
      return decodedMorse;}
    else if(coded == ".."){
      decodedMorse='I';
      return decodedMorse;}
    else if(coded == ".---"){
      decodedMorse='J';
      return decodedMorse;}
    else if(coded == "-.-"){
      decodedMorse='K';
      return decodedMorse;}
    else if(coded == ".-.."){
      decodedMorse='L';
      return decodedMorse;}
    else if(coded == "--"){
      decodedMorse='M';
      return decodedMorse;}
    else if(coded == "-."){
      decodedMorse='N';
      return decodedMorse;}
    else if(coded == "---"){
      decodedMorse='O';
      return decodedMorse;}
    else if(coded == ".--."){
      decodedMorse='P';
      return decodedMorse;}
    else if(coded == "--.-"){
      decodedMorse='Q';
      return decodedMorse;}
    else if(coded == ".-."){
      decodedMorse='R';
      return decodedMorse;}
    else if(coded == "..."){
      decodedMorse='S';
      return decodedMorse;}
    else if(coded == "-"){
      decodedMorse='T';
      return decodedMorse;}
    else if(coded == "..-"){ 
      decodedMorse='U';
      return decodedMorse;}
    else if(coded == "...-"){
      decodedMorse='V';
      return decodedMorse;}
    else if(coded == ".--"){
      decodedMorse='W';
      return decodedMorse;}
    else if(coded == "-..-"){
      decodedMorse='X';
      return decodedMorse;}
    else if(coded == "-.--"){
      decodedMorse='Y';
      return decodedMorse;}
    else if(coded == "--.."){
      decodedMorse='Z';
      return decodedMorse;}
    else if(coded == "/"){
      decodedMorse = " ";
      return decodedMorse;
    }
    else{
      return decodedMorse;
    }
}