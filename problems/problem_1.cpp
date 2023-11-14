float problemSolution1(float consumed_water) {
    float cost;
    cost = 13;
    if(consumed_water <= 30){
        cost = cost + (consumed_water * 0.4);
    }else{
        cost = cost + (30 * 0.4);
        if(consumed_water <= 50){
            cost = cost + ((consumed_water - 30) * 0.12);
        }else{
            cost = cost + (20 * 0.12);
            if(consumed_water <= 60){
                cost = cost + ((consumed_water - 50) * 1.4);
            }else{
                cost = cost + (10 * 1.4);
                cost = cost + ((consumed_water - 60) * 1.5);
            }
        }
    }

    return cost;
}
