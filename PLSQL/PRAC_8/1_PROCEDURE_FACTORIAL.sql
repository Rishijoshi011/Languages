-- This is a procedure for the factorial number

CREATE OR REPLACE PROCEDURE FACTORIAL(FACT IN NUMBER,ANS OUT NUMBER)
IS
    FACT2 NUMBER := FACT;
    ANS2 NUMBER := 1;

BEGIN

    WHILE FACT2 > 0 LOOP    
        ANS2 := ANS2 * FACT2;
        FACT2 := FACT2 - 1;
    END LOOP;

    IF FACT = 0 THEN
    ANS2 := 0;
    END IF;
    
    ANS := ANS2;

END;

-- DROP PROCEDURE FACTORIAL;

-- Excecution block

DECLARE

    FACT NUMBER;
    ANS NUMBER;

BEGIN
    
    DBMS_OUTPUT.PUT_LINE('Enter number');
    -- FACT := :FACT;

    FACTORIAL(1,ANS);

    DBMS_OUTPUT.PUT_LINE('Answer is: ' || ANS);
END;