/*
	MIT License

	Copyright (c) 2019 Tensor Technologies LTD

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
 
 #ifndef BLUETERA_CONFIG_H
 #define BLUETERA_CONFIG_H
 
// Throughout this file, logging levels are: 0 - Off, 1 - Error, 2 - Warning, 3 - Info, 4 - Debug

// IMU driver
#ifndef BLTR_IMU_ENABLED
#define BLTR_IMU_ENABLED 1
#endif

#ifndef BLTR_IMU_CONFIG_LOG_ENABLED
#define BLTR_IMU_CONFIG_LOG_ENABLED 1
#endif

#ifndef BLTR_IMU_CONFIG_LOG_LEVEL
#define BLTR_IMU_CONFIG_LOG_LEVEL 3
#endif

#ifndef BLTR_IMU_CONFIG_INFO_COLOR
#define BLTR_IMU_CONFIG_INFO_COLOR 0
#endif


#ifndef BLTR_IMU_CONFIG_DEBUG_COLOR
#define BLTR_IMU_CONFIG_DEBUG_COLOR 3
#endif


#endif // BLUETERA_CONFIG_H