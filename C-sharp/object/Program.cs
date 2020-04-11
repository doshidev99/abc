using System;

namespace type_object {
    class Program {
        static void Main (string[] args) {
            #region boxing
            //reference heap
            int value = 1999;
            object objectValue = value;
            // unboxing
            int newValue = (int) objectValue;
            #endregion
            #region dynamic
            string name = "japan";
            dynamic dynamicName = name;
            Console.WriteLine ("dynamicName: " + dynamicName);
            #endregion
            
            Console.ReadKey ();
        }
    }
}