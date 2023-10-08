DECLARE

    BALANCE DEPOSIT.BAL%TYPE;
    ANO DEPOSIT.ACC_NO%TYPE;

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter balance');
    BALANCE := &BALANCE;

    SELECT DEPOSIT.BAL, DEPOSIT.ACC_NO INTO BALANCE, ANO FROM DEPOSIT WHERE BAL = BALANCE;

    DBMS_OUTPUT.PUT_LINE('Account no. ' || ANO || ' Balance is : ' || BALANCE);

EXCEPTION

    WHEN TOO_MANY_ROWS THEN
        DBMS_OUTPUT.PUT_LINE('multipl rows found');

    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('No any row found in database');

END;

-- select * from deposit;