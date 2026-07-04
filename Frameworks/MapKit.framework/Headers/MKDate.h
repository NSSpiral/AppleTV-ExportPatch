/* Runtime dump - MKDate
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDate : NSDate
{
    NSDate * _date;
    NSTimeZone * _tz;
}

@property (retain, nonatomic) NSTimeZone * timeZone;
@property (readonly, nonatomic) NSDate * nsDate;

+ (MKDate *)dateWithNSDate:(NSDate *)arg0;

- (int)dayOfCommonEra;
- (MKDate *)initWithNSDate:(NSDate *)arg0;
- (NSDate *)nsDate;
- (NSString *)description;
- (double)timeIntervalSinceReferenceDate;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSTimeZone *)timeZone;
- (void).cxx_destruct;
- (MKDate *)initWithTimeIntervalSinceReferenceDate:(double)arg0;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;

@end
