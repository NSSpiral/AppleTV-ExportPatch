/* Runtime dump - NSDateCheckingResult
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    NSDate * _date;
    NSTimeZone * _timeZone;
    double _duration;
    NSDate * _referenceDate;
    id _underlyingResult;
    char _timeIsSignificant;
    char _timeIsApproximate;
    char _timeIsPast;
}

@property (readonly) NSTimeZone * timeZone;
@property (readonly) double duration;
@property (readonly) NSDate * referenceDate;
@property (readonly) void * underlyingResult;
@property (readonly) char timeIsSignificant;
@property (readonly) char timeIsApproximate;
@property (readonly) char timeIsPast;

- (NSSet *)resultByAdjustingRangesWithOffset:(int)arg0;
- (char)_adjustRangesWithOffset:(int)arg0;
- (void *)underlyingResult;
- (NSDateCheckingResult *)initWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1;
- (NSDateCheckingResult *)initWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 duration:(double)arg3;
- (NSDateCheckingResult *)initWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 duration:(double)arg3 referenceDate:(NSDate *)arg4 underlyingResult:(void *)arg5 timeIsSignificant:(char)arg6 timeIsApproximate:(char)arg7 timeIsPast:(char)arg8;
- (NSDate *)referenceDate;
- (NSDateCheckingResult *)initWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 duration:(double)arg3 referenceDate:(NSDate *)arg4;
- (NSDateCheckingResult *)initWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 duration:(double)arg3 referenceDate:(NSDate *)arg4 underlyingResult:(void *)arg5;
- (NSDateCheckingResult *)initWithRange:(struct _NSRange)arg0 date:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 duration:(double)arg3 referenceDate:(NSDate *)arg4 underlyingResult:(void *)arg5 timeIsSignificant:(char)arg6 timeIsApproximate:(char)arg7;
- (char)timeIsSignificant;
- (char)timeIsApproximate;
- (char)timeIsPast;
- (void)dealloc;
- (NSDateCheckingResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)duration;
- (NSDate *)date;
- (struct _NSRange)range;
- (NSTimeZone *)timeZone;
- (unsigned long long)resultType;

@end
