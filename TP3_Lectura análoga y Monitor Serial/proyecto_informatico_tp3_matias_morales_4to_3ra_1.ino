#define POT A5
#define POT1 A4
#define POT2 A3
int vr = 0;
int vg = 0;
int vb = 0;
int s = 0;
int r = 0;
int b = 0;
int g = 0;
int estado;

void setup()
{
    
    pinMode( POT  , INPUT);
    pinMode( POT1 , INPUT);
    pinMode( POT2 , INPUT);
    pinMode( 8    , INPUT); 
    
    pinMode( 3 , OUTPUT );
    pinMode( 5 , OUTPUT );
    pinMode( 6 , OUTPUT );
    Serial.begin(9600);

}

void loop()
{
      estado = digitalRead( 8 );
      if ( estado == LOW )
      {
        
        Serial.println( "Tiene 10 s para configurar el color del led..." );
        delay(10000);
        
        vr = analogRead( POT ); //lee el valor que se necesita para el color rojo
        r = map ( vr , 0 , 1023 , 0 , 255 ); //covierte de 0 - 1023 a 0 - 255
        digitalWrite( 3 , r ); //escribe el valor que se necesita para el color rojo en el pin 3

        vg = analogRead( POT1 );
        g = map ( vg , 0 , 1023 , 0 , 255 );
        digitalWrite( 6 , g );

        vb = analogRead( POT2 );
        b = map ( vb , 0 , 1023 , 0 , 255 );
        digitalWrite ( 5 , b );
        Serial.print( "El led esta usando esta configuración de colores RGB: ( ");
        Serial.print( r );
        Serial.print( "; " );
        Serial.print( g );
        Serial.print( "; " );
        Serial.print( b );
        Serial.print( " )\n" );
        delay(2000);   
      }

}