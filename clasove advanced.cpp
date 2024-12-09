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
