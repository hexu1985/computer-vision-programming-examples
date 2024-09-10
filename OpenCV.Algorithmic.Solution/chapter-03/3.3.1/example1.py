# -*- coding: utf-8 -*-
import math

# 以(11,13)及(3,5)为中心进行极坐标变换 
r = math.sqrt(math.pow(11-3,2)+math.pow(13-5,2))
theta = math.atan2(13-5,11-3)/math.pi*180   # 转换为角度
print((r, theta))
