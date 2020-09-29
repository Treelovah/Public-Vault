import unittest
from EzMath import EzMath

func_test = EzMath(3, 2)


class MyTestCase(unittest.TestCase):
    def test_sum(self):
        self.assertEqual(func_test.sum(), 5)

    def test_difference(self):
        self.assertEqual(func_test.difference(), 1)

    def test_product(self):
        self.assertEqual(func_test.product(), 6)


if __name__ == '__main__':
    unittest.main()
