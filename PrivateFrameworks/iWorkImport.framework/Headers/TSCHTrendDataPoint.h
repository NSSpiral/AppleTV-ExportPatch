/* Runtime dump - TSCHTrendDataPoint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTrendDataPoint : NSObject
{
    double mDataPointX;
    double mDataPointY;
    unsigned int mGroupIndex;
}

- (TSCHTrendDataPoint *)initWithPointX:(double)arg0 pointY:(double)arg1 forGroup:(unsigned int)arg2;
- (int)xValueCompare:(NSObject *)arg0;
- (double)dataPointX;
- (double)dataPointY;
- (unsigned int)groupIndex;

@end
