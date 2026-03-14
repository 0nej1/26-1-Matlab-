x = 0 : 0.01 : 2;
u = 3 * log10(70 * x + 1);
v = 4 * cos(7 * x);

plot(x,u)
hold on
plot(x,v)
xlabel('거리(mile)')
ylabel('속도(mile/hour)')
legend('u = 3log_{10}(70x+1)', 'v = 4cos(7x)')
grid on