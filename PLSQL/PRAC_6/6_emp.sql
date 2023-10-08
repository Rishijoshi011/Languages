-- CREATE TABLE EMPLOYEE(EMP_ID VARCHAR2(4),E_NAME VARCHAR2(10), SALARY NUMBER(7));

-- INSERT ALL
--     INTO EMPLOYEE VALUES('1001','Ankit','20000')
--     INTO EMPLOYEE VALUES('1002','Bhavin','40000')
--     INTO EMPLOYEE VALUES('1003','Chintan','60000')
--     INTO EMPLOYEE VALUES('1004','Devam','80000')
--     INTO EMPLOYEE VALUES('1005','Emma','100000')
-- SELECT * FROM DUAL;

-- TRUNCATE TABLE EMPLOYEE;

DECLARE 

    CURSOR EMP IS SELECT SALARY, EMP_ID FROM EMPLOYEE;

    SAL EMPLOYEE.SALARY%TYPE;
    ANO EMPLOYEE.EMP_ID%TYPE;

BEGIN

    OPEN EMP;

        IF EMP%ISOPEN THEN

            LOOP

                FETCH EMP INTO SAL, ANO;

                EXIT WHEN EMP%NOTFOUND;

                IF SAL <= 50000 THEN

                    UPDATE EMPLOYEE SET SALARY = SALARY + (SAL * 10) / 100 WHERE EMP_ID = ANO;

                ELSIF SAL > 50000 AND SAL < 70000 THEN

                    UPDATE EMPLOYEE SET SALARY = SALARY + (SAL * 15) /100 WHERE EMP_ID = ANO;

                ELSIF SAL >= 75000 THEN

                   UPDATE EMPLOYEE SET SALARY = SALARY + (SAL * 20) / 100 WHERE EMP_ID = ANO;     

                END IF;

            END LOOP;
        
        ELSE 

            DBMS_OUTPUT.PUT_LINE('Cursor is close');

        END IF;

    CLOSE EMP;
    
END;


-- SELECT * FROM EMPLOYEE;