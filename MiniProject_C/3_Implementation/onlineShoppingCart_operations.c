#include <onlineShoppingCart_operations.h>

int cost_of_laptop(int choice){
if(choice==1)
   return 35500;
else if(choice==2)
    return 60990;
else if(choice==3)
    return 268990;
else if(choice==4)
    return 42455;
}

int cost_of_book(int choice){
 if(choice==1)
    return 762;
 else if(choice==2)
    return 474;
 else if(choice==3)
    return 990;
}

int cost_of_mobile(int choice){
if(choice==1)
    return 71600;
else if(choice==2)
    return 41999;
else if(choice==3)
    return 97999;
}

int cost_of_camera(int choice){
if(choice==1)
    return 140556;
else if(choice==2)
    return 264990;
else if(choice==3)
    return 74135;
}

 void onlineShopping(){
 static int totalCost;
 int i,choice,c=1,a[15],cost[15];
 for(i=0;i<13;i++)
 a[i]=0;

 char str[100] = "Christy";
 char items[13][100]={"Lenovo Ideapad S145 AMD A6-9225",
 "ASUS TUF Gaming FX505DT",
 "Dell Alienware m15(R3)",
 "HP 15s Thin and Light Laptop",
 "Think Like a Monk",
 "The Alchemist",
 "Harry Potter and the Philosopher's Stone",
 "Apple iPhone 11",
 "OnePlus 8",
 "Samsung Galaxy S20 Ultra",
 "Sony Alpha A7RM2",
 "Canon EOS 5D Mark IV",
 "Nikon D7500"
 };
 printf("Hello %s, Welcome to our Online Shopping.\n",str);
 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - Laptops\n2 - Books\n3 - Mobiles\n4 - Camera\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int laptopChoice;
    printf("Enter\n1 - Lenovo Ideapad S145 AMD A6-9225 - Rs.35,500\n2 - ASUS TUF Gaming FX505DT - Rs.60,990\n3 - Dell Alienware m15(R3) - Rs.2,68,990\n4 - HP 15s Thin and Light Laptop - Rs.42,455\nAny other number to exit\n");
    scanf("%d",&laptopChoice);
    cost[laptopChoice-1]=cost_of_laptop(laptopChoice);
    switch(laptopChoice)
    {
     case 1:
     {
      int num;
      printf("You selected Lenovo Ideapad S145 AMD A6-9225 with Rs.35500\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=35500;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - Processor: AMD A6-9225 processor, base speed 2.6 Ghz, max speed 3 Ghz, 2 Cores, 1 MB smart cache\n");
      printf("\t2 - Operating System: Pre-loaded Windows 10 with lifetime validity\n");
      printf("\t3 - Display: 15.6-inch screen with (1366X768) HD display | Anti Glare technology\n");
      printf("\t4 - Memory and Storage: 4GB RAM | Storage: 1 TB HDD\n");
      printf("\t5 - Design and battery: Thin and light Laptop| 180 Degree Hinge| Laptop weight 1.85kg\n");
      printf("\t6 - This genuine Lenovo Laptop comes with 1 year onsite domestic warranty\n");
      printf("\t7 - Inside the box: Laptop, Charger, User Manual\n");
      printf("To buy enter 1");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=35500;
       printf("Your Cost in Cart is %d\n",totalCost);
      }
      }
      break;
     }
     case 2:
     {
      int num;
      printf("You selected ASUS TUF Gaming FX505DT with Rs.60990\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=60990;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - Processor: AMD Ryzen 5-3550H processor, 2.1GHz Base speed (6MB cache, up to 3.7GHz)\t\n");
      printf("\t2 - Memory & Storage: 8GB DDR4 2400MHz RAM upgradeable upto 32GB RAM\n");
      printf("\t3 - Display: 15.6 inch (16:9) LED-backlit FHD (1920x1080) 120Hz Anti-Glare IPS-level Panel with 45% NTSC\t\n");
      printf("\t4 - Operating System: Pre-loaded Windows 10 Home with lifetime validity\t\n");
      printf("\t5 - Design & battery: 6.5mm Thin bezel | Laptop weight 2.20kg | Lithium battery 3-Cell\t\n");
      printf("\t6 - Hypercool Technology: Anti-Dust Cooling | Powerful Dual Fan Design | HyperFan| Patented Trapezoid-cut Lid\n");
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
       a[1]++;
       totalCost+=60990;
       printf("Your Cost in Cart is %d\n",totalCost);
        }
      }
      break;
     }
     case 3:
     {
      int num;
      printf("You selected Dell Alienware m15(R3) with Rs.2,68,990\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=268990;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - Processor:10th Gen Intel Ci7-10750H Processor(12MB Cache, up to 5.1 GHz, 6 cores)\n");
      printf("\t2 - Memory & storage:16GB DDR4 2666MHz | 1TB M.2 PCIe NVMe Solid state drive\n");
      printf("\t3 - Display:15.6 inch OLED UHD (3840 x 2160) 60Hz 1ms 400-nits 100% DCI-P3 color gamut+ Tobii Eyetracking technology\n");
      printf("\t4 - Graphics:NVIDIA GeForce RTX 2070 8GB GDDR6\n");
      printf("\t5 - Operating System & Software:Windows 10 Home Plus Single Language | Microsoft Office Home and Student 2019\n");
      printf("\t6 - Design:Magnesium Alloy exterior shell & copper alloy thermal components,Alienware Cryo-Tech Cooling technology\n");
      printf("\t7 - Keyboard & Battery:RGB per key Keyboard | 6-Cell battery 86WHr with Alienware Battery Defender technology\n");
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
       a[2]++;
       totalCost+=268990;
       printf("Your Cost in Cart is %d\n",totalCost);
        }
      }

      break;
     }
      case 4:
     {
      int num;
      printf("You selected HP 15s Thin and Light Laptop with Rs.42,455\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=42455;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - Processor: Intel Core i3-1005G1 (1.2 GHz base frequency, up to 3.4 GHz with Intel Turbo Boost Technology\n");
      printf("\t2 - Memory: 4 GB DDR4-2666 SDRAM (1 x 4 GB); Storage: 256 GB PCIe NVMe M.2 SSD + 1TB 5400 rpm SATA\n");
      printf("\t3 - Display: 15.6inch diagonal FHD SVA anti-glare micro-edge WLED-backlit, 220 nits, 45% NTSC (1920 x 1080)\n");
      printf("\t4 - Minimum Dimensions (W x D x H): 35.85 x 24.2 x 1.99 cm; Weight: 1.75 kg\n");
      printf("\t5 - Operating System: Microsoft Windows 10 - Home edition; Microsoft Office 2019 - Home and Student Edition\n");
      printf("\t6 - External ports: 1 SuperSpeed USB Type-C 5Gbps signaling rate; 2 SuperSpeed USB Type-A 5Gbps signaling rate\n");
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
       a[3]++;
       totalCost+=268990;
       printf("Your Cost in Cart is %d\n",totalCost);
        }
      }

      break;
     }
     default:{
      printf("Exit from Laptop\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int bookChoice;
    printf("Enter\n1 - Think Like a Monk - Rs.762\n2 - The Alchemist - Rs.474\n3 - Harry Potter and the Philosopher's Stone - Rs.990\nAny other number to exit\n");
    scanf("%d",&bookChoice);
    cost[bookChoice+3]=cost_of_book(bookChoice);
    switch(bookChoice)
    {
     case 1:
     {
      int num;
      printf("You selected  Think Like a Monk book for Rs.762\n1.To buy press 1\n2.To know book synopsis press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=762;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      char para[1500]={"Jay Shetty, social media superstar and host of the podcast On Purpose, distils the timeless wisdom he learned as a practising monk into practical steps anyone can take every day to live a less anxious, more meaningful life. Over the past three years, Jay Shetty has become one of the world’s most popular influencers.One of his clips was the most watched video on Facebook last year, with over 360 million views. His social media following totals over 32 million, he has produced over 400 viral videos, which have amassed more than 5 billion views, and his podcast, On Purpose, is consistently ranked the world’s #1 health-related podcast.In this inspiring, empowering book, Shetty draws on his time as a monk in the Vedic tradition to show us how we can clear the roadblocks to our potential and power. Drawing on ancient wisdom and his own rich experiences in the ashram, Think Like a Monk reveals how to overcome negative thoughts and habits, and access the calm and purpose that lie within all of us.The lessons monks learn are profound but often abstract. Shetty transforms them into advice and exercises we can all apply to reduce stress, improve focus, improve relationships, identify our hidden abilities, increase self-discipline and give the gifts we find in ourselves to the world. Shetty proves that everyone can and should think like a monk.\n"};
      printf("%s",para);
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
      a[4]++;
      totalCost+=762;
      printf("Your Cost in Cart is %d\n",totalCost);
      }
      }

      break;
     }
     case 2:
     {
      int num;
      printf("You selected The Alchemist book for Rs.474.\n1.To buy press 1\n2.To know book synopsis press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=474;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      char para[1000]={"The Alchemist by Paulo Coelho continues to change the lives of its readers forever. With more than two million copies sold around the world, The Alchemist has established itself as a modern classic, universally admired.Paulo Coelho's masterpiece tells the magical story of Santiago, an Andalusian shepherd boy who yearns to travel in search of a worldly treasure as extravagant as any ever found.The story of the treasures Santiago finds along the way teaches us, as only a few stories can, about the essential wisdom of listening to our hearts, learning to read the omens strewn along life's path, and, above all, following our dreams.\n"};
      printf("%s",para);
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
      a[5]++;
      totalCost+=474;
      printf("Your Cost in Cart is %d\n",totalCost);
      }
      }

      break;
     }
     case 3:
     {
      int num;
      printf("You selected Harry Potter and the Philosopher's Stone for Rs.990\n1.To buy press 1\n2.To know book synopsis press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=990;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      char para[1000]={"Escape to Hogwarts with the unmissable series that has sparked a lifelong reading journey for children and families all over the world. The magic starts here.Harry Potter has never even heard of Hogwarts when the letters start dropping on the doormat at number four, Privet Drive. Addressed in green ink on yellowish parchment with a purple seal, they are swiftly confiscated by his grisly aunt and uncle. Then, on Harry's eleventh birthday, a great beetle-eyed giant of a man called Rubeus Hagrid bursts in with some astonishing news: Harry Potter is a wizard, and he has a place at Hogwarts School of Witchcraft and Wizardry. The magic starts here!\n"};
      printf("%s",para);
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
      a[6]++;
      totalCost+=990;
      printf("Your Cost in Cart is %d\n",totalCost);
      }
      }

      break;
     }
     default:{
      printf("Exit from Books Category\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int mobileChoice;
    printf("Enter\n1 - Apple iPhone 11 - Rs.71,600\n2 - OnePlus 8 - Rs.41,999\n3 - Samsung Galaxy S20 Ultra - Rs.97,999\nAny other number to exit\n");
    scanf("%d",&mobileChoice);
    cost[mobileChoice+6]=cost_of_mobile(mobileChoice);
    switch(mobileChoice)
    {
     case 1:
     {
      int num;
      printf("You selected Apple iPhone 11 for Rs.71,600\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=71600;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - 6.1-inch (15.5 cm) Liquid Retina HD LCD display\n");
      printf("\t2 - Water and dust resistant (2 meters for up to 30 minutes, IP68)\n");
      printf("\t3 - Dual-cam system with 12MP Ultra Wide and Wide cameras;Night mode, Portrait mode, and 4K video up to 60fps\n");
      printf("\t4 - 12MP TrueDepth front camera with Portrait mode, 4K video, and Slo-Mo\n");
      printf("\t5 - Face ID for secure authentication and Apple Pay\n");
      printf("\t6 - A13 Bionic chip with third-generation Neural Engine\n");
      printf("\t7 - Fast-charge capable\n");
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
       a[7]++;
       totalCost+=71600;
       printf("Your Cost in Cart is %d\n",totalCost);
      }
      }

      break;
     }
     case 2:
     {
      int num;
      printf("You selected OnePlus 8 for Rs.41,999\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=41999;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - 48MP rear camera with 4k video at 30/60 fps, 1080p video at 30/60 fps\n");
      printf("\t2 - 16.637 centimeters (6.55-inch) 90Hz fluid display with 2400 x 1080 pixels resolution\n");
      printf("\t3 - Memory Storage: 6GB RAM | 128GB internal memory \n");
      printf("\t4 - Oxygen OS based on Android v10 operating system\n");
      printf("\t5 - 4300mAH lithium-ion battery\n");
      printf("\t6 - OnePlus 8 with Alexa Built-in provides hands-free access to Alexa while on-the-go\n");
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
      a[8]++;
      totalCost+=41999;
      printf("Your Cost in Cart is %d\n",totalCost);
      }
      }

      break;
     }
     case 3:
     {
      int num;
      printf("You selected Samsung Galaxy S20 Ultra for Rs.97,999\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[9]++;
       totalCost+=97999;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - Quad rear camera - 108MP (PD) OIS F1.8 wide + 48MP OIS F2.0 tele camera + 12MP F2.2 ultra wide\n");
      printf("\t2 - 17.44 centimeters (6.9-inch) dynamic AMOLED display with capacitive touchscreen\n");
      printf("\t3 - Memory Storage: 12GB RAM | 128GB internal memory expandable up to 1TB\n");
      printf("\t4 - Android v10.0 operating system with 2.73GHz+2.5GHz+2GHz Exynos 990 octa core processor\n");
      printf("\t5 - 5000mAH (non-removable) lithium-ion battery | Face-unlock & finger print sensor\n");
      printf("\t6 - Box also includes: Non-removable battery included, earphones, travel adapter, USB cable and user manual\n");
      printf("To buy press 1\n");
      scanf("%d",&num);
      if(num==1){
      a[9]++;
      totalCost+=97999;
      printf("Your Cost in Cart is %d\n",totalCost);
      }
      }
      break;
     }
     default:{
      printf("Exit from Mobile Category\n");
      break;
     }
    }
    break;
   }
    case 4:
   {
    int cameraChoice;
    printf("Enter\n1 - Sony Alpha A7RM2 - Rs.1,40,556\n2 - Canon EOS 5D Mark IV - Rs.2,64,990\n3 - Nikon D7500 - Rs.74,135\nAny other number to exit\n");
    scanf("%d",&cameraChoice);
    cost[cameraChoice+9]=cost_of_camera(cameraChoice);
    switch(cameraChoice)
    {
     case 1:
     {
      int num;
      printf("You selected Sony Alpha A7RM2 with Rs.1,40,556\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[10]++;
       totalCost+=140556;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - World's first 42.4-megapixel back-illuminated 35mm with full-frame EXMOR R CMOS sensor delivers crisp resolution\n");
      printf("\t2 - Fast hybrid AF system with 399-point wide focal plane phase-detection AF coverage for sharp focus\n");
      printf("\t3 - 5-axis image stabilisation reduces blur for stills and movies, making every shot crystal clear\n");
      printf("\t4 - Experience high sensitivity of up to ISO 102400 with low-noise performance and wide dynamic range\n");
      printf("\t5 - Offer higher-resolution 4K (QFHD: 3840x2160) movie reading featuring full pixel readout\n");
      printf("\t6 - The XGA OLED Tru-Finder with ZEISS T coating is the world's largest viewfinder\n");
      printf("\t7 - Country of Origin: Thailand\n");
      printf("To buy enter 1");
      scanf("%d",&num);
      if(num==1)
      {
       a[10]++;
       totalCost+=140556;
       printf("Your Cost in Cart is %d\n",totalCost);
      }
      }
      break;
     }
     case 2:
     {
      int num;
      printf("You selected Canon EOS 5D Mark IV with Rs.2,64,990\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[11]++;
       totalCost+=264990;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - Sensor: Full frame CMOS sensor with 30.4 MP (brilliant resolution for large prints and image cropping)\n");
      printf("\t2 - ISO: 100-32000 sensitivity range (critical for obtaining grain-free pictures, especially in low light)\n");
      printf("\t3 - Image Processor: DIGIC 6+ with 61 autofocus points \n");
      printf("\t4 - Video Resolution: 4K video with fully manual control and selectable frame rates\n");
      printf("\t5 - Connectivity: WiFi, NFC and Bluetooth built-in\n");
      printf("\t6 - Lens Mount: EF mount compatible\n");
      printf("To buy enter 1");
      scanf("%d",&num);
      if(num==1)
      {
       a[11]++;
       totalCost+=264990;
       printf("Your Cost in Cart is %d\n",totalCost);
      }
      }
      break;
     }
     case 3:
     {
      int num;
      printf("You selected Nikon D7500 with Rs.74,135\n1.To buy press 1\n2.To know specification press 2\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[12]++;
       totalCost+=74135;
       printf("Your Cost in Cart is %d\n",totalCost);
      }else if(num==2){
      printf("\t1 - 20.9MP DX-Format CMOS Sensor, SnapBridge Bluetooth and Wi-Fi\n");
      printf("\t2 - 4K UHD Video Recording at 30 fps\n");
      printf("\t3 - Multi-CAM 3500FX II 51-Point AF System\n");
      printf("\t4 - Native ISO 51200, Expanded ISO 1,640,000\n");
      printf("\t5 - 180k-Pixel RGB Sensor and Group Area AF\n");
      printf("\t6 - Country of Origin: Japan\n");
      printf("To buy enter 1");
      scanf("%d",&num);
      if(num==1)
      {
       a[12]++;
       totalCost+=74135;
       printf("Your Cost in Cart is %d\n",totalCost);
      }
      }
    break;
     }
     default:{
      printf("Exit from Camera Category\n");
      break;
     }
   }
   break;
   }

   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("=====================================================================================\n");
  printf("Id\t\tItems\t\t\t\t\tQuantity\t\tCost\n");
  printf("=====================================================================================\n");
  for(i=0;i<13;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t\t%s\t\t\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("=====================================================================================\n");
  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<13&&id>=0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("================================================================================\n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
       printf("================================================================================\n");
            for(i=0;i<13;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("===============================================================================\n");
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
     scanf("%d",&c);
  }

 }while(c==1 || c==2);
 printf("Your Final Cost is %d\n",totalCost);
 printf("Thanks %s for Choosing Us and Visit us again.\n",str);

}
