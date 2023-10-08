DECLARE

    PI CONSTANT DECIMAL(3,2) := 3.14;
    RADIUS DECIMAL(3,2);
    ANS DECIMAL(3);
BEGIN
    
    DBMS_OUTPUT.PUT_LINE('Enter radius of the circle');
    RADIUS := &RADIUS;

    ANS := PI * RADIUS * RADIUS;
    DBMS_OUTPUT.PUT_LINE('Area of Circle is: ' || ANS);

END;