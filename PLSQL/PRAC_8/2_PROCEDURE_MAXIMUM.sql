-- procedure code 

CREATE OR REPLACE PROCEDURE MAXI(NUM1 IN NUMBER, NUM2 IN NUMBER, NUM3 IN NUMBER, ANS OUT NUMBER)
IS

    M NUMBER := NUM1;
    B NUMBER := NUM2;
    B2 NUMBER := NUM3;

BEGIN

    IF M > B AND M > B2 THEN
        ANS := M;
    ELSIF B > M AND B > B2 THEN
        ANS := B;
    ELSIF B2 > M AND B2 > B THEN
        ANS := B2;
    END IF;

END;

-- Excecution block

DECLARE 
    
    NUM1 NUMBER;
    NUM2 NUMBER;
    NUM3 NUMBER;
    ANS NUMBER;

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter any number');
    NUM1 := :NUM1;

    DBMS_OUTPUT.PUT_LINE('Enter any number');
    NUM2 := :NUM2;

    DBMS_OUTPUT.PUT_LINE('Enter any number');
    NUM3 := :NUM3;

    MAXI(NUM1, NUM2, NUM3, ANS);

    DBMS_OUTPUT.PUT_LINE('Answer is: ' || ANS);

END;