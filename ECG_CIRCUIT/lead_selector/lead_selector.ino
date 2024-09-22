int L1 = 2;
int L2 = 3;
int L3 = 4;
int aVR = 5;
int aVL = 6;
int aVF = 7;
int ENA = 8;
int V1 = A0;
int V2 = A1;
int V3 = A2;
int V4 = A3;
int V5 = A4;
int V6 = A5;


void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  pinMode(L1, INPUT);
  pinMode(L2, INPUT);
  pinMode(L3, INPUT);
  pinMode(aVR, INPUT);
  pinMode(aVL, INPUT);
  pinMode(aVF, INPUT);
  pinMode(V1, INPUT);
  pinMode(V2, INPUT);
  pinMode(V3, INPUT);
  pinMode(V4, INPUT);
  pinMode(V5, INPUT);
  pinMode(V6, INPUT);

  
    digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
}

void loop()
{
  
  while (digitalRead(L1) == HIGH) {
    digitalWrite(10, 0); // A
    digitalWrite(11, 0); // B
    digitalWrite(12, 0); // C
    digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 0); // ENA MUX 2
    digitalWrite(13, 0); // ENA MUX 3
 

    } 

  while (digitalRead(L2) == HIGH) {
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    digitalWrite(12, 0);  
    digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 0); // ENA MUX 2
    digitalWrite(13, 0); // ENA MUX 3
    } 


  while (digitalRead(L3) == HIGH) {
    digitalWrite(10, 0);
    digitalWrite(11, 1);
    digitalWrite(12, 0); 
     digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 0); // ENA MUX 2
    digitalWrite(13, 0); // ENA MUX 3
     } 
    

   while (digitalRead(aVR) == HIGH) {
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 0); 
     digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 0); // ENA MUX 2
    digitalWrite(13, 0); // ENA MUX 3
     } 


     while (digitalRead(aVL) == HIGH) {
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 1); 
     digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 0); // ENA MUX 2
    digitalWrite(13, 0); // ENA MUX 3
     } 


     while (digitalRead(aVF) == HIGH) {
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    digitalWrite(12, 1); 
     digitalWrite(8 , 1); // ENA MUX 1 
    digitalWrite(9 , 0); // ENA MUX 2
    digitalWrite(13, 0); // ENA MUX 3
     }   








 while (digitalRead(V1) == HIGH) {
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0); 
    digitalWrite(8 , 0); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
     }   
     
 while (digitalRead(V2) == HIGH) {
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    digitalWrite(12, 0); 
    digitalWrite(8 , 0); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
     }   
   while (digitalRead(V3) == HIGH) {
    digitalWrite(10, 0);
    digitalWrite(11, 1);
    digitalWrite(12, 0); 
    digitalWrite(8 , 0); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
     } 
     
     while (digitalRead(V4) == HIGH) {
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 0); 
   digitalWrite(8 , 0); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
     } 
     
    while (digitalRead(V5) == HIGH) {
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 1); 
    digitalWrite(8 , 0); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
     }   
     
     
    while (digitalRead(V6) == HIGH) {
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    digitalWrite(12, 1); 
    digitalWrite(8 , 0); // ENA MUX 1 
    digitalWrite(9 , 1); // ENA MUX 2
    digitalWrite(13, 1); // ENA MUX 3
     }   
}
