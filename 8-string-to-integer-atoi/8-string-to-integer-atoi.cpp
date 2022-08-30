const uint32_t MAX_INT = (1<<31) - 1;
class Solution 
{
    public:
    int myAtoi(string s) {
        bool sign = false;
        bool flag_overflow = false;
        int32_t num = 0;

        size_t idx = 0;
        
        // 1. skip leading whitespaces
        while (isspace(s[idx]))
            ++idx;
        
        // 2. check sign
        switch (s[idx])
        {
            case '-' : { sign = true;  ++idx; break; }
            case '+' : { sign = false; ++idx; break; }
        }
        
        // 3. read digits
        bool flag_leading_zero = true;
        while (s[idx] >= '0' && s[idx] <= '9')
        {
            if (s[idx] != '0')
                flag_leading_zero = false;

            if (!flag_leading_zero)
            {
                // 4. here, we compute the number on-the-fly without first storing digits in a stack

                // 4a. safe mul
                if (num > 0 && MAX_INT / num < 10) { flag_overflow = true; break;}
                num *= 10;

                // 4b. safe add
                if (MAX_INT - num < s[idx] - '0') { flag_overflow = true; break;}
                num += s[idx] - '0';

                // actually, for negative int32 numbers, the largest value is -MAX_INT-1
                // however, in 4b we check for overflow using MAX_INT even for the negative case
                // it's ok, because we would anyway return -MAX_INT-1 in 5.
            }
            ++idx;
        }

        if (flag_overflow)
            // 5. overflow happend
            return (int32_t) ((sign ? -1 : +1) * (MAX_INT + sign));
        else
            // 6. no overflow
            return (int32_t) ((sign ? -1 : +1) * (num));
        
    }
};