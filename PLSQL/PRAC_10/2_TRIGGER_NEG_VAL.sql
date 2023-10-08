-- CODE FOR THE TRIGGER. NEW TRIGGER WAS CREATED FOR THE USE OF IT. NEG_BALANCE2

CREATE OR REPLACE TRIGGER NEG_BALANCE
BEFORE
INSERT 
ON DEPOSIT
REFERENCING NEW AS NEW
FOR EACH ROW 
BEGIN

    IF :NEW.BAL < 0 THEN
        RAISE_APPLICATION_ERROR('Balance can''t be negative',-1400);
    ELSE
        DBMS_OUTPUT.PUT_LINE('Row inserted successfully');
    END IF;

END;

-- EXCECUTION CODE  THIS CODE IS PERFORMED ON DIFF TABLE DEPOSIT2

DECLARE

    U_NAME DEPOSIT.C_NAME%TYPE;
    BRANCH DEPOSIT.B_NAME%TYPE;
    BALANCE DEPOSIT.BAL%TYPE;
    ANO DEPOSIT.ACC_NO%TYPE;
    EMAIL DEPOSIT.EMAIL_ID%TYPE;
    NO DEPOSIT.MOB_NO%TYPE;

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter name');
    U_NAME := :U_NAME;

    DBMS_OUTPUT.PUT_LINE('Enter branch name');
    BRANCH := :BRANCH;

    DBMS_OUTPUT.PUT_LINE('Enter balance');
    BALANCE := :BALAMCE;

    DBMS_OUTPUT.PUT_LINE('Enter account no');
    ANO := :ANO;

    DBMS_OUTPUT.PUT_LINE('Enter email id');
    EMAIL := :EMAIL;
    
    DBMS_OUTPUT.PUT_LINE('Enter mobile no');
    NO := :NO;
    
    INSERT INTO DEPOSIT VALUES(U_NAME, BRANCH, BALANCE, ANO, EMAIL, NO); 

END;

-- SELECT * FROM DEPOSIT;

-- CREATE TABLE deposit2
-- (
--     c_name varchar2(18) NOT NULL,
--     b_name varchar2(18) NOT NULL,
--     bal number(8,2),
--     acc_no varchar2(10),
--     email_id varchar2(40),
--     mob_no number(10),
--     PRIMARY KEY(acc_no),
--     UNIQUE(email_id,mob_no)
-- ); 

-- DROP TABLE DEPOSIT2;