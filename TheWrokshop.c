

// initalisation du LCD

sbit LCD_RS at RC4_bit;
sbit LCD_EN at RC5_bit;
sbit LCD_D7 at RC3_bit;
sbit LCD_D6 at RC2_bit;
sbit LCD_D5 at RC1_bit;
sbit LCD_D4 at RC0_bit;

// Pin direction
sbit LCD_RS_Direction at TRISC4_bit;
sbit LCD_EN_Direction at TRISC5_bit;
sbit LCD_D7_Direction at TRISC3_bit;
sbit LCD_D6_Direction at TRISC2_bit;
sbit LCD_D5_Direction at TRISC1_bit;
sbit LCD_D4_Direction at TRISC0_bit;

void main() {
portd.rd0 = 0 ; // initialisation du pin RD0 comme sortie ( buzzer )
porta.ra1 = 1 ; // initialisation du pin RA1 comme entree  ( LM35 )
portb.rb0 = 1 ; // initialisation du pin RB0 comme entree ( capteur du flamme )
portb.rb7 = 1 ; // initialisation du pin RB7 comme entree ( capteur du fuite du gaz )
portd.rd1 = 1 ; // initialisation du pin RD1 comme sortie pour LA BROCHE - DU MOTEUR
portd.rd2 = 1 ; // initialisation de pin RD2  comme sortie pour lA BROCHE + DU MOTEUR
portb.rb5 = 0 ; // initialisation du led rouge pour le capteur du flamme
portb.rb6 = 0 ; // initialisation du led vert pour le capteur du gaz

   Lcd_Init();
     while(1)
 {
   lcd_cmd(_lcd_cursor_off);
   lcd_out(1,4,"Bienvenue");
   lcd_out(2,6,"Syteme du securite feu et gaz dans un laboratoire ");
   delay_ms(1500);
   lcd_cmd(_LCD_CLEAR);
   delay_ms(1500);
}                                                                 
}