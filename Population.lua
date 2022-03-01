r = 3
x = 0.3

print(x)

for i = 0,10 do
    x = r * x * (1-x)
    print(x)
end