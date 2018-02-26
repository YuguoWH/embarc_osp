/* ------------------------------------------
 * Copyright (c) 2017, Synopsys, Inc. All rights reserved.

 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:

 * 1) Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.

 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.

 * 3) Neither the name of the Synopsys, Inc., nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * \version 2017.03
 * \date 2017-11-04
 * \author Qiang Gu(Qiang.Gu@synopsys.com)
--------------------------------------------- */
/**
 * \file
 * \ingroup	BOARD_HUANGSHAN_DRV_DW_I2S_OBJ
 * \brief	header file of DesignWare I2S object instantiation
 */

/**
 * \addtogroup	BOARD_HUANGSHAN_DRV_DW_I2S_OBJ
 * @{
 */
#ifndef _DW_I2S_OBJ_H_
#define _DW_I2S_OBJ_H_

#include "dev_i2s.h"

/**
 * \name	DesignWare I2S Object ID Macros
 * @{
 */
#define DW_I2S_0_ID		0	/*!< I2s 0 ID macro */
#define DW_I2S_1_ID		1	/*!< I2s 1 ID macro */
/** @} end of name */

/**
 * \name	DesignWare I2S Object Control Macros
 * @{
 */
#define USE_DW_I2S_0		1	/*!< enable use DesignWare I2S 0 as TX */
#define USE_DW_I2S_1		1	/*!< enable use DesignWare I2S 1 as TX */
/** @} end of name */

#ifdef __cplusplus
extern "C" {
#endif

extern DEV_I2S_PTR i2s_get_dev(int32_t i2s_id);

#ifdef __cplusplus
}
#endif

#endif /* _DW_I2S_OBJ_H_ */

/** @} end of group BOARD_HUANGSHAN_DRV_DW_I2S_OBJ */