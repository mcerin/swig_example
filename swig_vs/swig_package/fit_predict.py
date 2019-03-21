import swig_vs as sv
import numpy as np

class HoeffdingTree():
    def __init__(self):
        self.tree = sv.Fit_predict()

    def partial_fit(self, X, y):
        self.tree._partial_fit(X, y)

    def predict(self, X):
        return self.tree._predict(X, len(X))
