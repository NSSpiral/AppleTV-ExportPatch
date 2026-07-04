/* Runtime dump - CalDisjointDateRange
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet * _distinctRanges;
}

@property (copy, nonatomic) NSMutableSet * distinctRanges;

+ (char)supportsSecureCoding;
+ (NSArray *)disjointRangeWithDistinctRanges:(NSMutableSet *)arg0;
+ (NSObject *)disjointRangeWithSingleRange:(NSObject *)arg0;

- (CalDisjointDateRange *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CalDisjointDateRange *)copyWithZone:(struct _NSZone *)arg0;
- (char)containsRange:(NSObject *)arg0;
- (void).cxx_destruct;
- (char)containsDate:(NSDate *)arg0;
- (NSObject *)subtractRange:(NSObject *)arg0;
- (CalDisjointDateRange *)initWithDistinctRanges:(NSMutableSet *)arg0;
- (NSMutableSet *)distinctRanges;
- (NSArray *)sortedDistinctRanges;
- (double)totalDuration;
- (NSObject *)addDisjointRange:(NSObject *)arg0;
- (NSObject *)subtractDisjointRange:(NSObject *)arg0;
- (void)setDistinctRanges:(NSMutableSet *)arg0;
- (NSObject *)addRange:(NSObject *)arg0;

@end
