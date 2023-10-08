DECLARE

    M NUMBER;
    I NUMBER;
    ANS NUMBER := 1;


BEGIN
    
    DBMS_OUTPUT.PUT_LINE('Enter any number');
    M := :M;

    FOR I IN 2..M LOOP     -- 5 > 0 TRUE 
        ANS := ANS * M;
        M := M - 1;
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Answer is: ' || ANS);

END;