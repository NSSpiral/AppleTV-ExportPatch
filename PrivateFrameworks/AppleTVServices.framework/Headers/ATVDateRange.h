/* Runtime dump - ATVDateRange
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDateRange : NSObject
{
    NSDate * _startDate;
    NSDate * _endDate;
    double _durationInSeconds;
}

@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (double)durationInSeconds;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (char)containsDate:(NSDate *)arg0;
- (ATVDateRange *)initWithStartDate:(NSDate *)arg0 duration:(double)arg1;
- (NSObject *)dateRangeByIntersectingDateRange:(NSObject *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
