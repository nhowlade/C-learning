public class MyProgram{
    //These two functions can be used to makes vertical boxes

    public static void drawBox()
    {
        System.out.println("  __");  //This art has two spaces at the front, 2 underscores and no following space
        System.out.println("\n|    |"); //Between each bar we have 4 spaces
    }
    public static void oneLineBoxes()
    {
        int i = 0;
        for(i=0; i<8; i++)
        {
            drawBox();
        }
    }
    public static void main(String[] args)
    {
        System.out.println("Welcome to my Chess Game");
        oneLineBoxes();
        System.out.println("  __");
    }
}