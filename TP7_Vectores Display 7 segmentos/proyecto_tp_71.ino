#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8

int numero_1[7];
// OUTPUT es 1 & INPUT es 0

// HIGH es 0 & LOW es 1


               //  A   B   C   D   E   F   G  
int pines[]    = { A , B , C , D , E , F , G };
int pinmodes[] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 };

                   //  1   2    3    4
int pines_switch[] = { 9 , 10 , 11 , 12 };
int switch_modes[] = { 0 , 0  , 0  , 0  };

// instructivo: https://www.electronics-tutorials.ws/blog/7-segment-display-tutorial.html  

// todos tienen la informacion de como mostrar los simbolos en el display 
int todos[16][7] = { 
//A , B , C , D , E , F , G
{ 0 , 0 , 0 , 0 , 0 , 0 , 1 }, // num_0 - A , B , C , D , E , F
{ 1 , 0 , 0 , 1 , 1 , 1 , 1 }, // num_1 - A , B
{ 0 , 0 , 1 , 0 , 0 , 1 , 0 }, // num_2 - A , B , D , E , G
{ 0 , 0 , 0 , 0 , 1 , 1 , 0 }, // num_3 - A , B , C , D , G
{ 1 , 0 , 0 , 1 , 1 , 0 , 0 }, // num_4 - B , C , F , G
{ 0 , 1 , 0 , 0 , 1 , 0 , 0 }, // num_5 - A , C , D , F , G
{ 0 , 1 , 0 , 0 , 0 , 0 , 0 }, // num_6 - A , B , C , D , E
{ 0 , 0 , 0 , 1 , 1 , 1 , 1 }, // num_7 - A , B , C
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 }, // num_8 - A , B , C , D , E
{ 0 , 0 , 0 , 1 , 1 , 0 , 0 }, // num_9 - A , B , C , F , G
{ 0 , 0 , 0 , 1 , 0 , 0 , 0 }, // let_a - A , B , C , E , F
{ 0 , 1 , 1 , 0 , 0 , 0 , 1 }, // let_c - A , D , E , F
{ 1 , 0 , 0 , 0 , 0 , 1 , 0 }, // let_d - B , C , D , E , G
{ 0 , 1 , 1 , 0 , 0 , 0 , 0 }, // let_e - A , D , E , F , G
{ 0 , 1 , 1 , 1 , 0 , 0 , 0 }, // let_f - A , E , F , G
{ 1 , 0 , 0 , 1 , 0 , 0 , 0 }, // let_h - B , C , E , F , G
};


void setup()
{
   for ( int i=0; i < 7; i++ )
   {
       pinMode( pines[i] , pinmodes[i] );
   }
   
   for ( int s=0; s < 4; s++ )
   {
       pinMode( pines_switch[s] , switch_modes[s] );
   }
     
     
}

void loop()
{
    int sw[4]; // se guardan los 4 valores del switch 
    
    for ( int r=0; r < 4; r++ ) // recorre los 4 valores del switch 
    {
        sw[r] = digitalRead( pines_switch[r] );
    
    }
    
    // convierte los numeros binarios a decimales 
    int s = sw[0] * 8 + sw[1] * 4 + sw[2] * 2 + sw[3] * 1 ;
    
    for(int pin=0; pin < 7; pin++) {
       // busca en todos el vector que esta en la posicion s y me dice como escribir en el display
       digitalWrite( pines[pin] , todos[s][pin] );
    }
    delay(1000);
   
    
  
}