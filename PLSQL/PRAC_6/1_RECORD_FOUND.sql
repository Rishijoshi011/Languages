DECLARE 

    BRANCH DEPOSIT.B_NAME%TYPE;

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter name of the user to update balance');
    BRANCH := :BRANCH;

    UPDATE DEPOSIT SET BAL = BAL + 1000 WHERE B_NAME = BRANCH;
    
        IF SQL%FOUND THEN
            DBMS_OUTPUT.PUT_LINE('Record is found');
        ELSE
            DBMS_OUTPUT.PUT_LINE('Record is not found');
        END IF;

END;

-- SELECT * FROM DEPOSIT;