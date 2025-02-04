import string
#def ph(c):
#    s = string.ascii_letters + string.digits + string.punctuation
#    return r'{\vphantom{%s}\texttt{%s}}' % (s, c)

from latextool_basic import *
m = [['I','t','w','a','s','','a'] + ['' for i in range(21-7)],
     ['d','a','r','k'] + ['' for i in range(21-4)],
     ['' for i in range(21)],
     ['' for i in range(21)],
     list('and  "stormy"  night '),
     ['' for _ in range(21)],
]

# replace with spaces
m = [[' ' for c in row] for row in m]
m[0][0] = 'I'

p = Plot()
C = table2(p, m, rowlabel='x', collabel='y',
           do_not_plot=True,rownames=[], colnames=[])

import string
def f(r, c, ch, background='blue!20', vphantom=string.printable):
    x0,y0 = C[r][c].bottomleft()
    x1,y1 = C[r][c].topright()
    return Rect(x0=x0, y0=y0, x1=x1, y1=y1,
                background=background,
                label=ph(ch),
                linewidth=0)

x0,y0 = C[0][2].bottomleft()
x1,y1 = C[0][2].topright()
p += Rect(x0=x0, y0=y0, x1=x1, y1=y1,
          background='blue!20',label=r'\texttt{ }', linewidth=0)

#x0,y0 = C[0][6].bottomleft()
#x1,y1 = C[0][6].topright()
#p += Rect(x0=x0, y0=y0, x1=x1, y1=y1,
#          background='blue!20',label=r'\texttt{ }', linewidth=0)

x0,y0 = C[1][0].bottomleft()
x1,y1 = C[1][0].topright()
p += Rect(x0=x0, y0=y0, x1=x1, y1=y1,
          background='blue!20',label=r'\texttt{ }', linewidth=0)

x0,y0 = C[3][1].bottomleft()
x1,y1 = C[3][1].topright()
p += Rect(x0=x0, y0=y0, x1=x1, y1=y1,
          background='blue!20',label='', linewidth=0)

x0,y0 = C[4][5].bottomleft()
x1,y1 = C[4][5].topright()
p += Rect(x0=x0, y0=y0, x1=x1, y1=y1,
          background='blue!20', label=r'\texttt{ }', linewidth=0)

x0,y0 = C[4][15].bottomleft()
x1,y1 = C[4][15].topright()
p += Rect(x0=x0, y0=y0, x1=x1, y1=y1,
          background='blue!20',label=r'\texttt{ }', linewidth=0)

# Draw table one more time to get border of C[1][4] correct
table2(p, m, rowlabel=None, collabel=None,
rownames=[r'\texttt{%s}' % r for r in range(0, 6)],
colnames=[r'\texttt{%s}' % r for r in range(0, 21)])
print(p)

