DECLARE

    M NUMBER(3);

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter any number');
    M := &M;

    IF MOD(M,2) = 0 THEN
        DBMS_OUTPUT.PUT_LINE('Your given number is even');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Your given number is odd');
    END IF;

END;