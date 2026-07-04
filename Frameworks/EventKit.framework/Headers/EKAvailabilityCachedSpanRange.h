/* Runtime dump - EKAvailabilityCachedSpanRange
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCachedSpanRange : NSObject
{
    NSMutableArray * _cachedSpans;
}

+ (EKAvailabilityCachedSpanRange *)_clampDateRangeForSpans:(id)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
+ (EKAvailabilityCachedSpanRange *)_generateCachedSpansFromSpans:(id)arg0;

- (char)_rangeCompletelyCoversPeriodBetweenStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
- (void)_validateCachedSpansIfDebugLoggingIsEnabled;
- (NSDate *)gatherFreshlyCachedSpansBetweenStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
- (void)injectSpans:(id)arg0;
- (void)dealloc;
- (EKAvailabilityCachedSpanRange *)init;
- (NSString *)description;
- (NSMutableArray *)spans;

@end
