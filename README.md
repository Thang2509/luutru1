public void AStarSearch()
{
    while (!OPEN.isEmty())
    {
        Element Tmax = OPEN.deQueue();

        // nếu đã có đường tốt hơn thì bỏ
        if (CLOSE[Tmax.Tendinh] != null && Tmax.G > CLOSE[Tmax.Tendinh].G)
            continue;

        CLOSE[Tmax.Tendinh] = Tmax;

        if (Tmax.Tendinh == dt.Goal)
        {
            Console.WriteLine("Tim duoc duong di...");
            return;
        }
        else
        {
            for (int tk = 0; tk < dt.SoDinh; tk++)
            {
                if (dt.Matrix[Tmax.Tendinh, tk] <= 0)
                    continue;

                int tk_g = Tmax.G + dt.Matrix[Tmax.Tendinh, tk];

                // nếu CLOSE có đường tốt hơn thì bỏ
                if (CLOSE[tk] != null && tk_g >= CLOSE[tk].G)
                    continue;

                double tk_h = dt.DsPoint[tk].h(dt.DsPoint[dt.Goal]);
                double tk_f = tk_g + tk_h;

                bool foundInOpen = false;

                // 🔥 kiểm tra OPEN trực tiếp
                for (int i = 0; i < OPEN.noItems; i++)
                {
                    if (OPEN.arr[i].Tendinh == tk)
                    {
                        foundInOpen = true;

                        // nếu tìm được đường tốt hơn thì update
                        if (tk_g < OPEN.arr[i].G)
                        {
                            OPEN.arr[i].G = tk_g;
                            OPEN.arr[i].F = tk_f;
                            OPEN.arr[i].Pre = Tmax.Tendinh;
                        }
                        break;
                    }
                }

                // nếu chưa có trong OPEN thì thêm
                if (!foundInOpen)
                {
                    Element TkElmt = new Element(tk, tk_g, tk_f, Tmax.Tendinh);
                    OPEN.enQueue(TkElmt);
                }
            }
        }
    }

    Console.WriteLine("Khong tim duoc duong di");
}
