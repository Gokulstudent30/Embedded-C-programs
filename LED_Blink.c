#include<AT89S52.h>
void wait(void);    /*Function declaration*/
void main()
{
while(1)            /*super loop*/				
{
P2_0=0;             /*Initially the LED is On*/
wait();             /*Calling delay*/
P2_0=1;             /*Then the LED is Off*/
wait();             /*Calling delay*/
}
}
void wait(void)    /*Function defenition*/
{
int i;
for(i=0;i<100;i++){
}
}
