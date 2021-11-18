/**
 * The Dice Game. 
 * The rules of the game: A player rolls the two dice and adds the number shown on them.
 * Roll the two dice up to 20 times and save the total in the array.
 * If the total is 7 or 11, you win. Put this in the array, report the results and exit the game.
 * If the total is 2, 3, or 12, you lose. Put this in the array, report the results and exit the game.
 * If the total is anything else, save the total as the "goal". put it in the array, and you get to roll again.
 * The new objective is to roll the same total as the "goal".
 * You keep rolling until you either get "goal" or a 7. Show the array.
 * If you roll "goal", you win. Put this in the array, report the results and exit the game.
 * If you roll a 7, you lose. Put this in the array, report the results and exit the game.
 *
 * @author Alberto E Ramirez
 * @version `11-17-2021 
 */

class TwoDice{
    int faces[] = new int[2];
    // default Constructor
    public TwoDice(){
        faces[0] = (int)(Math.random()*(6) +1);;
        faces[1] = (int)(Math.random()*(6) +1);;
    }
    // parameterized Constructor
    public TwoDice(int n,int m){
        if(n>=1&&n<=6 && m>=1&&m<=6)
        {
            faces[0] = n;
            faces[1] = m;
        }
        else
            System.out.println("Out of range!");
    }
    // Accessors
    public int getFace1(){
        return faces[0]; 
    }
    public int getFace2(){
        return faces[1]; 
    }
    // mutators
    public void setFace1(int a){
        faces[0] = a;
    }
    public void setFace2(int a){
        faces[1] = a;
    }
    // setting random value to faces
    public void roll(){
        faces[0] = (int)(Math.random()*(6) +1);;
        faces[1] = (int)(Math.random()*(6) +1);;
    }
    // for printing the Object
    public String toString(){
        return faces[0]+", "+faces[1];
    }
    // equals : checks equality of Objects
    boolean equals(TwoDice ob){
        int tempFace1 = ob.getFace1();
        int tempFace2 = ob.getFace2();
        // either both faces equal or cross faces equal -> true else -> false   
        return ((faces[0]==tempFace1&&faces[1]==tempFace2)||
            (faces[1]==tempFace1&&faces[0]==tempFace2));
    }
    public void printMe(){
        System.out.println(faces[0]+", "+faces[1]);
    }
}


public class DiceClient1Alberto
{
        public static void main() {
                TwoDice dice = new TwoDice(1,5);
            int score[] =null;
            // testing
            play(dice,score);
            play(dice,score);
            play(dice,score);
            play(dice,score);
                
        }
        public static void play(TwoDice dice,int []score){
            // will contain all 0's
            score = new int[20];
            int goal = -1, i=1;
            // rolling for first time
            dice.roll();
            score[0] = dice.getFace1()+dice.getFace2();
            // checks for the first time
            if(score[0] == 7 || score[0] == 11)
            {
                System.out.println("You win: ");
                printArray(score);
                return;
            }
            else if(score[0] == 2 || score[0] == 3 || score[0] == 12)
            {
                System.out.println("You Lose: ");
            printArray(score);
            return;
            }
            else{
                // setting goal
                goal = score[0];
                // rolling the dice
                while(i<20){
                    dice.roll();
                    score[i] = dice.getFace2()+dice.getFace1();
                    // checking breaking conditions
                    if(score[i]==goal || score[i] == 7){
                        if(score[i]==7)
                            System.out.println("You Lose: ");
                        else 
                            System.out.println("You win: ");
                        printArray(score);
                        return;
                    }
                    i++;
                }
                // neither won nor lose condition
                System.out.println("No results Obtained");
                printArray(score);
            }
        }
        // printing score array
        public static void printArray(int []score){
            for(int i=0;i<20;i++)
            {
                if(i!=0 && i%5 == 0)
                    System.out.print("- ");
                System.out.print(score[i]+" ");
            }
            System.out.println();
        }
        
}