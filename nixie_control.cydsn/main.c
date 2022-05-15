/*******************************************************************************
*   Included Headers
*******************************************************************************/
#include <project.h>
    
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

uint32 time, hours, minutes, seconds;
uint32 date, year, month, day;

int display_mode = 0; // 0 = display time, 1 = display date
int done = 0;
int start = 0, end = 0;
int hours_locked = 0, minutes_locked = 0; // 1 means locked, 0 means not locked


void nixie_write();
void wdt_callback(void);
void cathode_antidote();
void set_time();
void set_hours();
void set_minutess();
void set_seconds();
void set_date();


void nixie_write(int tube, int i){
    switch(tube){
        case 0:
            A_Write(digits[i][3]);
            B_Write(digits[i][2]);
            C_Write(digits[i][1]);
            D_Write(digits[i][0]);
            break;
        
        case 1:
            E_Write(digits[i][3]);
            F_Write(digits[i][2]);
            G_Write(digits[i][1]);
            H_Write(digits[i][0]);
            break;

        case 2:
            I_Write(digits[i][3]);
            J_Write(digits[i][2]);
            K_Write(digits[i][1]);
            L_Write(digits[i][0]);
            break;
        
        case 3:
            M_Write(digits[i][3]);
            N_Write(digits[i][2]);
            O_Write(digits[i][1]);
            P_Write(digits[i][0]);
            break;
        
        case 4:
            Q_Write(digits[i][3]);
            R_Write(digits[i][2]);
            S_Write(digits[i][1]);
            T_Write(digits[i][0]);
            break;

        case 5:
            U_Write(digits[i][3]);
            V_Write(digits[i][2]);
            W_Write(digits[i][1]);
            X_Write(digits[i][0]);
            break;
    }
}

void wdt_callback(void){

    time = RTC_GetTime();
    
    hours = RTC_GetHours(time);
    minutes = RTC_GetMinutes(time);
    seconds = RTC_GetSecond(time);
    
    if (!display_mode){
        nixie_write(0,hours/10);
        nixie_write(1,hours%10);
        
        nixie_write(2,minutes/10);
        nixie_write(3,minutes%10);
        
        nixie_write(4,seconds/10);
        nixie_write(5,seconds%10);
    }
    
    if(minutes == 0 && done == 0){
        cathode_antidote();     // every hour we call this function
    }
    
    if(minutes > 0){
        done = 0;
    }
    
    RTC_Update();
}


void cathode_antidote(){    // "animation" that cycles through all digits
    
    for(int n = 0; n < 10; n++){
        U_Write(digits[n][3]);
        V_Write(digits[n][2]);
        W_Write(digits[n][1]);
        X_Write(digits[n][0]);
        CyDelay(80);
    }
    U_Write(0);
    V_Write(0);
    W_Write(0);
    X_Write(0);
        

    for(int m = 0; m < 10; m++){
        Q_Write(digits[m][3]);
        R_Write(digits[m][2]);
        S_Write(digits[m][1]);
        T_Write(digits[m][0]);
        CyDelay(80);
    }
    Q_Write(0);
    R_Write(0);
    S_Write(0);
    T_Write(0);
    
    
    for(int l = 0; l < 10; l++){
        M_Write(digits[l][3]);
        N_Write(digits[l][2]);
        O_Write(digits[l][1]);
        P_Write(digits[l][0]);
        CyDelay(80);
    }
    M_Write(0);
    N_Write(0);
    O_Write(0);
    P_Write(0);
    
    
    for(int k = 0; k < 10; k++){
        I_Write(digits[k][3]);
        J_Write(digits[k][2]);
        K_Write(digits[k][1]);
        L_Write(digits[k][0]);
        CyDelay(80);
    }
    I_Write(0);
    J_Write(0);
    K_Write(0);
    L_Write(0);
    
    
    for(int j = 0; j < 10; j++){
        E_Write(digits[j][3]);
        F_Write(digits[j][2]);
        G_Write(digits[j][1]);
        H_Write(digits[j][0]);
        CyDelay(80);
    }
    E_Write(0);
    F_Write(0);
    G_Write(0);
    H_Write(0);
    
    
    for(int i = 0; i < 10; i++){
        A_Write(digits[i][3]);
        B_Write(digits[i][2]);
        C_Write(digits[i][1]);
        D_Write(digits[i][0]);
        CyDelay(80);
    }
    A_Write(0);
    B_Write(0);
    C_Write(0);
    D_Write(0);
    
    
    for(int j = 0; j < 10; j++){
        E_Write(digits[j][3]);
        F_Write(digits[j][2]);
        G_Write(digits[j][1]);
        H_Write(digits[j][0]);
        CyDelay(80);
    }
    E_Write(0);
    F_Write(0);
    G_Write(0);
    H_Write(0);

    for(int k = 0; k < 10; k++){
        I_Write(digits[k][3]);
        J_Write(digits[k][2]);
        K_Write(digits[k][1]);
        L_Write(digits[k][0]);
        CyDelay(80);
    }
    I_Write(0);
    J_Write(0);
    K_Write(0);
    L_Write(0);
    
    for(int l = 0; l < 10; l++){
        M_Write(digits[l][3]);
        N_Write(digits[l][2]);
        O_Write(digits[l][1]);
        P_Write(digits[l][0]);
        CyDelay(80);
    }
    M_Write(0);
    N_Write(0);
    O_Write(0);
    P_Write(0);

    for(int m = 0; m < 10; m++){
        Q_Write(digits[m][3]);
        R_Write(digits[m][2]);
        S_Write(digits[m][1]);
        T_Write(digits[m][0]);
        CyDelay(80);
    }
    Q_Write(0);
    R_Write(0);
    S_Write(0);
    T_Write(0);

    for(int n = 0; n < 10; n++){
        U_Write(digits[n][3]);
        V_Write(digits[n][2]);
        W_Write(digits[n][1]);
        X_Write(digits[n][0]);
        CyDelay(80);
    }
    U_Write(0);
    V_Write(0);
    W_Write(0);
    X_Write(0);
        
    for(int i = 0; i < 10; i++) {
      
        /*
        A_Write(digits[i][3]);
        B_Write(digits[i][2]);
        C_Write(digits[i][1]);
        D_Write(digits[i][0]);
        
        E_Write(digits[i][3]);
        F_Write(digits[i][2]);
        G_Write(digits[i][1]);
        H_Write(digits[i][0]);
        
        I_Write(digits[i][3]);
        J_Write(digits[i][2]);
        K_Write(digits[i][1]);
        L_Write(digits[i][0]);

        M_Write(digits[i][3]);
        N_Write(digits[i][2]);
        O_Write(digits[i][1]);
        P_Write(digits[i][0]);
        
        Q_Write(digits[i][3]);
        R_Write(digits[i][2]);
        S_Write(digits[i][1]);
        T_Write(digits[i][0]);
        
        U_Write(digits[i][3]);
        V_Write(digits[i][2]);
        W_Write(digits[i][1]);
        X_Write(digits[i][0]);
        
        */
        
        nixie_write(0,i);
        nixie_write(1,i);
        nixie_write(2,i);
        nixie_write(3,i);
        nixie_write(4,i);
        nixie_write(5,i);

        CyDelay(80);
    }
    time = RTC_GetTime();
    minutes = RTC_GetMinutes(time);
    
    done = 1;
    
    wdt_callback();
}

void set_time(){
    CyGlobalIntDisable;
    
    while(PB_Read());
    
    start = Timer_ReadCounter();    // when the button is pressed, read the "start" of the timer
        
    while(!PB_Read());              // when the button is released read the "end" of the timer
    end = Timer_ReadCounter();
    
    if(((start - end) <= 30000000) && !hours_locked){      // short press
//        set_hours();        
    }
    
    if((start - end) > 30000000){
    }
    if(((start - end) <= 30000000) && hours_locked){
            minutes++;
            nixie_write(0,minutes/10);
            nixie_write(1,minutes%10);
        }
    

        
}

void set_date(){
    
    A_Write(digits[3][3]);
    B_Write(digits[3][2]);
    C_Write(digits[3][1]);
    D_Write(digits[3][0]);
}

int main() {
   
    // setting up the real time clock
    RTC_Start();
    RTC_SetDateAndTime(0x125945,0x12042022);    // setting the time (0xHHMMSS) and date (0xDDMMYYYY)
    
    // setting up global interrupts 
    CyGlobalIntEnable;
    CySysWdtSetInterruptCallback(0, wdt_callback);  // Watch dog timer interrupt callback
    
    Timer_Start();
    
    while(1){

        while(PB_Read());   // while the button is not pressed, loop
        
        start = Timer_ReadCounter();    // when the button is pressed, read the "start" of the timer
        
        while(!PB_Read());              // when the button is released read the "end" of the timer
        end = Timer_ReadCounter();
        
        if((start - end) <= 30000000){      // short press
            display_mode = ~display_mode;

            if(display_mode){   // if we are on the date mode
                date = RTC_GetDate();

                day = RTC_GetDay(date);
                month = RTC_GetMonth(date);
                year = RTC_GetYear(date);

                nixie_write(0,day/10);
                nixie_write(1,day%10);
                
                nixie_write(2,month/10);
                nixie_write(3,month%10);
                
                nixie_write(4,(year%100)/10);
                nixie_write(5,year%10);
                
                RTC_Update();
            }
        }
        
        if((start - end) > 30000000){       // long press
            if(!display_mode) { // if on time mode when theres a long press, set the time
                set_time();
            }
            else {              // if on date mode when theres a long press, set the date
                set_date();
            }
        }
    }
}
/* [] END OF FILE */
