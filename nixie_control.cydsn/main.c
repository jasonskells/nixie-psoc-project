/*******************************************************************************
*   Included Headers
*******************************************************************************/
#include <project.h>

int main()
{
	/*Enable and start the PWM block*/
    
    int digits[10][4] = {
        {0,0,0,0},
        {0,0,0,1},
        {0,0,1,0},
        {0,0,1,1},
        {0,1,0,0},
        {0,1,0,1},
        {0,1,1,0},
        {0,1,1,1},
        {1,0,0,0},
        {1,0,0,1}
    };
    
    while(1){
        
        //A_Write(1);
        //B_Write(1);
        //C_Write(1);
        //D_Write(1);
    
        for(int i = 0; i < 10; i++) {
            A_Write(digits[i][3]);
            B_Write(digits[i][2]);
            C_Write(digits[i][1]);
            D_Write(digits[i][0]);
            
            E_Write(digits[i][3]);
            F_Write(digits[i][2]);
            G_Write(digits[i][1]);
            H_Write(digits[i][0]);
            
            CyDelay(1000);
        }
    
    }
}
/* [] END OF FILE */
