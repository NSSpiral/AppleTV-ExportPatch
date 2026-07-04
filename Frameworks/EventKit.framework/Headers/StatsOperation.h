/* Runtime dump - StatsOperation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface StatsOperation : NSObject
{
    int _type;
    long long _intValue;
    double _doubleValue;
}

@property int type;
@property long long intValue;
@property double doubleValue;

- (StatsOperation *)initWithType:(int)arg0 intValue:(long long)arg1;
- (StatsOperation *)initWithType:(int)arg0 doubleValue:(double)arg1;
- (long long)intValue;
- (double)doubleValue;
- (void)setType:(int)arg0;
- (int)type;
- (void)setDoubleValue:(double)arg0;
- (void)setIntValue:(long long)arg0;

@end
