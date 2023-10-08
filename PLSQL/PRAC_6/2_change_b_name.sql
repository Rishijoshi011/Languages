BEGIN

    UPDATE DEPOSIT SET B_NAME = 'gnagar' WHERE B_NAME = 'Ahmedabad';

    IF SQL%FOUND THEN
            DBMS_OUTPUT.PUT_LINE('Record is found');
        ELSE
            DBMS_OUTPUT.PUT_LINE('Record is not found');
    END IF;
END;

SELECT * FROM DEPOSIT;