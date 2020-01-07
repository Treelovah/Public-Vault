import argparse
import os


class Terminal:
    def __init__(self):
        self.parser = argparse.ArgumentParser()
        self.args = argparse.ArgumentParser().parse_args()


Terminal()
