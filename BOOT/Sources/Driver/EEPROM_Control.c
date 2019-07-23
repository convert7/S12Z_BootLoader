

/**********************************************************************************************************************
* MODULES USED 
**********************************************************************************************************************/
#include "EEPROM_Control.h"
#include "Config_for_BootLoader.h"
#include "EEPROM_S12Z.h"
#include "System.h"

/**********************************************************************************************************************
* DEFINITIONS AND MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
* TYPEDEFS AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
* PROTOTYPES OF FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
* DECLARATIONS OF VARIABLES
**********************************************************************************************************************/

/*--------------------------------------------------------------------------*/
/* Function  |                                                              */
/* Name      | SET_GOTO_BOOTLOADER                                          */
/*--------------------------------------------------------------------------*/
/* Parameter | Nothing                                                      */
/* Return    | Nothing                                                      */
/*--------------------------------------------------------------------------*/
void SET_GOTO_BOOTLOADER(void)
{
    uint16_t Data = GOTOBOOTLOADER;

    (void)EEPROM_Erase_Sector(EEPROM_END_ADD-1);
}

/*--------------------------------------------------------------------------*/
/* Function  |                                                              */
/* Name      | SET_GOTO_APPLICATION                                         */
/*--------------------------------------------------------------------------*/
/* Parameter | Nothing                                                      */
/* Return    | Nothing                                                      */
/*--------------------------------------------------------------------------*/
void SET_GOTO_APPLICATION(void)
{
    uint16_t Data = GOTOAPPLICATION;

	if (TRUE == Check_Exist_Application())
	{
		(void)EEPROM_Program(EEPROM_END_ADD-1, &Data, 1);
	}
}
