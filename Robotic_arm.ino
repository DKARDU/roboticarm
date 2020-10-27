#include <Servo.h>

Servo myservo1; 
Servo myservo2;
Servo myservo3;
Servo myservo4;


int base = 15;    
int left = 100;
int right = 120;
int pliers = 180;
void setup() {
  
  myservo1.attach(6);
  myservo2.attach(9);  
  myservo3.attach(10);
  myservo4.attach(11);
}

void loop() {
 for (base = 15; base <= 90; base += 1) {     
    myservo1.write(base);             
    delay(15);                      
  }
  delay(500);

   for (left = 100; left <= 165; left += 1) { 
    myservo2.write(left);              
    delay(15);                      
  }
  delay(500);

   for (pliers = 145; pliers <= 180; pliers += 1) { 
    myservo4.write(pliers);            
    delay(15);                       
  }
  delay(500); 


  for (right = 120; right <= 180; right += 1) { 
    myservo3.write(right);          
    delay(15);                      
  }
  delay(500);

    for (pliers = 180; pliers >=145 ; pliers -= 1) { 
    myservo4.write(pliers);             
    delay(15);                      
  }
  delay(500); 


  for (right = 180; right >= 120; right -= 1) { 
    myservo3.write(right);             
    delay(15);                     
  }
  delay(500);

   for (base = 90; base >= 15; base -= 1) {
    myservo1.write(base);           
    delay(15);                      
  }
  delay(500); 

  for (right = 120; right <= 180; right += 1) {
    myservo3.write(right);             
    delay(15);                     
  }
  delay(500);

for (pliers = 145; pliers <= 180; pliers += 1) { 
    myservo4.write(pliers);             
    delay(15);                    
  }
  delay(500); 


    for (right = 180; right >= 120; right -= 1) {
    myservo3.write(right);            
    delay(15);                      
  }
  delay(500);

    for (pliers = 180; pliers >=145 ; pliers -= 1) { 
    myservo4.write(pliers);             
    delay(15);                      
  }
  delay(500); 

   for (left = 165; left >= 100; left -= 1) { 
    myservo2.write(left);              
    delay(15);                     
  }
  delay(5000);


  
}
