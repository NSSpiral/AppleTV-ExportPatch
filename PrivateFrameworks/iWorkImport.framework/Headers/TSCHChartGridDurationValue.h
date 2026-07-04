/* Runtime dump - TSCHChartGridDurationValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue>
{
    double mDuration;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int chartGridValueType;

+ (TSCHChartGridDurationValue *)durationValueWithDouble:(double)arg0;

- (int)chartGridValueType;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (double)doubleValue;
- (TSCHChartGridDurationValue *)copyWithZone:(struct _NSZone *)arg0;
- (TSCHChartGridDurationValue *)initWithDouble:(double)arg0;

@end
