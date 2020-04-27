import pylab
import numpy as np
import matplotlib.pyplot as plt

ax1=plt.subplot()
data = np.loadtxt("tochki.txt")
ax1.plot(data[:,0],data[:,1],'r.')
ax1.plot(data[:,0],data[:,1],lw=2)

def makeData():
    x = np.arange(-48, 48, 0.05)
    y = np.arange(-48, 48, 0.05)
    xgrid, ygrid = np.meshgrid(x, y)

    zgrid = -42 * xgrid - 12 * ygrid - 3 * xgrid*xgrid - 2 * ygrid*ygrid-158 
             
    return xgrid, ygrid, zgrid

if __name__ == '__main__':
    x, y, z = makeData()
    pylab.contour(x, y, z)

    pylab.show()