import random as r
import sys
import os
from datetime import  *

r = r.randint

[os.system("git commit --allow-empty --date='%s' --author='%s' -am a"  % ((date.today() + timedelta(x)).strftime("%DT%R"), sys.argv[2])) for x in range(int(sys.argv[1])) for i in range(1,r(2,10))]

[os.system("git commit --allow-empty --date='%s' --author='%s' -am a"  % ((date.today() - timedelta(x)).strftime("%DT%R"), sys.argv[2])) for x in range(int(sys.argv[1])) for i in range(1,r(2,10))]
