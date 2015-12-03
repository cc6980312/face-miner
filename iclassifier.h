#ifndef ICLASSIFIER_H
#define ICLASSIFIER_H

#include <opencv2/core.hpp>

class IClassifier
{
public:
    virtual ~IClassifier(){}
    virtual bool isA(cv::Mat&) = 0;
};

#endif // ICLASSIFIER_H