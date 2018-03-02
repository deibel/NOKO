// Serial Writer - Nikolai Radke
// Writes file "Disc1" with a delay of 5ms for each char to 
// specified destination
//
// Compile with "gcc write_Disc1.c" 
// Rename with "mv a.out write_Disc1"
// Set write_Disc1 with "chmod 755 write_Disc1" to be executeable
// Use with "./write_Disc1 > /dev/ttyUSBX (X=used USB port, see
// port number in Arduino IDE

#include <stdio.h>

int main()
{
   int c;
   FILE *datei;
   usleep(5000000);	
   datei=fopen("Disc1","r");
   if(datei != NULL)
      {
         while((c=fgetc(datei))!= EOF)
		 {
            putchar(c);
			fflush(stdout);
			usleep(50000);
		 }	
      }
   else
      printf("ERROR: Could not find or open file\n");
 return 0;
}
