import unittest

def lwsum(a,b):
    i = a + b 
    return i

def lwsub(c,d):
    j = c - d
    return j



class mylwclass(unittest.TestCase):
	# test case == method 
    def test_mylw1(self):
        self.assertEqual( lwsum(3,5) , 8,  msg="if test fail, contact to LW dev ..." )  # test case 
       

    def test_mylw2(self):
        self.assertEqual( lwsub(5,2) , 7,  msg="if test fail, contact to LW dev ..." )  # test case 



 