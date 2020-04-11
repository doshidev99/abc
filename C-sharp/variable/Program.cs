using System;

namespace variable {
    class Program {
        static void Main (string[] args) {
            // int float string bool char
            Console.WriteLine ("Hello World!");
            // int? a = null;
            // float vFloat = 10.9f;
            // decimal vDecimal = 10.9m;
            #region  variable
            int h, k, t;
            h = k = t = 10;
            Console.WriteLine ("h = {0}, k ={1}, t = {2}", h, k, t);
            h += k = t = 5;
            Console.WriteLine ("h = {0}, k ={1}, t = {2}", h, k, t);
            Console.WriteLine ("t={0}", t);
            #endregion

            #region constraint data types 
            // simple (float)
            //1. Parse ()
            string s = "10";
            int afterParse = int.Parse (s);
            #endregion
            //2. TryParse()
            // int.TryParse(data, out result); // return status after parse
            //3. Convert.
            Console.ReadKey ();
        }
    }
}