import os
for (root, dirs, files) in os.walk(r'C:\Users\Craig Hinkley'):
    if len(dirs)+len(files) == 0:
        print (root)
