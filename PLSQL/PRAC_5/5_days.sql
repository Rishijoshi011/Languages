DECLARE

    DAY VARCHAR2(20);

BEGIN

    DBMS_OUTPUT.PUT_LINE('Enter name of the day');
    DAY := :DAY;

    IF DAY = 'MONDAY' OR DAY = 'TUESDAY' OR DAY = 'WEDNESDAY' OR DAY = 'THURSDAY' OR DAY = 'FRIDAY' THEN
        DBMS_OUTPUT.PUT_LINE('FULLDAY');
    ELSIF DAY = 'SATURDAY' THEN
        DBMS_OUTPUT.PUT_LINE('HALFDAY');
    ELSIF DAY = 'SUNDAY' THEN
        DBMS_OUTPUT.PUT_LINE('HOLIDAY');
    ELSE 
        DBMS_OUTPUT.PUT_LINE('Enter valid day');
    END IF;
END;