void setup()
{
  pinMode( 1 , OUTPUT );
  pinMode( 2 , OUTPUT );
  pinMode( 3 , OUTPUT );
  pinMode( 4 , INPUT );
  pinMode( 6 , OUTPUT);
  pinMode( 5 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 10 , OUTPUT );
  pinMode( 11 , OUTPUT );
}

void loop()
{
     if( digitalRead( 4 ) == LOW )
   {
      analogWrite( 9 , 0 );
	  analogWrite( 10 , 0 );
  	  analogWrite( 11 , 0 );
  
	  analogWrite( 3 , 0 );
	  analogWrite( 6 , 255 );
 	  analogWrite( 5 , 0 );
  
	  delay( 2000 );
  
	  analogWrite( 3 , 0 );
	  analogWrite( 6 , 0 );
	  analogWrite( 5 , 0 );
  
	  digitalWrite( 1 , HIGH );
 	  digitalWrite( 2 , HIGH );
  
	  delay( 2000 );
  
	  digitalWrite( 1 , LOW );
	  digitalWrite( 2 , LOW );
  
	  analogWrite( 9 , 255 );
	  analogWrite( 10 , 255 );
	  analogWrite( 11 , 153 );
  
	  delay( 2000 );
     }else{
       if( digitalRead( 4 ) == HIGH )
       {
        
         analogWrite( 3 , 0 );
	  	 analogWrite( 6 , 0 );
	  	 analogWrite( 5 , 0 );
  
	     digitalWrite( 1 , LOW );
 	     digitalWrite( 2 , LOW );
       
     	 analogWrite( 9 , 0 );
	 	 analogWrite( 10 , 0 );
	 	 analogWrite( 11 , 0 );
       }
        }

     
}