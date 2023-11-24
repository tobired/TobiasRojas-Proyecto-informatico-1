int rojo = 6;
int azul = 5;
int verde = 3;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  for ( rojo=0; rojo<=225; rojo++)
  {
    analogWrite( rojo , 6 );
  }
    for ( azul=0; azul<=225; azul++)
    {
      analogWrite( azul , 5 );
    }
      for ( verde=0; verde<=225; verde++)
      {
        analogWrite( verde, 3);
      }
  

}