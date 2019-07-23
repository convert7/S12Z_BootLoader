/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : CANPHY0.h
**     Project     : APP
**     Processor   : MC9S12ZVC64MKH
**     Component   : Init_CANPHY
**     Version     : Component 01.000, Driver 01.00, CPU db: 3.00.000
**     Compiler    : CodeWarrior HCS12Z C Compiler
**     Date/Time   : 2019-07-22, 11:21, # CodeGen: 4
**     Abstract    :
**          This file implements the CANPHY (CANPHY0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : CANPHY0
**          Device                                         : CANPHY0
**          Settings                                       : 
**            Split enable                                 : Disabled
**            Wakeup receiver                              : Wake-up receiver is disabled
**            Physical layer slew rate                     : Slew rate 0
**          Pins/Signals                                   : 
**            Supply pin                                   : 
**              Pin                                        : VDDC
**              Pin signal                                 : 
**            Ground pin                                   : 
**              Pin                                        : VSSC
**              Pin signal                                 : 
**            CAN bus high pin                             : 
**              Pin                                        : CANH
**              Pin signal                                 : 
**            CAN bus low pin                              : 
**              Pin                                        : CANL
**              Pin signal                                 : 
**            Termination pin                              : 
**              Pin                                        : SPLIT
**              Pin signal                                 : 
**            Tx input                                     : Enabled
**              Pin                                        : MSCAN0_TXD_to_CANPHY0_TXD
**              Pin signal                                 : 
**            Rx output                                    : 
**              Output 0                                   : Enabled
**                Pin                                      : CANPHY0_RXD_to_MSCAN0_RXD
**                Pin signal                               : 
**              Output 1                                   : Disabled
**          Interrupts                                     : 
**            CANPHY interrupt                             : 
**              Interrupt                                  : Vcanphy0
**              Interrupt priority                         : 1
**              ISR Name                                   : 
**              Voltage failure Interrupt                  : Disabled
**              Physical layer error Interrupt             : Disabled
**          Initialization                                 : 
**            Physical layer                               : Enabled
**            SW control value                             : 1
**            Call Init method                             : no
**     Contents    :
**         Init - void CANPHY0_Init(void);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file CANPHY0.h
** @version 01.00
** @brief
**          This file implements the CANPHY (CANPHY0) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup CANPHY0_module CANPHY0 module documentation
**  @{
*/         

#ifndef CANPHY0_H_
#define CANPHY0_H_

/* MODULE CANPHY0. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"
#pragma CODE_SEG CANPHY0_CODE
/* Peripheral base address parameter */
#define CANPHY0_DEVICE CANPHY0_BASE_PTR


/*
** ===================================================================
**     Method      :  CANPHY0_Init (component Init_CANPHY)
**     Description :
**         This method initializes registers of the CANPHY module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void CANPHY0_Init(void);
#pragma CODE_SEG DEFAULT

/* END CANPHY0. */
#endif /* #ifndef __CANPHY0_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale HCS12Z series of microcontrollers.
**
** ###################################################################
*/