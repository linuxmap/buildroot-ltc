/*! 
******************************************************************************
 @file   : tconf_txt.h

 @brief	 API for the target config file parser in text format

 @Author Jose Massada

 @date   03/10/2012
 
         <b>Copyright 2006 by Imagination Technologies Limited.</b>\n
         All rights reserved.  No part of this software, either
         material or conceptual may be copied or distributed,
         transmitted, transcribed, stored in a retrieval system
         or translated into any human or computer language in any
         form by any means, electronic, mechanical, manual or
         other-wise, or disclosed to third parties without the
         express written permission of Imagination Technologies
         Limited, Unit 8, HomePark Industrial Estate,
         King's Langley, Hertfordshire, WD4 8LZ, U.K.

 <b>Description:</b>\n
         Functions used to read a Target Config File in text format.

 <b>Platform:</b>\n
	     Platform Independent 

 @Version	
	     1.0

******************************************************************************/

#ifndef __TCONF_TXT_H__
#define __TCONF_TXT_H__

#include "tconf_int.h"

/*!
******************************************************************************

 @Function				TCONF_TXT_TargetConfigure

******************************************************************************/
IMG_RESULT TCONF_TXT_TargetConfigure(
	TCONF_sTargetConf* psTargetConf,
	TAL_pfnTAL_MemSpaceRegister pfnTAL_MemSpaceRegister
);

/*!
******************************************************************************

 @Function				TCONF_ProcessOverride

******************************************************************************/
IMG_RESULT TCONF_ProcessOverride(
	TCONF_sTargetConf *psTargetConf,
	eDevifTypes *peDevifType
);

#endif /* __TCONF_TXT_H__ */
