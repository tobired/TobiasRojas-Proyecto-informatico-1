int r = 0;
int b = 0;
int g = 0;

void setup()
{
    pinMode( 2 , OUTPUT );
    pinMode( 3 , OUTPUT );
    pinMode( 4 , OUTPUT );
    Serial.begin(9600);
}

void loop()
{
    for ( r=0; r <= 255; r++ )// recorro todos los valores del rojo
    {
        digitalWrite( 2 , r );
      
        for ( g=0; g <= 255; g++ )// combina todos los valores del verde con todos los del rojo
        {
           digitalWrite( 4 , g ); 
       
           for ( b=0; b <= 255; b++ )// toma los valores del rojo y el verde y los combina con el azul
           {  
              digitalWrite( 3 , b );
           }       
        } 
     }

}