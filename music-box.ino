#include <Flash.h>
#include "pitches.h"

int size = 0;

int melody[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};


FLASH_TABLE(int, melodies, 170, 
    //1. Deck the Hall
    {NC5,NB4,NA4,NG4,NF4,NG4,NA4,NF4,NG4,NA4,NB4,NG4,NA4,NG4,NF4,NE4,NF4,NC5,NB4,NA4,NG4,NF4,NG4,NA4,NF4,NG4,NA4,NB4,NG4,NA4,NG4,NF4,NE4,NF4,NG4,NA4,NB4,NG4,NA4,NB4,NC5,NG4,NA4,NB4,NC5,ND5,NE5,NF5,NE5,ND5,NC5,NC5,NB4,NA4,NG4,NF4,NG4,NA4,NF4,ND5,ND5,ND5,ND5,NC5,NB4,NA4,NG4,NF4},
    {4,8,4,4,4,4,4,4,8,8,8,8,4,8,4,4,2,4,8,4,4,4,4,4,4,8,8,8,8,4,8,4,4,2,4,8,4,4,4,8,4,4,8,8,4,8,8,4,4,4,2,4,8,4,4,4,4,4,4,8,8,8,8,4,8,4,4,2},
          
    //2. Jingle Bell
    {NG4,NE5,ND5,NC5,NG4,NG4,NE5,ND5,NC5,NA4,NA4,NF5,NE5,ND5,NB4,NG5,NG5,NF5,ND5,NE5,NG4,NE5,ND5,NC5,NG4,NG4,NE5,ND5,NC5,NA4,NA4,NF5,NE5,ND5,NG5,NG5,NG5,NG5,NG5,NA5,NG5,NF5,ND5,NC5,NG5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NG5,NC5,ND5,NE5,NF5,NF5,NF5,NF5,NF5,NF5,NE5,NE5,NE5,NE5,NE5,ND5,ND5,NE5,ND5,NG5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NG5,NC5,ND5,NE5,NF5,NF5,NF5,NF5,NF5,NF5,NE5,NE5,NE5,NE5,NG5,NG5,NF5,ND5,NC5},
    {8,8,8,8,2,8,8,8,8,2,8,8,8,8,2,8,8,8,8,2,8,8,8,8,2,8,8,8,8,2,8,8,8,8,8,8,8,16,16,8,8,8,8,4,4,8,8,4,8,8,4,8,8,8,8,2,8,8,8,16,16,8,8,8,16,16,8,8,8,8,4,4,8,8,4,8,8,4,8,8,8,8,2,8,8,8,16,16,8,8,8,16,16,8,8,8,8,2},
          
    //3. We Wish You A Merry Christmas
    {NG4,NC5,NC5,ND5,NC5,NB4,NA4,NA4,NA4,ND5,ND5,NE5,ND5,NC5,NB4,NG4,NG4,NE5,NE5,NF5,NE5,ND5,NC5,NA5,NG4,NG4,NA4,ND5,NB4,NC5,NG4,NC5,NC5,ND5,NC5,NB4,NA4,NA4,NA4,ND5,ND5,NE5,ND5,NC5,NB4,NG4,NG4,NE5,NE5,NF5,NE5,ND5,NC5,NA5,NG4,NG4,NA4,ND5,NB4,NC5,NG4,NC5,NC5,NC5,NB4,NB4,NC5,NB4,NA4,NG4,ND5,NE5,ND5,ND5,NC5,NC5,NG5,NG4,NG4,NG4,NA4,ND5,NB4,NC5},
    {4,4,8,8,8,8,4,4,4,4,8,8,8,8,4,4,4,4,8,8,8,8,4,4,8,8,4,4,4,2,4,4,8,8,8,8,4,4,4,4,8,8,8,8,4,4,4,4,8,8,8,8,4,4,8,8,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,8,8,8,8,4,4,8,8,4,4,4,2},
          
    //4. Gong Xi Gong Xi
    {NA3,NB3,NC4,ND4,NF4,NE4,NE4,NA4,NA4,NE4,NE4,ND4,ND4,NF4,NE4,ND4,ND4,NC4,NC4,NB3,NA3,NGS3,NA3,NA3,ND4,0,NE4,NC4,0,NE4,NB3,NE4,NA3,NE4,ND4,0,NE4,NC4,0,NE4,NB3,NE4,NA3,NA3,NB3,NC4,ND4,NF4,NE4,NE4,NA4,NA4,NE4,NE4,ND4,ND4,NF4,NE4,ND4,ND4,NC4,NC4,NB3,NA3,NGS3,NA3,NA3,ND4,0,NE4,NC4,0,NE4,NB3,NE4,NA3,NE4,ND4,0,NE4,NC4,0,NE4,NB3,NE4,NA3},
    {4,4,4,4,2,2,4,4,4,4,2,2,4,4,4,4,2,2,4,4,4,4,2,2,4,8,8,4,8,8,4,4,4,4,4,8,8,4,8,8,4,4,2,4,4,4,4,2,2,4,4,4,4,2,2,4,4,4,4,2,2,4,4,4,4,2,2,4,8,8,4,8,8,4,4,4,4,4,8,8,4,8,8,4,4,2},
          
    //5. Gangnam Style
    {NA4,NA4,NC5,0,NA4,0,NE5,NE5,NE5,0,ND5,0,ND5,ND5,NE5,0,0,NE5,NE5,NE5,NE5,0,0,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,NE5,0,0,NA4,NA4,NC5,NC5,NA4,0,0},
    {8,8,4,8,8,4,8,8,4,8,8,4,8,8,4,8,4,8,8,8,4,8,4,8,8,8,8,8,8,8,8,8,8,8,4,4,4,4,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,1,1,4,8,8,8,8,4,1,4},
          
    //6. Gentleman
    {NB5,0,NB5,0,NB5,NA5,NB5,NB5,NB5,NB5,NB5,NB5,NC6,NB5,NA5,NB5,0,NB5,0,NB5,NA5,NFS5,NFS5,NFS5,NG5,NG5,NG5,NGS5,NGS5,NGS5,NA5,NAS5,NB5,0,NB5,0,NB5,NA5,NB5,NB5,NB5,NB5,NB5,NB5,NC6,NB5,NA5,NB5,0,NB5,0,NB5,NA5,NFS5,NFS5,NFS5,NG5,NG5,NG5,NGS5,NGS5,NGS5,NA5,NAS5},
    {8,4,8,4,8,8,8,16,16,8,8,8,8,8,8,8,4,8,4,8,8,8,16,16,8,16,16,8,16,16,8,8,8,4,8,4,8,8,8,16,16,8,8,8,8,8,8,8,4,8,4,8,8,8,16,16,8,16,16,8,16,16,8,8},
        
//    //7. Doraemon
    {NG3,NC4,NC4,NE4,NA4,NE4,NG4,0,NG4,NA4,NG4,NE4,NF4,NE4,ND4,0,NA3,ND4,ND4,NF4,NB4,NB4,NA4,NG4,NF4,NF4,NE4,ND4,NA3,0,NA3,NB3,NC4,ND4,0,0,NG3,NC4,NC4,NE4,NA4,NE4,NG4,0,NG4,NA4,NG4,NE4,NF4,NE4,ND4,0,NA3,ND4,ND4,NF4,NB4,NB4,NA4,NG4,NF4,NF4,NE4,ND4,NA3,0,NA3,NB3,ND4,NC4,0,0,NA4,0,NA4,NG4,NF4,NG4,NA4,NG4,0,ND4,NE4,NFS4,ND4,NG4,0,NA4,0,NG4,0,NF4,0,ND4,0,NB4,NA4,NG4,NA4,NG4,NF4,0,0,NG4,NA4,NE4,0,ND4,NC4,0,0,NA4,0,NA4,NG4,NF4,NG4,NA4,NG4,0,ND4,NE4,NFS4,ND4,NG4,0,NA4,0,NG4,0,NF4,0,ND4,0,NB4,NA4,NG4,NA4,NG4,NF4,0,0,NG4,NA4,NE4,0,ND4,NC4},
    {2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,4,4,4,2,1,1,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,4,4,4,2,1,1,2,4,2,4,4,4,4,2,4,2,4,2,4,1,2,2,4,2,4,2,1,2,4,2,4,2,4,2,4,2,4,2,4,1,4,4,1,1,1,2,4,2,4,4,4,4,2,4,2,4,2,4,1,2,2,4,2,4,2,1,2,4,2,4,2,4,2,4,2,4,2,4,1,4,4,1},
          
     
    //9. Happy Birthday
    {NC4,NC4,ND4,NC4,NF4,NE4,NC4,NC4,ND4,NC4,NG4,NF4,NC4,NC4,NC5,NA4,NF4,NE4,ND4,NAS4,NAS4,NA4,NF4,NG4,NF4},
    {6,12,4,4,4,2,6,12,4,4,4,2,6,12,4,4,4,4,2,6,12,4,4,4,2},
          
    //10. Mario main them tempo 
    {NE7, NE7, 0, NE7,0, NC7, NE7, 0,NG7, 0, 0,  0,NG6, 0, 0, 0, NC7, 0, 0, NG6,0, 0, NE6, 0,0, NA6, 0, NB6,0, NAS6, NA6, 0, NG6, NE7, NG7,NA7, 0, NF7, NG7,0, NE7, 0, NC7,ND7, NB6, 0, 0, NC7, 0, 0, NG6,0, 0, NE6, 0,0, NA6, 0, NB6,0, NAS6, NA6, 0, NG6, NE7, NG7,NA7, 0, NF7, NG7,0, NE7, 0, NC7,ND7, NB6, 0, 0},
    {12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12, 12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,9, 9, 9,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,9, 9, 9,12, 12, 12, 12,12, 12, 12, 12,12, 12, 12, 12,},
          
    //11. Mario Underworld melody
    {NC4, NC5, NA3, NA4,NAS3, NAS4, 0,0,NC4, NC5, NA3, NA4,NAS3, NAS4, 0,0,NF3, NF4, ND3, ND4,NDS3, NDS4, 0,0,NF3, NF4, ND3, ND4,NDS3, NDS4, 0,0, NDS4, NCS4, ND4,NCS4, NDS4,NDS4, NGS3,NG3, NCS4,NC4, NFS4, NF4, NE3, NAS4, NA4,NGS4, NDS4, NB3,NAS3, NA3, NGS3,0, 0, 0},
    {12, 12, 12, 12,12, 12,3,12, 12, 12,12,12, 12, 6,3,12, 12, 12, 12,12, 12, 6,3,12, 12, 12, 12,12, 12, 6,6, 18, 18, 18,6, 6,6, 6,6,6,18, 18, 18, 18, 18, 18,10, 10, 10,10, 10, 10,3, 3, 3},
           
    //12. Bumer
    {NF6, NA6, 0, NA6, NF6, 0, NA6, NG6, NA6, NG6, NA6, NG6, NA6, NG6, NA6, NB6},
    {8, 2, 4, 8, 2, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2},
          
    //13.
    {NC4, NA3, NC4, NF3, NC4, NC4, NC4, NC4, NA3, NC4, NC4, NC4, NF3, NA3, NG3, NA3, NG3, NG3, NA3, NG3, NG3, NG3, NA3, NG3, NA3, NC4, NA3, NG3, NG3, NF3, NC4, NC4, NC4, NC4, NC4, NA3, NC4},
    {16,16,4,2,16,16,8,8,2,16,16,4,2,16,16,8,8,8,8,2,16,16,2,16,16,8,8,8,8,4,4,1,16,16,16,16,1},
        
    //14.
    {ND4, NG4, NG4, NA4, NG4, NF4, NE4, NC4, NE4, NA4, NA4, NB4, NA4, NG4, NF4, ND4, ND4, NB4, NB4, NC5, NB4, NA4, NG4, NE4, ND4, ND4, NE4, NA4, NF4, NG4},
    {4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4, 2},
          
    //15.
    {NA4, NA4, NA4, NF4, NC5, NA4, NF4, NC5, NA4, NE5, NE5, NE5, NF5, NC5, NA4, NF4, NC5, NA4},
    {4, 4, 4, 5, 16, 4, 5, 16, 2, 4, 4, 4, 5, 16, 4, 5, 16, 2},
          
    //16. Star wars
    {NC3, NC3, NC3, NF3, NC4, NB3, NA3, NG3, NF4, NC4, NB3, NA3, NG3, NF4, NC4, NB3, NA3, NB3, NG3, NC3, NC3, NC3, NF3, NC4, NB3, NA3, NG3, NF4, NC4, NB3, NA3, NG3, NF4, NC4, NB3, NA3, NB3, NG3, NC3, NC3, ND3, NC4, NB3, NA3, NG3, NF3, NF3, NG3, NA3, NG3},
    {8,8,16,2,2,8,16,8,2,4,8,16,8,2,4,8,16,8,2,8,8,16,2,2,8,16,8,2,4,8,16,8,2,4,8,16,8,2,4,16,2,8,8,8,8,8,16,8,16,4},
           
    //17. Mission Imposible:
    {NE4,NF4,NE4,NF4,NE4,NF4,NE4,NF4,NE4,NF4,NE4,NF4,NE4,NF4,NE4,NF4,NG4,0,NG4,0,NF4,0,NF4,0,NG4,0,NG4,0,NA4,0,NC5,0,NA4,NG4,ND4,0,NA4,NG4,NC4,0,NA4,NG4,NC4,0,NA3,NC4},
    {32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,16,8,16,8,16,16,16,16,16,8,16,8,16,16,16,16,16,16,2,32,16,16,2,32,16,16,2,16,16,16},
           
    //18. Jammes Bond
    {ND3,NF3,NF3,NF3,NF3,ND3,ND3,ND3,ND3,NF3,NF3,NF3,NF3,NF3,NF3,NF3,ND3,NF3,NF3,NF3,NF3,ND3,ND3,ND3,ND3,NF3,NF3,NF3,NF3,NF3,NE3,ND3,ND4,ND4,NA3,NG3,NA3},
    {16,32,32,16,8,16,16,16,16,32,32,16,8,16,16,16,16,32,32,16,8,16,16,16,16,32,32,16,8,16,16,16,16,2,16,16,2},
           
    //19. Chip n dale
    {0,NG4,NG4,NG4,NG4,NG4,NG4,0,NG4,ND4,NF4,NG4,NG4,NG4,NG4,NG4,NG4,NA4,NG4,NG4},
    {4,8,8,8,8,4,2,8,4,8,4,8,8,8,8,4,4,8,8,4},
           
    //20. Europe
    {NC4,NA3,NC4,NF3,NC4,NC4,NC4,NC4,NA3,NC4,NC4,NC4,NF3,NA3,NG3,NA3,NG3,NG3,NA3,NG3,NG3,NG3,NA3,NG3,NA3,NC4,NA3,NG3,NG3,NF3,NC4,NC4,NC4,NC4,NC4,NA3,NC4},
    {16,16,4,2,16,16,8,8,2,16,16,4,2,16,16,8,8,8,8,2,16,16,2,16,16,8,8,8,8,4,4,1,16,16,16,16,1},
           
     //21. Aqua
    {NG4,NE4,NG4,NC5,NA4,0,NF4,ND4,NF4,NB4,NG4,NF4,NE4,0,NE4,NC4,NF4,NC4,0,NF4,NE4,NG4,NF4},
    {8,8,8,8,4,4,8,8,8,8,4,8,8,4,8,8,4,4,4,8,8,4,4},
           
     //22. ABBA: MoneyMoney
    {NE4,NE4,NE4,NE4,NE4,NE4,NE3,NA3,NC4,NE4,ND4,ND4,ND4,ND4,ND4,ND4,NF3,NA3,NC4,ND4,ND4,NC4,NA3,NC4,NC4,NA3,NA3,NC4,NE4,NA4},
    {8,8,8,8,8,8,16,16,16,16,8,8,8,8,8,8,16,16,16,16,4,8,8,8,4,2,32,32,32,8},
      
    //23. Белые розы:
    {NB3,NB3,NB3,NB3,NF3,0,NB3,NB3,NB3,NB3,NF3,0,NB3,NG3,NF3,NG3,NF3,NG3,0,0,0,NA3,NA3,NA3,NA3,NE3,0,NA3,NA3,NA3,NA3,NE3,0,NA3,NF3,NE3,NF3,NE3,NF3},
    {8,8,8,4,4,8,8,8,8,4,4,8,4,4,8,8,8,4,8,8,8,8,8,8,4,4,8,8,8,8,4,4,8,4,4,8,8,8,4},
           
    //24. ДДТ - Оcень
    {NE4,NC4,NB3,NA3,NE4,NB3,NB3,NC4,NB3,NA3,NA3,NA3,NA3,NA3,NA3,NA3,NC4,NE4,NG4,NF4,ND4,ND4,ND4,ND4,NG4,NF4,NE4,ND4,NE4,NE4,NE4,ND4,NC4,NA3,0,NB3,NB3,NG4,NF4,NE3,NE3,NE4,NC4,NB3,NA3},
    {8,16,8,8,8,8,16,8,8,2,8,16,8,8,8,8,16,8,8,2,8,16,8,8,8,8,8,8,8,8,16,8,8,4,8,8,8,8,8,8,16,8,8,8,2},
          
    //25. Футбольный марш
    {NC4,NC4,NC4,NB3,NC4,ND4,NE4,0,ND4,NC4,NG3,NE4,NE4,NE4,ND4,NE4,NF4,ND4,0,NG4,NG4,NG4,NB4,0,NA4,NG4,NA4,NG4,0,NF4,NE4,NF4,NE4,NE4,ND4,NC4,ND4,NE4,NC4},
    {8,8,16,16,16,16,8,16,16,8,8,8,8,16,16,16,16,8,16,16,8,8,8,16,16,8,8,8,16,16,8,8,8,8,16,16,16,16,2},
         
    //26. Mozart 40
    {NA4,NG4,0,NG4,0,NA4,NG4,0,NG4,0,NA4,NG4,0,NG4,NE5,0,0,NE5,ND5,0,NC5,0,NC5,NB4,0,NA4,0,NA4,0,NG4,0,NF4,0,NF4,0,0,NG4,0,NF4,0,NF4,0,NG4,NF4,0,NF4,0,NG4,NF4,0,NF4,ND5,0,0,ND5,NC5,NC5,0,NC5,NA4,NG4,0,0,NG4,NF4,NE4,0,NE4,0,0,NE5,ND5,0,ND5,NF5,NC5,ND5,NC5,NG4,0,NE5,0,ND5,0,ND5,NF5,NC5,ND5,NC5,NE5,ND5,NC5,NB4,NA4,NG4,NG4,NG4,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3,0,NG3},
    {8,16,16,8,8,8,16,16,8,8,8,16,16,4,8,4,16,8,16,16,8,8,8,16,16,8,8,16,32,16,16,8,8,8,4,8,16,32,16,32,8,8,8,16,16,8,8,8,16,16,4,8,4,8,8,8,8,8,8,8,16,8,32,8,8,8,8,8,4,8,8,16,16,4,4,4,4,4,4,4,16,32,16,16,4,4,4,4,4,4,8,8,8,8,1,1,2,4,16,16,16,16,2,4,16,16,16,16,2,4,16,16,16,16,8,8,16,16,16,16,8,8,16,16,16,16,2},
        
    //27. Toreador
    {NC5,ND5,NC5,NA4,NA4,NA4,0,NG4,NA4,NA4,NA4,0,NA4,NG4,NC5,NA4,0,NF4,ND4,NG4,NC4,0,NG4,NG4,ND5,NC5,NA4,NA4,0,NG4,NA4,NA4,NA4,0,NE4,NA4,NA4,NG4,NB4,NE5,0,ND5,NE5,ND5,NC5,ND5,NG4,NA4,NA4,0,NA4,NA4,NA4,NF4,ND5,NC5,0,NF4,NG4,NF4,NC4,NA4,NA4,0,NG4,0,NF4,0},
    {4,8,16,4,4,8,16,16,8,16,4,4,4,8,16,4,4,4,8,16,4,4,2,8,8,8,8,16,32,8,8,8,4,4,4,4,4,8,8,1,8,32,16,32,8,8,8,8,4,8,32,16,32,8,8,4,4,32,16,32,8,8,8,8,8,8,8,2},
//          
    //28. Черепашки Ниндзя
    {0,NG4,NA4,NG4,NA4,NG4,NA4,NG4,0,NA4,NA4,NC5,NA4,NC5,ND5,NC5,NA4,0,NC5,NF5,NF5,ND5,NF5,NG5,NF5,ND5,0,NF5,NC5,NC5,NC5,NC5,NA4,NC5,NC5,NC5,NC5,NC5  },
    {4,8,8,8,8,8,16,8,16,8,8,8,8,8,8,16,8,16,8,8,8,8,8,8,16,8,16,8,16,16,16,16,8,4,16,16,16,8},
//          
    //29. Фристайлер
    {NF4,ND4,NA3,NF4,ND4,NA3,NF4,ND4,NA3,NE4,ND4,NA3,NE4,ND4,NA3,NC4,NA3,NF3,NC4,NA3,NF3,NC4,NA3,NF3,ND4,NC4,NG3,ND4,NC4,NG3,ND4,NG3},
    {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
//          
    //30. Mortal Kombat theme
    {NA3,NA3,NC4,NA3,ND4,NA3,NE4,ND4,NC4,NC4,NE4,NC4,NG4,NC4,NE4,NC4,NG3,NG3,NB3,NG3,NC4,NG3,ND4,NC4,NF3,NF3,NA3,NF3,NC4,NF3,NC4,NB3},
    {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
//          
    //31. БРИГАДА
    {NG3,ND4,NC4,NE4,ND4,ND4,NB3,NC4,ND4,NE4,ND4,NG3,NG3,ND4,NC4,NE4,ND4,NC4,NB3,NA3,NB3,NF3,NG3,ND4,NC4,NE4,ND4,ND4,NB3,NC4,ND4,NE4,ND4,NF3,0,0,NG3,NA3,NB3,NC4,NB3,NG3,0,NG3,NB3,NA3,NG3,NF3,NG3},
    {16,16,16,16,8,16,16,16,16,8,16,2,16,16,16,16,4,16,16,8,16,2,16,16,16,16,8,16,16,16,16,8,16,4,16,16,8,16,16,8,16,4,16,16,16,16,16,8,2},
//          
    //32. Crazy Frog - Axel F
    {NF3,0,NG3,0,NF3,0,NF3,NA3,0,NF3,0,ND3,0,NF3,0,NC4,0,NF3,0,NF3,NC4,0,NC4,0,NG3,0,NF3,0,NC4,0,NF4,0,NF3,ND3,0,ND3,NC3,0,NG3,0,NF3},
    {8,16,8,16,16,16,16,16,16,16,16,16,16,8,16,8,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,4},
//          
//    //33. Хава-Нагила
    {NE3,NE3,0,NG3,NF3,NE3,NG3,NG3,0,NB3,NA3,NG3,NA3,NA3,0,NC4,NB3,NA3,NG3,NF3,NE3,0,0},
    {4,4,8,8,8,8,4,4,8,8,8,8,4,4,8,8,8,8,4,4,4,8,8},
//          
//    //34. Свадебный марш Мендельсона
    {NC2,NC2,NC2,NC2,0,NC3,NC3,NC3,NC3,0,NC4,NC4,NC4,NC3,NB4,NF4,NA4,NG4,NF4,ND4,NC4,NB3,NC4,ND4,NG3,ND4,NE4,0,NC3,NB4,NF4,NA4,NG4,NF4,ND4,NC4,NB3,NC4,NE4,ND4,NE4,ND4,NC4,0},
    {16,16,16,8,2,16,16,16,8,2,16,16,16,2,2,8,4,4,4,4,4,8,8,4,8,8,2,4,2,2,8,4,4,4,4,4,8,8,4,8,8,2,2,4},
//          
//    //35. Жуки: Батарейка
    {ND4,ND4,ND4,NE4,ND4,NC4,NB3,0,0,NB3,NB3,NB3,NA3,NF3,NG3,NF3,0,0,ND4,ND4,ND4,NE4,ND4,NC4,NB3,NB3,0,0,NB3,0,0,NC4,ND4,NC4,NB3},
    {4,4,4,4,4,4,4,8,8,4,4,4,4,4,4,4,8,8,4,4,4,4,4,4,4,4,8,8,4,8,8,4,4,4,4}

);
 
 int sizes[] = {68, 98, 84, 86, 64, 64, 148, 25, 79, 55, 16, 37, 30, 18, 50, 46, 37, 20, 37, 23, 30, 39, 45, 39, 127, 68, 38, 32, 31, 49, 41, 23, 44, 35};
 
void setup() {
    pinMode(3, OUTPUT); 
    Serial.begin(9600);
 }

void loop() {
  long rand = (analogRead(0) + analogRead(1) + analogRead(2) + analogRead(3) + analogRead(4) + analogRead(5)) % 34 +1;
  size = sizes[rand];
  
  for (int i = 0; i < size; i++) {
    melody[i*2] = melodies[rand*2][i];
  }
  for (int i = 0; i < size; i++) {
    melody[i*2 + 1] = melodies[rand*2+1][i];
  }
  
  for (int i = 0; i< 20; i++ ) {
    Serial.println(melody[i]);
  }
  
  for (int thisNote = 0; thisNote < size;  thisNote++) {
    int noteDuration = 0;
    noteDuration = 1000/melody[thisNote * 2 +1];
    buzz(3, melody[thisNote*2],noteDuration);   
    int pauseBetweenNotes = noteDuration * 1.20;  
    delay(pauseBetweenNotes);
    noTone(3);
  }
  delay(2000);

}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2;
  long numCycles = frequency * length / 1000;
  for (long i = 0; i < numCycles; i++) {
    digitalWrite(targetPin, HIGH);
    delayMicroseconds(delayValue);
    digitalWrite(targetPin, LOW); 
    delayMicroseconds(delayValue);
  }
  digitalWrite(13, LOW);
 
}