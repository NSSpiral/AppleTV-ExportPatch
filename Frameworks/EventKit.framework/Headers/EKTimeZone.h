/* Runtime dump - EKTimeZone
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTimeZone : NSObject <NSCopying>
{
    NSString * _name;
    void * _internal;
    long long _lastStart;
    long long _lastEnd;
    unsigned int _lastIndex;
    double _offset;
}

+ (EKTimeZone *)timeZoneWithNSTimeZone:(NSObject *)arg0;
+ (EKTimeZone *)timeZoneWithName:(NSString *)arg0;

- (NSDate *)abbreviationForDate:(NSDate *)arg0;
- (NSObject *)NSTimeZone;
- (double)secondsFromGMTForAbsoluteTime:(double)arg0;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg0;
- (EKTimeZone *)initWithOffset:(double)arg0 name:(NSString *)arg1;
- (id)abbreviationForAbsoluteTime:(double)arg0;
- (unsigned int)_indexForAbsoluteTime:(double)arg0;
- (NSObject *)_abbreviationForIndex:(unsigned int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (EKTimeZone *)copyWithZone:(struct _NSZone *)arg0;
- (double)secondsFromGMTForDate:(NSDate *)arg0;
- (EKTimeZone *)initWithName:(NSString *)arg0;
- (id)abbreviation;
- (double)secondsFromGMT;

@end
