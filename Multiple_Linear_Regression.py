from sklearn import linear_model

m, n = [int(e) for e in input().split(" ")]
y = []
x = []
for i in range(n):
    x.append([float(e) for e in input().split(" ")])
    y.append(x[i][m])
    x[i].pop()

q = int(input())


lm = linear_model.LinearRegression()
lm.fit(x, y)
a = lm.intercept_
b = lm.coef_

for i in range(q):
    res = a
    z = ([float(e) for e in input().split(" ")])
    for i in range(m):
        res += b[i] * z[i]
    print(str(res))
