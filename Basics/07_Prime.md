<!-- 
    Pseudocode to find if a number is prime or not

    PROGRAM Prime
        PRINT "Enter a number"
        READ num
        count = 0
        div = 1
        WHILE  div <= num
            IF num % div == 0
                count = count + 1
            END IF
            div = div + 1
        END WHILE
        IF count == 2
            PRINT  num " is a prime number"
        END IF
    END PROGRAM
-->