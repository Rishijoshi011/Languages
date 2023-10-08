DECLARE

    CURSOR DEPT IS SELECT C_NAME, ACC_NO, BAL FROM DEPOSIT;

    U_NAME DEPOSIT.C_NAME%TYPE;
    ANO DEPOSIT.ACC_NO%TYPE;
    BALANCE DEPOSIT.BAL%TYPE;

BEGIN

    OPEN DEPT;

        LOOP

        IF DEPT%ISOPEN THEN
            DBMS_OUTPUT.PUT_LINE('Cursor is open');
       
            FETCH DEPT INTO U_NAME, ANO, BALANCE;
            
            EXIT WHEN DEPT%NOTFOUND;

            DBMS_OUTPUT.PUT_LINE('Holder name: ' || U_NAME || 'Account no is: ' ||  ANO || 'Balance is: ' || BALANCE);  

        ELSE
            DBMS_OUTPUT.PUT_LINE('Cursor is close');
        END IF;

        END LOOP;
END;

-- SELECT * FROM DEPOSIT;