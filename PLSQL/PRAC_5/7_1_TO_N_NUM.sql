DECLARE

    M NUMBER;
    I NUMBER := 1;

BEGIN
    
    DBMS_OUTPUT.PUT_LINE('Enter any number');
    M := :M;

    WHILE M >= I LOOP
        DBMS_OUTPUT.PUT_LINE('Value is: ' || I);
        I := I + 1;
    END LOOP; 

END;