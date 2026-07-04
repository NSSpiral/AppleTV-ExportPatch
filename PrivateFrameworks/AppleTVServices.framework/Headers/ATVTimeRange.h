/* Runtime dump - ATVTimeRange
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVTimeRange : NSObject
{
    struct ? _cmTimeRange;
}

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) struct ? cmTimeRange;

+ (struct ?)forwardmostCMTimeRangeInCMTimeRanges:(NSArray *)arg0;

- (NSString *)description;
- (double)duration;
- (double)startTime;
- (ATVTimeRange *)initWithCMTimeRange:(struct ?)arg0;
- (char)containsTime:(double)arg0;
- (ATVTimeRange *)initWithStartTime:(double)arg0 duration:(double)arg1;
- (struct ?)cmTimeRange;
- (void)setCmTimeRange:(struct ?)arg0;

@end
