#define POT A5
int v = 0;
int b = 0;
void setup()
{
    pinMode( 1 , OUTPUT );
    pinMode( 2 , OUTPUT );
    pinMode( 3 , OUTPUT );
  
    pinMode( 4 , OUTPUT );
    pinMode( 5 , OUTPUT );
    pinMode( 6 , OUTPUT );
  
    pinMode( 7 , OUTPUT );
    pinMode( 8 , OUTPUT );
    pinMode( 9 , OUTPUT );
  
    pinMode( POT , INPUT );
    pinMode( 10  , INPUT );
  
}

void loop()
{
    b = digitalRead( 10 );
    if ( b== HIGH ) 
    {
      v = analogRead( POT );

      delay(v);
      digitalWrite( 1 , HIGH ); //ROJO
      digitalWrite( 2 , LOW  );
      digitalWrite( 3 , LOW  );
      delay(v);
      digitalWrite( 1 , LOW  );
      digitalWrite( 2 , LOW  );
      digitalWrite( 3 , LOW  );
      delay(v); 
      digitalWrite( 4 , HIGH ); //MAGNETA
      digitalWrite( 5 , HIGH );
      digitalWrite( 6 , LOW  );
      delay(v); 
      digitalWrite( 4 , LOW  ); 
      digitalWrite( 5 , LOW  );
      digitalWrite( 6 , LOW  );
      delay(v); 
      digitalWrite( 7 , LOW  ); //CIAN
      digitalWrite( 8 , HIGH );
      digitalWrite( 9 , HIGH );
      delay(v); 
      digitalWrite( 7 , LOW  ); 
      digitalWrite( 8 , LOW  );
      digitalWrite( 9 , LOW  );
     }
}
  