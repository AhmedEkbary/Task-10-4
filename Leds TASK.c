


#include <avr/io.h>
#define Button2 2
#define Button0 0
#define Button1 4
#define LED2 3
#define LED1 7
#define LED0 2
int isPressedA(int pinNum);
int isPressedB(int pinNum);
int isPressedC(int pinNum);
int isPressedD(int pinNum);

void setPinA(int pinNum);
void setPinB(int pinNum);
void setPinC(int pinNum);
void setPinD(int pinNum);

void resetPinA(int pinNum);
void resetPinB(int pinNum);
void resetPinC(int pinNum);
void resetPinD(int pinNum);

int main(void) {
        
    DDRD |= (1<<LED2);
    DDRC |= (1<<LED0);
    DDRC |= (1<<LED1);
    DDRD &= ~(1<<Button2);
    DDRB &= ~(1<<Button0);
    DDRB &= ~(1<<Button1);
    while (1) {
        
        if(isPressedD(Button2)){
            setPinD(LED2);
        }
        else{
            resetPinD(LED2);
        }
        
        if(isPressedB(Button1)){
            setPinC(LED1);
        }
        else{
            resetPinC(LED1);
        }
        
        if(isPressedB(Button0)){
            setPinC(LED0);
        }
        else{
            resetPinC(LED0);
        }
        
    }
}
int isPressedA(int pinNum){

  if(PINA & (1<<pinNum))  {
  
      return 1;
  
  }
  else{
      return 0;
  }

}
int isPressedB(int pinNum){

  if(PINB & (1<<pinNum))  {
  
      return 1;
  
  }
  else{
      return 0;
  }

}

int isPressedC(int pinNum){

  if(PINC & (1<<pinNum))  {
  
      return 1;
  
  }
  else{
      return 0;
  }

}
int isPressedD(int pinNum){

  if(PIND & (1<<pinNum))  {
  
      return 1;
  
  }
  else{
      return 0;
  }

}

void setPinA(int pinNum){
 
    PORTA |= (1<<pinNum);
    
}

void setPinB(int pinNum){
 
    PORTB |= (1<<pinNum);
    
}

void setPinC(int pinNum){
 
    PORTC |= (1<<pinNum);
    
}

void setPinD(int pinNum){
 
    PORTD |= (1<<pinNum);
    
}



void resetPinA(int pinNum){
 
    PORTA &= ~(1<<pinNum);
    
}

void resetPinB(int pinNum){
 
    PORTB &= ~(1<<pinNum);
    
}

void resetPinC(int pinNum){
 
    PORTC &= ~(1<<pinNum);
    
}

void resetPinD(int pinNum){
 
    PORTD &= ~(1<<pinNum);
    
}