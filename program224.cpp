/*
    Bitwise AND             &
    Bitwise OR              |
    Bitwise XOR             ^
    Bitwise NOT             ~

    Bitwise Left shift      <<
    Bitwise Right shift     >>


    -----------------------------------             -------------
    OP1     OP2     &       |       ^                   OP   ~
    -----------------------------------             -------------
    1       1       1       1       0                   1    0
    -----------------------------------             -------------
    1       0       0       1       1                   0    1
    -----------------------------------             -------------
    0       1       0       1       1
    -----------------------------------
    0       0       0       0       0
    -----------------------------------

    & If both operands are 1 then result is 1 otherwise its 0
    | If any of the operand is 1 then result is 1 otherwise its 0
    ^ If both the operands are diffrent then result is 1 otherwise its 0
    ~ If operand is 1 then result is 0, if operand is 0 then result is 1


                NO = 73


                    /2     NO      %2
                -------------------------
                    2      36       1 
                -------------------------
                    2      18       0
                -------------------------
                    2       9       0
                -------------------------
                    2       4       1
                -------------------------
                    2       2       0
                -------------------------
                    2       1       0
                -------------------------
                    2       0       1


*/
