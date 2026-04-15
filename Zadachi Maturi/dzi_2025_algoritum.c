using System;
using System.Linq;
using System.Collections.Generic;

public class Program
{
	public static void Main()
	{
		int n= int.Parse(Console.ReadLine());
		string a;
	 	List<int> chisla=new List<int> ();
	 	int sum=0;
	 	int result; 
		do
		{
		a = Console.ReadLine();
		sum=a.Split("-").Select(int.Parse).Sum();
		while(sum>9&&sum!=11&&sum!=22)
		{
		int NewSum= 0;
			while(sum>0)
			{
				NewSum+= sum % 10;
				sum/=10;
			}
		sum=NewSum;
			
		}
		
		chisla.Add(sum);
		n=n-1;
		}
		while (n!=0);
		result=chisla.GroupBy(x => x).OrderByDescending(g => g.Count()).First().Key;
		Console.WriteLine(result);
		}
}
