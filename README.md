# Group 13
Meia Richelle T. Go, Yesha P. Llorando

### Execution time:
10x10: 0.000ms<br>
100x100: 0.0044ms<br>
1000x1000: 0.4746ms<br>

### Short analysis:
Through the 30 test cases used in timing the assembly function, it is evident that the execution time grows as the input image size gets larger. This is due to the various operations that are performed in the assembly function imgCvtGrayFloatToInt(). The function performs several loops to multiply each value with the corresponding data to get the converted integer value. There are also constraints placed to ensure that the C interface is able to print out the correct values. Thus, processing larger image sizes attributes to a longer execution time.  

### Screenshot of output:

![image](https://github.com/user-attachments/assets/19aa7429-b140-4c66-9c3a-08600d6f8970)


### Demo Video:
[[Link to short video]](https://drive.google.com/file/d/1sKIrLvIi5dGMdP673BKnSmyVENC4Awxw/view?usp=sharing)
