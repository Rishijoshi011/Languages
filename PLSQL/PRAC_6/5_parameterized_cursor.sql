DECLARE

    CURSOR DEPT(MIN_BAL DEPOSIT.BAL%TYPE) IS SELECT C_NAME, ACC_NO, BAL FROM DEPOSIT WHERE BAL < MIN_BAL; 

    U_NAME DEPOSIT.C_NAME%TYPE; 
    ANO DEPOSIT.ACC_NO%TYPE;
    NEW_BALANCE DEPOSIT.BAL%TYPE;

    FINAL_BAL DEPOSIT.BAL%TYPE;

BEGIN
   
    OPEN DEPT(3000);

        IF DEPT%ISOPEN THEN
        
            LOOP

                FETCH DEPT INTO U_NAME, ANO, NEW_BALANCE;

                EXIT WHEN DEPT%NOTFOUND;

                 FINAL_BAL := 3000 - NEW_BALANCE;

                DBMS_OUTPUT.PUT_LINE('HELLO ' || U_NAME || ' your account number is: ' || ANO || ' You have Rs. '|| FINAL_BAL || ' less in your bank account to satisfy minimum balance requirement.');

            END LOOP;

        ELSE

            DBMS_OUTPUT.PUT_LINE('Cursor is close');

        END IF;        

END;

-- SELECT  * FROM DEPOSIT;