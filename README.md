                                        # Лабораторная работа № 6. Безусловный экстремум.

Выполнил студент группы 427
Букеев Михаил Дмитриевич

## Вариант № 12
Найти точку максимума функции <p align="center"><img src="/readd/Tex2Img_1588007010.jpg?invert_in_darkmode&sanitize=true" align=middle width=386.2915617pt height=44.90601885pt/></p> градиентным методом с дроблением шага.

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
В программе используются 3 функции 

первая основая функция из условия 

double f(double x, double y)

вторая и третья это производные по каждой переменной

double gradX(double x, double y)

double gradY(double x, double y)

Используются цикл для нахождения максимума и программа выводит координаты максимума заданной функции.

while(L > 0.005)
  
  {
  
      double gx = gradX(x, y);
      
      double gy = gradY(x, y);
      
      double nx = x + L*gx;
      
      double ny = y + L*gy;
      
      double nf = f(nx, ny);
      
      if( nf >= (fv + 0.5*L*(gx*gx + gy*gy)) )
      
      {
      
         x = nx;
         
         y = ny;
         
         fv = nf;
         
      }
      
      else
      
      {
      
         L = L * 0.5;
         
      }

   }


### Результаты
В результате работы программы у функции <p align="center"><img src="/readd/Tex2Img_1588007010.jpg?invert_in_darkmode&sanitize=true" align=middle width=250.2915617pt height=45.90601885pt/></p> был найден экстремум в точке (-7;-3) (начальная точка (1;8)) за 38 итераций градиентным методом с дроблением шага с точностью 1e-5 . Ниже приведен рисунок.


<p align="center"><img src="/readd/Figure.png?invert_in_darkmode&sanitize=true" align=middle width=386.2915617pt height=44.90601885pt/></p>





