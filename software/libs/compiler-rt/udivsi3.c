//
// Copyright 2011-2015 Jeff Bush
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// Unsigned 32-bit integer division
unsigned int __udivsi3(unsigned int dividend, unsigned int divisor)
{
    if (dividend < divisor)
        return 0;

    // Align high bits of divisor and dividend
    int quotientBits = __builtin_clz(divisor) - __builtin_clz(dividend);
    divisor <<= quotientBits;
    unsigned int quotient = 0;
    do
    {
        quotient <<= 1;
        if (dividend >= divisor)
        {
            dividend -= divisor;
            quotient |= 1;
        }

        divisor >>= 1;
    }
    while (--quotientBits >= 0);

    return quotient;
}
