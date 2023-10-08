-- CREATE TABLE st_sem4(enr_no varchar2(6),name varchar2(20), s1_mark number, s2_mark number, s3_mark number, s4_mark number);

-- CREATE TABLE STUD_RESULT(enr_no varchar2(6), no_of_backlog number);

-- DROP TABLE STUD_RESULT;

-- INSERT ALL
--     INTO st_sem4 VALUES('1001','Ankit',20,17,12,28)
--     INTO st_sem4 VALUES('1002','Bhavik',25,28,22,17)
--     INTO st_sem4 VALUES('2001','Chintan',22,12,10,28)
--     INTO st_sem4 VALUES('2002','Deval',10,18,10,12)
--     INTO st_sem4 VALUES('2003','Hetvi',23,21,20,22)
--     INTO st_sem4 VALUES('3001','Mayuri',8,12,11,10)
--     INTO st_sem4 VALUES('3002','Vishal',17,10,14,18)
-- SELECT * FROM DUAL;

DECLARE 

    CURSOR ST4 IS SELECT S1_MARK, S2_MARK, S3_MARK, S4_MARK, ENR_NO FROM ST_SEM4;

    MARK1 ST_SEM4.S1_MARK%TYPE;
    MARK2 ST_SEM4.S2_MARK%TYPE;
    MARK3 ST_SEM4.S3_MARK%TYPE;
    MARK4 ST_SEM4.S4_MARK%TYPE;

    ENO ST_SEM4.ENR_NO%TYPE;
    I NUMBER(3);

BEGIN 

    OPEN ST4;

    LOOP

    IF ST4%ISOPEN THEN
        DBMS_OUTPUT.PUT_LINE('Cursor is open');

        FETCH ST4 INTO MARK1, MARK2, MARK3, MARK4, ENO;

        EXIT WHEN ST4%NOTFOUND;

        I := 0;

        IF MARK1 < 12 THEN
            I := I + 1;
        END IF;

        IF MARK2 < 12 THEN
            I := I + 1;
        END IF;

        IF MARK3 < 12 THEN
            I := I + 1;
        END IF;

        IF MARK4 < 12 THEN
            I := I + 1;
        END IF;

            INSERT INTO STUD_RESULT VALUES(ENO,I);
    
    END IF;

    END LOOP;

    CLOSE ST4;
END; 

-- SELECT  * FROM ST_SEM4;

-- SELECT * FROM STUD_RESULT;