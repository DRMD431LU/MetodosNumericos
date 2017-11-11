# -*- coding: utf-8 -*-
"""
Created on Tue Oct 31 17:26:02 2017

@author: DRMD
"""

from tkinter import *
from tkinter import messagebox
from sympy import *
from sympy import sympify
from sympy.plotting import plot
from scitools import *

def biseccion(a,b,expr,count):
    expr=expr
    if(count<0):
        return -1
    c=(abs(b+a)/2)
    fa=expr.subs({x:a})
    fb=expr.subs({x:b})
    fc=expr.subs({x:c})
    print("n={} **** a={} **** b={}**** c={}****\nfa={}*** fb={} **** fc={} ****\n".format(count,a,b,c,fa,fb,fc))
    if(fc>0):
        a=c
        biseccion(a,b,expr,count-1)
    elif(fc<0):
        b=c
        biseccion(a,b,expr,count-1)
    else:
        messagebox.erroralert("Ocurrio un error en las evaluaciones")
        #print("Ocurrio un error en las evaluaciones")
        count=-1

x,y,z=symbols('x,y,z')

#pprint(exp(sqrt(x))-(x**2)*log(x))

#expr=sympify(10*exp(x/2)*cos(2*x)-4)

expr=sympify(exp(sqrt(x))-(x**2)*log(x))
#pprint(expr)
#print(solve(exp(sqrt(x))-(x**2)*log(x)))
#print (fa(2,expr))
#plot(expr)

'''
def fa(a,expr):
    
    fx=expr.subs({x:a})
    #(exp(1/2)-(x**2)*log(x)))
    return fx

def fb(b,expr):
    fx=expr.subs({x:b})
    return fx
    
def xr(a,b):
    c=(abs(b-a)/2)
    return c;
''' 

biseccion(0.1,4,expr,5)
plot(expr)
'''    
xr=biseccion(1,2)
if (fa(a) * fxr(xr)<0):
    b=xr
elif (fa(a)* fxr(xr)>0):
    a=xr
    
def errA():
    ea = abs((xn-xa)/xn)*100
    return ea

'''