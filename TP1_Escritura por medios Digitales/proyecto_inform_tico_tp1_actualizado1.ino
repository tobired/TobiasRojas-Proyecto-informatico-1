
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
}

void loop()
{
    delay(1000);
    digitalWrite( 1 , HIGH ); //ROJO
    digitalWrite( 2 , LOW  );
    digitalWrite( 3 , LOW  );
    delay(1000);
    digitalWrite( 1 , LOW  );
    digitalWrite( 2 , LOW  );
    digitalWrite( 3 , LOW  );
    delay(1000); 
    digitalWrite( 4 , HIGH ); //MAGNETA
    digitalWrite( 5 , HIGH );
    digitalWrite( 6 , LOW  );
    delay(1000); 
    digitalWrite( 4 , LOW  ); 
    digitalWrite( 5 , LOW  );
    digitalWrite( 6 , LOW  );
    delay(1000); 
    digitalWrite( 7 , LOW  ); //CIAN
    digitalWrite( 8 , HIGH );
    digitalWrite( 9 , HIGH );
    delay(1000); 
    digitalWrite( 7 , LOW  ); 
    digitalWrite( 8 , LOW  );
    digitalWrite( 9 , LOW  );
}