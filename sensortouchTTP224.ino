int tecla1 = 0;
int tecla2 = 0;
int tecla3 = 0;
int tecla4 = 0;

void setup() {

  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
 
 tecla1 = digitalRead(1); 
 tecla2 = digitalRead(2); 
 tecla3 = digitalRead(3); 
 tecla4 = digitalRead(4);

 if(tecla1)
 {
  digitalWrite(8, HIGH);
 }
 else 
 {
  digitalWrite(8, LOW);
 }

if(tecla2)
 {
  digitalWrite(9, HIGH);
 }
 else 
 {
  digitalWrite(9, LOW);
 }
if(tecla3)
 {
  digitalWrite(10, HIGH);
 }
 else 
 {
  digitalWrite(10, LOW);
 }
if(tecla4)
 {
  digitalWrite(11, HIGH);
 }
 else 
 {
  digitalWrite(11, LOW);
 }
}

