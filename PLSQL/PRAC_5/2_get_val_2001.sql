DECLARE

    account_no DEPOSIT.ACC_NO%TYPE;
    balance DEPOSIT.BAL%TYPE;

BEGIN

    SELECT ACC_NO,BAL INTO account_no,balance FROM DEPOSIT WHERE ACC_NO = '2001'; 
    DBMS_OUTPUT.PUT_LINE('Account no is: ' || account_no);
    DBMS_OUTPUT.PUT_LINE('Balance is: ' || balance);

END;