<!--  
    Pseudocode to find no. digits in a number

    PROGRAM : find_digits
        PRINT "Enter number"
        READ num
        IF num < 0
            num = -num
        END IF
        count = 0
        WHILE num > 0
            count = count + 1
            num = num / 10
        END WHILE
        PRINT "Number of digits in the number is ", count
    END PROGRAM   

 -->