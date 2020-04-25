Основная идея метода заключается в том, чтобы осуществлять оптимизацию в направлении наискорейшего спуска, а это направление задаётся антиградиентом <img src="/readd/1.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/>:

<p align="center"><img src="/readd/2.gif?invert_in_darkmode&sanitize=true" align=middle width=386.2915617pt height=44.90601885pt/></p>

где <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=30.848120499999986pt height=20.76175259999998pt/> выбирается, в моем случае дробным шагом, т.е. длина шага в процессе спуска делится на некое число;

Градиентный метод с дроблением шага:

В этом варианте градиентного метода величина шага <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=30.848120499999986pt height=20.76175259999998pt/> на каждой итерации выбирается из условия выполнения неравенства

<p align="center"><img src="/readd/8.gif?invert_in_darkmode&sanitize=true" align=middle width=886.2915617pt height=60.90601885pt/></p>

где <img src="/readd/9.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> - некоторая заранее выбранная константа.

Процедуру нахождения такого <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> обычно оформляют так. Выбирается число <img src="/readd/11.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> и некоторый начальный шаг <img src="/readd/14.gif?invert_in_darkmode&sanitize=true" align=middle width=24.848120499999986pt height=30.76175259999998pt/>. Теперь для каждого k полагают <img src="/readd/12.gif?invert_in_darkmode&sanitize=true" align=middle width=80.848120499999986pt height=45.76175259999998pt/>


