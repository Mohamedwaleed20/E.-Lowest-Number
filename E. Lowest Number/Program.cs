using System;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        int min = int.MaxValue;
        int pos = 0;

        for (int i = 0; i < n; i++)
        {
            int num = Convert.ToInt32(nums[i]);
            if (num < min)
            {
                min = num;
                pos = i + 1;
            }
        }

        Console.WriteLine(min + " " + pos);
    }
}