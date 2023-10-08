-- CODE FOR THE TRIGGER

CREATE OR REPLACE TRIGGER ZERO_LOAN2
AFTER
UPDATE
ON LOAN2
REFERENCING NEW AS NEW  
FOR EACH ROW
DECLARE

    ID_LOAN LOAN2.LOAN_ID%TYPE;
    CUSTOMER LOAN2.C_NAME%TYPE;
    BAL LOAN2.AMOUNT%TYPE;
    ANO LOAN2.ACC_NO%TYPE;

BEGIN

    IF :NEW.AMOUNT = 0 THEN

        SELECT LOAN_ID, C_NAME, AMOUNT, ACC_NO INTO ID_LOAN, CUSTOMER, BAL, ANO FROM LOAN2 WHERE :OLD.ACC_NO = ANO; 
        
        INSERT INTO LOAN_DEACTIVE VALUES(ID_LOAN, CUSTOMER, BAL, ANO);    

        DELETE FROM LOAN2 WHERE :OLD.ACC_NO = ANO;

    END IF;    

END;

-- EXCECUTION CODE

DECLARE

    ANO LOAN2.ACC_NO%TYPE;
    BAL LOAN2.AMOUNT%TYPE;

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter account no.');
    ANO := :ANO;

    DBMS_OUTPUT.PUT_LINE('Enter amount for the loan');
    BAL := :BAL;

    UPDATE LOAN2 SET AMOUNT = AMOUNT - BAL WHERE ACC_NO = ANO;

END;

-- create table loan2
-- (
--     loan_id varchar2(18),
--     c_name varchar2(18) not null,
--     amount number(8,2) not null,
--     acc_no varchar2(10),
--     PRIMARY KEY(loan_id),
--     FOREIGN KEY(acc_no) REFERENCES deposit(acc_no)
-- );
-- drop table loan_deactive;
-- SELECT * FROM LOAN2;

-- SELECT * FROM LOAN_DEACTIVE;

-- INSERT INTO LOAN2 VALUES('5093', 'Max', 5000, '8377');

-- Max San Diago 21000 8377 max@gmail.com 48333