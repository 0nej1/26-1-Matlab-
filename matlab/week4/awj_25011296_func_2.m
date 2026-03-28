function [t1, t2] = awj_25011296_func_2(h,v0,g)
d = v0.^2 - 2*g*h;
t1 = (v0-sqrt(d))/g;
t2 = (v0+sqrt(d))/g;
end