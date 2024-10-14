#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define endereco  0x3F 
#define colunas   16
#define linhas    2

LiquidCrystal_I2C lcd(endereco, colunas, linhas);

int botao = 0;
int poten1 = 0;
int poten2 = 0;
int digitalInput=0;
float LED1 = 0;
float LED2 = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  lcd.init(); // INICIA A COMUNICAÇÃO COM O DISPLAY
  lcd.backlight(); // LIGA A ILUMINAÇÃO DO DISPLAY
  lcd.clear(); // LIMPA O DISPLAY
}

void loop()
{
  poten1 = analogRead(A0);
  poten2 = analogRead(A1);
  botao = digitalRead(9);
  

  
  if (poten1 == 509 && poten2 == 515 && botao == LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("CENTRO");
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if (poten1 == 509 && poten2 == 515 && botao == HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("CENTRO");
    lcd.setCursor(0,1);
    lcd.print("BOTAO PRESS");
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 > 509 && poten2 > 515 && botao == LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("Para cima e");
    lcd.setCursor(0,1);
    lcd.print("Para direita");
    Serial.println("Para cima e para direita");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 > 509 && poten2 < 515 && botao == LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("Para cima e");
    lcd.setCursor(0,1);
    lcd.print("Para esquerda");
    Serial.println("Para cima e para esquerda");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 < 509 && poten2 < 515 && botao == LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("Para baixo e");
    lcd.setCursor(0,1);
    lcd.print("Para esquerda");
    Serial.println("Para baixo e para esquerda");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 < 509 && poten2 > 515 && botao == LOW)
  {
    lcd.setCursor(0,0);
    lcd.print("Para baixo e");
    lcd.setCursor(0,1);
    lcd.print("Para direita");
    Serial.println("Para baixo e para direita");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 > 509 && poten2 > 515 && botao == HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("Botao Para cima e");
    lcd.setCursor(0,1);
    lcd.print("Para direita");
    Serial.println("Para cima e para direita");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 > 509 && poten2 < 515 && botao == HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("Botao Para cima e");
    lcd.setCursor(0,1);
    lcd.print("para esquerda");
    Serial.println("Para cima e para esquerda");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 < 509 && poten2 < 515 && botao == HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("Botao Para baixo e");
    lcd.setCursor(0,1);
    lcd.print("para esquerda");
    Serial.println("Para baixo e para esquerda");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  else if(poten1 < 509 && poten2 > 515 && botao == HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("Botao Para baixo e");
    lcd.setCursor(0,1);
    lcd.print("Para direita");
    Serial.println("Para baixo e para direita");
    delay(500);
    lcd.clear();
    LED1 = poten1/4.01567;
    LED2 = poten2/4.01567;
    analogWrite(10, LED1);
    analogWrite(11, LED2);
  }
  
}