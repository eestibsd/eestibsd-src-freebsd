#!/usr/bin/local/python3
import os

ROOT_EXECUTABLE=False
ROOT_ADVANCED_EXEC=False

def method1(nd):
  def main():
    d = os.system("./bin/rootx")
    if (d==True):
      os.system("su")
    if (d):
      os.system("fsinit")
    return nd
  if (ROOT_EXECUTABLE):
    def retr():
      app = main()
      return app
  main()
