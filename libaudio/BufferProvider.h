/*
 * Copyright 2012, The Android Open-Source Project
 * Copyright 2012, Tomasz Figa <tomasz.figa at gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BUFFERPROVIDER_H_
#define _BUFFERPROVIDER_H_

#include <stdint.h>
#include <utils/Errors.h>

namespace android {

class BufferProvider {
public:
	struct Buffer {
		union {
			void *raw;
			short *i16;
			int8_t *i8;
		};
		size_t frameCount;
	};

	virtual ~BufferProvider() {}

	virtual status_t getNextBuffer(Buffer *buffer) = 0;
};

}; /* namespace android */

#endif /* _BUFFERPROVIDER_H_ */
