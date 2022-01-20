#ifndef _EEPROM_CONFIG_GUARD_H_
#define _EEPROM_CONFIG_GUARD_H_

/*

Requirements
 
1. Hardware (MCU) agnostic
        The driver needs only to be passed some functions to write to i2c 
        and perhaps a delay function to make sure we dont write to it
        to frequently before it has time to finish the previous write

2. Partitionable  
        I want to be ablew to partition the driver into different
        memory regions, for example system settings and suer settings


3. Lossless repartition Capabilities 
        Should the layout or partitions need to change
        driver needs to be able to reformat w/out losing
        data that is already there.. assuming you have the RAM on 
        your mcu to temporarily store contents...
        
4. Robustness (ERROR, boundary checking/handling)
        Plenty of error handling and boundary checking etc
        specially due to the partion abilities

5. One time POST (Power On Self Test) Write/Read entire eeprom

*/

#endif