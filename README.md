                                        # Лабораторная работа № 6. Безусловный экстремум.

Выполнил студент группы 427
Букеев Михаил Дмитриевич

## Вариант № 12
Здесь нужно полностью привести задание из билета (с формулами)

## Теоретическая часть


Основная идея метода заключается в том, чтобы осуществлять оптимизацию в направлении наискорейшего спуска, а это направление задаётся антиградиентом <img src="/readd/1.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/>:

<p align="center"><img src="/readd/2.gif?invert_in_darkmode&sanitize=true" align=middle width=386.2915617pt height=44.90601885pt/></p>

где <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=30.848120499999986pt height=20.76175259999998pt/> выбирается, в моем случае дробным шагом;

Градиентный метод с дроблением шага:

В этом варианте градиентного метода величина шага <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=30.848120499999986pt height=20.76175259999998pt/> на каждой итерации выбирается из условия выполнения неравенства

<p align="center"><img src="/readd/8.gif?invert_in_darkmode&sanitize=true" align=middle width=886.2915617pt height=60.90601885pt/></p>

где <img src="/readd/9.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> - некоторая заранее выбранная константа.

Процедуру нахождения такого <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> обычно оформляют так. Выбирается число <img src="/readd/11.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> и некоторый начальный шаг <img src="/readd/14.gif?invert_in_darkmode&sanitize=true" align=middle width=24.848120499999986pt height=30.76175259999998pt/>. Теперь для каждого k полагают <img src="/readd/12.gif?invert_in_darkmode&sanitize=true" align=middle width=80.848120499999986pt height=45.76175259999998pt/> и делают шаг градиентного метода. Если с таким <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> условие выполняется, то переходят к следующему k. Если же не выполняется, то умножают <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/> на <img src="/readd/13.gif?invert_in_darkmode&sanitize=true" align=middle width=16.848120499999986pt height=25.76175259999998pt/> ("дробят шаг") и повторяют эту процедуру до тех пор пока неравенство не будет выполняться. В условиях теоремы 1 эта процедура для каждого k за конечное число шагов приводит к нужному <img src="/readd/3.gif?invert_in_darkmode&sanitize=true" align=middle width=40.848120499999986pt height=25.76175259999998pt/>.

## Практическая часть
Описать структуру программы. Что делают функции программы? Какой у программы вывод? Каков порядок компиляции/запуска программы?

### Результаты
"В результате работы программы у функции ХХХ был найден экстремум в точке (-7;-3) (начальная точка (1:8)) за 38 итераций методом с точностью EE. Ниже приведен рисунок (рисункИ для случая функции трех переменных) с изображением линий уровня анализируемой функции и траектория поиска экстремума:".
Вставить рисунки. Обязательно проверяйте себя, найдите экстремум сами аналитически, либо в независимом сервисе (sympy, Maxima, Wolfram Alpha в конце концов). Иногда начальная точка может быть выбрана не оптимально. В этом случае ее нужно подвинуть так, чтобы Ваша программа работала и об этом тоже подробно рассказать в отчете.



