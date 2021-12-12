# Leetcode1
## 贪心算法
### 10.Container With Most Water
储存最大容量的水要用到贪心算法即从最长的宽（用双指针的技巧由两头向中间逼近）开始进行选择，面积是宽×高，一直取最大面积，然后比较双边的高度（左边矮：i++；反之：j--；），最后当j>i就可以求出最大的面积。这题用贪心算法的妙处就是可以一直取最好的选择，舍弃不好的选项，然后求出目标值。
### 122.Best Time to Buy and Sell Stack
求最好的时间买和卖股票很符合贪心算法的性质。我是重新构造了一个数组即：将后一天的价值减去前一天的价值，这样求出的数有正有负。然后用贪心算法不停地取正值相加，舍弃负值和0，最后求出最大利润
，如果没有正值，则返回0.运行时间为O（n）。
### 135.Candy
每个孩子都很贪心，都不允许比自己分低的人拿到比自己多的糖果，每人最少都要有一个糖果，最后还要让糖果总量最小。所以我选择了用两次遍历的方法，一次从前向后，一次从后向前。第一次是要和前面一位的孩子比，如果分比他高，糖果就加一。第二次是要修正因为第一次遍历所造成的错误，就是后面的孩子分低却拿了比前面一位孩子多的糖果，就要让前面一位孩子拿到比后面一位孩子多一个的糖果。
### 406.Queue Reconstruction by Height
按身高排序的另类问题，这题要求在前面并且比自己高的人要符合序号。所以我对二维数组进行了排序，第一关键字是身高按降序排，第二关键字是序号按升序排，然后依次插入进新数组。排序的目的是为了在插入过程中新插入的元素不会改变前面插入元素的序号，所以我们可以只考虑将新元素放在最优的位置，从局部最优完全可以推出全体最优，于是数组重新排序完成。
## 双指针算法
### 26. Remove Duplicates from Sorted Array
删除重复的元素，并在数组结尾用0补齐删除所空出的空间。这题可能要三个指针，i指向numsSize-1，j指向numsSize-2，pos指针指向numsSize-1.for语句令i，j指针向下遍历，遇到相同的两个元素，删除掉后一个元素，然后将后面的元素都向前提一格，最后将pos指针所指的元素赋值为0，然后pos--。
### 88. Merge Sorted Array
合并两个排好序的数组，一个合并两个排好序的数组到较长的那个数组中（删除长数组比短数组多的元素再合并）。要用到三个指针，两个指针来遍历，一个指针来赋值。和上题类似。
## 排序算法
### 215.数组中的第k个最大元素
快速选择的直接使用，主要是是用来练习快速选择的熟练度。
### 75. Sort Colors
可以使用快速排序，先选择2作为枢纽元，再选择1作为枢纽元。
## 二分查找
### 33. Search in Rotated Sorted Array
这题用二分查找是最快的，因为在分半查找之后一定会出现有一半的数组是递增排序的，然后在这一半有序数组中就很容易查找target，找不到就去另外一半去查找。
### 34. Find First and Last Position of Element in Sorted Array
二分查找可以最快地接近目标值，然后在目标值地左右查找与其相同地元素，再返回。
### 69. Sqrt(x)
先设mid=(0+x)/2,sprt=x/mid,如果sqrt=mid,则算术平方根就是mid,如果sqrt>mid在上半个数组中继续查找，否则在下半个数组中继续查找。由于算术平方根通常小于x/2，我就直接在（0，x/2）中查找。
### 81. Search in Rotated Sorted Array II
33题的类似题，程序几乎是相同的，但是多了一步：遇到头尾元素相同无法判断是否哪半个数组是递增数组时，进行i++操作。




，
