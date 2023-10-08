-- procedure code 

CREATE OR REPLACE PROCEDURE DEBIT_CASH(ACC_NO IN DEPOSIT.ACC_NO%TYPE, AMOUNT DEPOSIT.BAL%TYPE)
IS

    ANO DEPOSIT.ACC_NO%TYPE := ACC_NO;
    BALANCE DEPOSIT.BAL%TYPE := AMOUNT;

BEGIN

    UPDATE DEPOSIT SET BAL = BAL + BALANCE WHERE ANO = ACC_NO;

    DBMS_OUTPUT.PUT_LINE('Deposit has been successful');

END;

-- Excecution block

DECLARE

    ANO DEPOSIT.ACC_NO%TYPE;
    BALANCE DEPOSIT.BAL%TYPE;

BEGIN

    
    DBMS_OUTPUT.PUT_LINE('Enter your account number');
    ANO := :ANO;

    DBMS_OUTPUT.PUT_LINE('Enter amount');
    BALANCE := :BALANCE;

    DEBIT_CASH(ANO, BALANCE);

END;

select * from deposit;