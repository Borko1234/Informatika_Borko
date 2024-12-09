using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Borko
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Car car = new Car();
            string make=Console.ReadLine();
            string model=Console.ReadLine();
            int year=int.Parse(Console.ReadLine());
            double fuelQuantity=double.Parse(Console.ReadLine());
            double fuelConsumption = double.Parse(Console.ReadLine());
            Car firstcar = new Car();
            Car secondcar=new Car(make,model,year);
            Car thirdcar=new Car (make,model,year,fuelQuantity,fuelConsumption);
        }
    }
}



--------


using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Borko
{
    public class Car
    {
		private string make;

		public string Make
		{
			get { return make; }
			set { make = value; }
		}
		private string model;

		public string Model { 
			get { return model; }
			set { model = value; }
		}
		private int year;

		public int Year
		{
			get { return year; }
			set { year = value; }
		}

		private double fuelQuantity;

		public double FuelQuantity
        {
			get { return fuelQuantity; }
			set { fuelQuantity = value; }
		}
		private double fuelConsumption;
		public Car()
		{
		}
		public Car(string make, string model, int year)
		{
			Make = make;
			Model = model;
			Year = year;
		}

        public Car(string make,  string model, int year, double fuelQuantity, double fuelConsumption)
        {
            Make = make;
            Model = model;
            Year = year;
            FuelQuantity = fuelQuantity;
            FuelConsumption = fuelConsumption;
        }

        public double FuelConsumption
        {
			get { return fuelConsumption; }
			set { fuelConsumption = value; }
		}
		public void Drive(double distance)
		{
			if (FuelQuantity-distance*FuelConsumption<0) Console.WriteLine("Not enough fuel to perform this trip!");
            Console.WriteLine(distance*fuelConsumption);
        }
		public string WhoAmI()
        {
			return $"Make: {this.Make}\nModel: {this.Model}\nYear: {this.Year}\nFuel: {this.FuelQuantity:F2}L" ;
		}
	}
}
