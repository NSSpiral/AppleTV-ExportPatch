/* Runtime dump - PDAnimateTimeBehavior
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateTimeBehavior : PDAnimateBehavior
{
    NSMutableArray * mTimeAnimateValues;
}

- (void)dealloc;
- (PDAnimateTimeBehavior *)init;
- (unsigned int)timeAnimateValueCount;
- (NSObject *)timeAnimateValueAtIndex:(unsigned int)arg0;
- (void)addTimeAnimateValue:(PDTimeAnimateValue *)arg0;

@end
