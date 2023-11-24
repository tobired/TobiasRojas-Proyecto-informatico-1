#define TMP A5
#define FOTO A4

void setup()
{
    pinMode( TMP  , INPUT );
    pinMode( FOTO , INPUT);
    pinMode( 3 , OUTPUT );
    pinMode( 5 , OUTPUT );
    pinMode( 6 , OUTPUT );
    Serial.begin(9600);

}

void loop()
{
    
    float temp = ( ( 5.0 / 1024 * analogRead( TMP ) ) * 100 - 50 );
    int lectura = analogRead( FOTO );
    int val = map( lectura ,  2  , 414 ,    0   , 100 );
    if (val > 0)
    {
       delay(1000);
       digitalWrite( 3 , LOW );
       digitalWrite( 5 , LOW );
       digitalWrite( 6 , LOW );
       Serial.print("El nivel de luz actual es: ");
       Serial.println( val );
       Serial.print("la temperatura actual: ");
       Serial.print( temp );
       Serial.println( " c" );
    }
    else{
    delay(1000);
    Serial.print("El nivel de luz actual es: ");
    Serial.println( val );
    Serial.print("la temperatura actual: ");
    Serial.print( temp );
    Serial.println( " c" );
    if( temp <= 10 )
      {  
       digitalWrite( 3 , LOW );
       digitalWrite( 6 , LOW );
       digitalWrite( 5 , HIGH );  
      }else{ //IF-AZUL
          if( temp >= 34 )  
          {
            digitalWrite( 3 , HIGH );
            digitalWrite( 6 , LOW );
            digitalWrite( 5 , LOW );
          }else{ //IF-ROJO
            digitalWrite( 3 , LOW );
            digitalWrite( 6 , HIGH );
            digitalWrite( 5 , LOW ); 
          }// Fin-ELSE-ROJO
        }
      }
}