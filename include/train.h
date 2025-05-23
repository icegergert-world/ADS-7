// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
    struct Car {
        bool light;
        Car* next;
        Car* prev;
        explicit Car(bool illumination)
            : light(illumination), next(nullptr), prev(nullptr) {}
    };
    int countOp;
    Car* first;

 public:
    Train();
    ~Train();
    void addCar(bool lit);
    int getLength();
    int getOpCount();
};
#endif  // INCLUDE_TRAIN_H_
