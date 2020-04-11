using System;

namespace note {
    class Program {
        static void Main (string[] args) {
            // #region goto
            // goto Country;
            // Console.WriteLine ("Japan");
            // Country:
            //     Console.WriteLine ("go to Country Japan");
            // #endregion
            int n = 10;
            int m = 20;
            for (int x = 0; x <= n; x++) {
                for (int y = 0; y <= m; y++) {
                    Console.WriteLine (y);
                    // if (x == 0 || x == n || y == 0 || y == m) {
                    //     Console.Write ("*");
                    // } else {
                    //     Console.Write (" ");
                    // }
                }
                Console.WriteLine (x);
                Console.WriteLine ();
            }
        }
    }
}