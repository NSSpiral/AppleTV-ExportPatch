/* Runtime dump - PDTimeAnimateValue
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTimeAnimateValue : NSObject
{
    NSValue * mTimeValue;
    double mPercentTime;
}

- (void)dealloc;
- (PDTimeAnimateValue *)init;
- (ICSDateTimeValue *)timeValue;
- (void)setTimeValue:(ICSDateTimeValue *)arg0;
- (double)percentTime;
- (void)setPercentTime:(double)arg0;

@end
