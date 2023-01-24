highest precedence:
    !
    > >= < <=
    == !=
    &&
    ||

    when we use ++ (or--) in subscripted variables. That is the statement:
        a[i++] = 10;
        is equvalent to
        a[i]= 10;
        i = i+10;

        complex statement:
            m = n++ -j+10;

            exp1 ? exp2 : exp3
