-- FUNCTION CODE

CREATE OR REPLACE FUNCTION CELSIUS_TO_FAHRENHEIT(CELSIUS IN NUMBER)
RETURN NUMBER
IS

    CEL NUMBER := CELSIUS;
    FAH NUMBER;

BEGIN

    FAH := (CEL * 1.8) + 32;

    RETURN FAH;
END;

-- Execution code


DECLARE

    CEL NUMBER;
    ANS NUMBER;
    
BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter celsius');
    CEL := :CEL;

    ANS := CELSIUS_TO_FAHRENHEIT(CEL);

    DBMS_OUTPUT.PUT_LINE('FAHRENHEIT IS : ' || ANS);
    
END;