-- SET AUTO OFF;
DECLARE

    ANO DEPOSIT.ACC_NO%TYPE;
    AMOUNT DEPOSIT.BAL%TYPE;

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter your account number');
    ANO := :ANO;

    DBMS_OUTPUT.PUT_LINE('Enter your Amount');
    AMOUNT := :AMOUNT;

   UPDATE DEPOSIT SET BAL = AMOUNT WHERE ACC_NO = ANO;

END;

-- SELECT * FROM DEPOSIT;

-- INSERT INTO DEPOSIT VALUES('Dustin','New Jersy',66738,'7844','Dustin@gmail.com','77568');