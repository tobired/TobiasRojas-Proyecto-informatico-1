#include <LiquidCrystal.h>

#define TMP A5
#define FOTO A4
#define BOT 8
bool boton_apretado = false;
LiquidCrystal lcd( 2 , 3 , 4 , 5 , 6 , 7 );

void setup()
{
    pinMode( TMP  , INPUT );
    pinMode( FOTO , INPUT );
    pinMode( BOT  , INPUT );	
    Serial.begin(9600);

    lcd.begin(16,2);
}

void loop()
{    
    float temp = ( ( 5.0 / 1024 * analogRead( TMP ) ) * 100 - 50 );
    int lectura = analogRead( FOTO );
    int luz = map( lectura ,  2  , 414 ,    0   , 100 );
    Serial.println( boton_apretado );
    if (digitalRead(BOT) == LOW) 
    {
      boton_apretado = !boton_apretado;
    }
    if ( boton_apretado == true ) 
    {
      lcd.setCursor(0,0);
      lcd.print("Temperatura: ");
      lcd.setCursor(0,1);
      lcd.print(temp);
      lcd.setCursor(5,1);
      lcd.print(" oC");
      delay(500);
      lcd.clear();
    }
    else if ( boton_apretado == false )
    {
      lcd.setCursor(0,0);
      lcd.print("Nivel de luz: ");
      lcd.setCursor(0,1);
      lcd.print(luz);
      lcd.setCursor(5,1);
      delay(500);
      lcd.clear();
    }

}