# cpp-lab-variables-expressions
Something I learned about implicit vs explicit conversion is that when you divide numbers that are integers, it can just cut off the decimals, and I learned that using static_cast<double> helps get the right decimal answer.

A bug I fixed and how I found it was in Part D. I noticed the discount didn’t work at first because it did 15 divided by 100 as an integer, which gave 0, and I figured out that turning discountPercent into a double makes it 15/100 = 0.15 so the discount works correctly.
