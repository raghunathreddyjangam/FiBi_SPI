/*
 * power_on_off.h
 *
 * Created: 4/25/2018 4:14:08 PM
 *  Author: raghu
 */ 


#ifndef POWER_ON_OFF_H_
#define POWER_ON_OFF_H_

#define INPUT_REG_ADDRESS   0x41004400
#define POWER_OFF_VALUE     0x00004000 //PA14
#define MASK_POWER_OFF      0x00004000 //PA14

#define POWER_OFF_LIMIT     100

void power_button_init();
void check_power_off_button();






#endif /* POWER_ON_OFF_H_ */