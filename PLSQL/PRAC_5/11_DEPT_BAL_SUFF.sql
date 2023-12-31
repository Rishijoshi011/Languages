-- SET AUTO OFF;
DECLARE

    ANO DEPOSIT.ACC_NO%TYPE;
    AMOUNT DEPOSIT.BAL%TYPE;
    BAL_CHECK DEPOSIT.BAL%TYPE;
BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter your account number');
    ANO := :ANO;

    DBMS_OUTPUT.PUT_LINE('Enter your Amount');
    AMOUNT := :AMOUNT;

    SELECT BAL INTO BAL_CHECK FROM DEPOSIT WHERE ACC_NO = ANO;

    BAL_CHECK := BAL_CHECK - AMOUNT; -- 4000 = 4000 - 2000 = 2000
    
    IF BAL_CHECK < 0 OR BAL_CHECK < AMOUNT THEN      
        DBMS_OUTPUT.PUT_LINE('NOT SUFFICENT BALANCE');           
    ELSE
        UPDATE DEPOSIT SET BAL = BAL_CHECK WHERE ACC_NO = ANO;    
    END IF; 


END;

SELECT * FROM DEPOSIT;

-- INSERT INTO DEPOSIT VALUES('Dustin','New Jersy',6600,'7844','Dustin@gmail.com','77568');

-- DELETE FROM DEPOSIT WHERE C_NAME = 'Dustin'; 

 -- 6600 > = 6600 - 600 | -- 6600 < = 6600 - 7000
 -- 6600 > = 6000       | -- 6600 < = -400

 -- 7000  7000 = 7000 - 4000 = 3000
 -- 8000
 -- - 1000