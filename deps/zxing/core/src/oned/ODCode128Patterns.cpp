/*
* Copyright 2016 Nu-book Inc.
* Copyright 2016 ZXing authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "oned/ODCode128Patterns.h"

namespace ZXing {
namespace OneD {
namespace Code128 {

const std::array<std::vector<int>, 107> CODE_PATTERNS = { {
	{ 2, 1, 2, 2, 2, 2 }, // 0
	{ 2, 2, 2, 1, 2, 2 },
	{ 2, 2, 2, 2, 2, 1 },
	{ 1, 2, 1, 2, 2, 3 },
	{ 1, 2, 1, 3, 2, 2 },
	{ 1, 3, 1, 2, 2, 2 }, // 5
	{ 1, 2, 2, 2, 1, 3 },
	{ 1, 2, 2, 3, 1, 2 },
	{ 1, 3, 2, 2, 1, 2 },
	{ 2, 2, 1, 2, 1, 3 },
	{ 2, 2, 1, 3, 1, 2 }, // 10
	{ 2, 3, 1, 2, 1, 2 },
	{ 1, 1, 2, 2, 3, 2 },
	{ 1, 2, 2, 1, 3, 2 },
	{ 1, 2, 2, 2, 3, 1 },
	{ 1, 1, 3, 2, 2, 2 }, // 15
	{ 1, 2, 3, 1, 2, 2 },
	{ 1, 2, 3, 2, 2, 1 },
	{ 2, 2, 3, 2, 1, 1 },
	{ 2, 2, 1, 1, 3, 2 },
	{ 2, 2, 1, 2, 3, 1 }, // 20
	{ 2, 1, 3, 2, 1, 2 },
	{ 2, 2, 3, 1, 1, 2 },
	{ 3, 1, 2, 1, 3, 1 },
	{ 3, 1, 1, 2, 2, 2 },
	{ 3, 2, 1, 1, 2, 2 }, // 25
	{ 3, 2, 1, 2, 2, 1 },
	{ 3, 1, 2, 2, 1, 2 },
	{ 3, 2, 2, 1, 1, 2 },
	{ 3, 2, 2, 2, 1, 1 },
	{ 2, 1, 2, 1, 2, 3 }, // 30
	{ 2, 1, 2, 3, 2, 1 },
	{ 2, 3, 2, 1, 2, 1 },
	{ 1, 1, 1, 3, 2, 3 },
	{ 1, 3, 1, 1, 2, 3 },
	{ 1, 3, 1, 3, 2, 1 }, // 35
	{ 1, 1, 2, 3, 1, 3 },
	{ 1, 3, 2, 1, 1, 3 },
	{ 1, 3, 2, 3, 1, 1 },
	{ 2, 1, 1, 3, 1, 3 },
	{ 2, 3, 1, 1, 1, 3 }, // 40
	{ 2, 3, 1, 3, 1, 1 },
	{ 1, 1, 2, 1, 3, 3 },
	{ 1, 1, 2, 3, 3, 1 },
	{ 1, 3, 2, 1, 3, 1 },
	{ 1, 1, 3, 1, 2, 3 }, // 45
	{ 1, 1, 3, 3, 2, 1 },
	{ 1, 3, 3, 1, 2, 1 },
	{ 3, 1, 3, 1, 2, 1 },
	{ 2, 1, 1, 3, 3, 1 },
	{ 2, 3, 1, 1, 3, 1 }, // 50
	{ 2, 1, 3, 1, 1, 3 },
	{ 2, 1, 3, 3, 1, 1 },
	{ 2, 1, 3, 1, 3, 1 },
	{ 3, 1, 1, 1, 2, 3 },
	{ 3, 1, 1, 3, 2, 1 }, // 55
	{ 3, 3, 1, 1, 2, 1 },
	{ 3, 1, 2, 1, 1, 3 },
	{ 3, 1, 2, 3, 1, 1 },
	{ 3, 3, 2, 1, 1, 1 },
	{ 3, 1, 4, 1, 1, 1 }, // 60
	{ 2, 2, 1, 4, 1, 1 },
	{ 4, 3, 1, 1, 1, 1 },
	{ 1, 1, 1, 2, 2, 4 },
	{ 1, 1, 1, 4, 2, 2 },
	{ 1, 2, 1, 1, 2, 4 }, // 65
	{ 1, 2, 1, 4, 2, 1 },
	{ 1, 4, 1, 1, 2, 2 },
	{ 1, 4, 1, 2, 2, 1 },
	{ 1, 1, 2, 2, 1, 4 },
	{ 1, 1, 2, 4, 1, 2 }, // 70
	{ 1, 2, 2, 1, 1, 4 },
	{ 1, 2, 2, 4, 1, 1 },
	{ 1, 4, 2, 1, 1, 2 },
	{ 1, 4, 2, 2, 1, 1 },
	{ 2, 4, 1, 2, 1, 1 }, // 75
	{ 2, 2, 1, 1, 1, 4 },
	{ 4, 1, 3, 1, 1, 1 },
	{ 2, 4, 1, 1, 1, 2 },
	{ 1, 3, 4, 1, 1, 1 },
	{ 1, 1, 1, 2, 4, 2 }, // 80
	{ 1, 2, 1, 1, 4, 2 },
	{ 1, 2, 1, 2, 4, 1 },
	{ 1, 1, 4, 2, 1, 2 },
	{ 1, 2, 4, 1, 1, 2 },
	{ 1, 2, 4, 2, 1, 1 }, // 85
	{ 4, 1, 1, 2, 1, 2 },
	{ 4, 2, 1, 1, 1, 2 },
	{ 4, 2, 1, 2, 1, 1 },
	{ 2, 1, 2, 1, 4, 1 },
	{ 2, 1, 4, 1, 2, 1 }, // 90
	{ 4, 1, 2, 1, 2, 1 },
	{ 1, 1, 1, 1, 4, 3 },
	{ 1, 1, 1, 3, 4, 1 },
	{ 1, 3, 1, 1, 4, 1 },
	{ 1, 1, 4, 1, 1, 3 }, // 95
	{ 1, 1, 4, 3, 1, 1 },
	{ 4, 1, 1, 1, 1, 3 },
	{ 4, 1, 1, 3, 1, 1 },
	{ 1, 1, 3, 1, 4, 1 },
	{ 1, 1, 4, 1, 3, 1 }, // 100
	{ 3, 1, 1, 1, 4, 1 },
	{ 4, 1, 1, 1, 3, 1 },
	{ 2, 1, 1, 4, 1, 2 },
	{ 2, 1, 1, 2, 1, 4 },
	{ 2, 1, 1, 2, 3, 2 }, // 105
	{ 2, 3, 3, 1, 1, 1, 2 }
} };

} // Code128
} // OneD
} // ZXing
