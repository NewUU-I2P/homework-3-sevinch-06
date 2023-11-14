float problemSolution2(float i, float j, float k) {
    float result;
     result = (i > j && i > k ? i : (j > i && j > k ? j : k));

    return result;
}
