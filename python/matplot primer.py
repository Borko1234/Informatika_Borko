#Three lines to make our compiler able to draw:
import sys
import matplotlib
matplotlib.use('Agg')

import matplotlib.pyplot as plt
import numpy as np

x = np.array([2,3,4,5,6])
y = np.array([3,4,10,6,3])
plt.plot(x,y, '*:r',ms=20,mec='b',mfc='y',linewidth = '5')
font1 = {'family':'serif','color':'blue','size':20}
font2 = {'family':'serif','color':'darkred','size':15}
plt.title("Uspeh na test po istoriq 10D",fontdict = font1)
plt.ylabel("Broi na ocenkata",fontdict = font2)
plt.xlabel("Ocenka",fontdict = font2)
plt.show()

#Two  lines to make our compiler able to draw:
plt.savefig(sys.stdout.buffer)
sys.stdout.flush()
#primer2

import matplotlib.pyplot as plt
import numpy as np

x = np.array(['AE','Mat','BEL','IT','Muz','Geo','Ist','Bio','Him','Fiz','Inf','FVS','Fil','NE'])
y = np.array([2,6,3,1,1,3,3,2,2,2,3,2,2,2])
plt.plot(x,y, 'o-r',ms=10,mec='b',mfc='b',linewidth = '2')
font1 = {'family':'serif','color':'blue','size':20}
font2 = {'family':'serif','color':'darkred','size':15}
plt.title("Broi na uchebni chasove prez sedmicata",fontdict = font1)
plt.ylabel("Broi chasove",fontdict = font2)
plt.xlabel("Predmet",fontdict = font2)
plt.show(
