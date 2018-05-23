""" Simple calendar application built to learn Python """

from time import sleep, strftime

USER_NAME = "amolmoses"
calendar = {}

def welcome():
    print("Welcome, %s!" % (USER_NAME))
    print("Calendar app is opening!")
    sleep(100)


