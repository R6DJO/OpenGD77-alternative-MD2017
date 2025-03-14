/*
 * Copyright (C) 2021-2024 Roger Clark, VK3KYY / G4KYF
 *                         Colin Durbridge, G4EML
 *                         Daniel Caujolle-Bert, F1RMB
 *
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer
 *    in the documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. Use of this source code or binary releases for commercial purposes is strictly forbidden. This includes, without limitation,
 *    incorporation in a commercial product or incorporation into a product or project which allows commercial use.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _OPENGD77_APPLICATION_MAIN_H_
#define _OPENGD77_APPLICATION_MAIN_H_


#define UNUSED_PARAMETER(x) (void)x // Not using UNUSED as it already exists in HAL

#if defined(PLATFORM_MD380) || defined(PLATFORM_MDUV380) || defined(PLATFORM_RT84_DM1701) || defined(PLATFORM_MD2017)
#define HAS_COLOURS        1
#if ! defined(PLATFORM_MD2017)
#define HAS_SOFT_VOLUME    1
#endif
#define HAS_GPS            1
//#define LOG_GPS_DATA       1
#elif defined(PLATFORM_MD9600)
#define HAS_GPS            1
#define LOG_GPS_DATA       1
#endif

typedef enum
{
	DAY,
	NIGHT,
	UNDEFINED
} DayTime_t;

extern bool headerRowIsDirty;
extern char globalFailureMessage[];
extern bool spiFlashInitHasFailed;
#if ! defined(PLATFORM_MD9600) && ! defined(PLATFORM_MD2017)
extern int8_t lastVolume;
#endif
#if ! defined(PLATFORM_MD9600)
extern bool isSuspended;
#endif

void applicationMainTask(void);
void applicationStandbyPowerLoop(void);

#endif
