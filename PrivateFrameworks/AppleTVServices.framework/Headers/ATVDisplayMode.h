/* Runtime dump - ATVDisplayMode
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDisplayMode : NSObject
{
    char _isVirtual;
    CADisplayMode * _caDisplayMode;
    double _refreshRate;
}

@property (readonly, nonatomic) CADisplayMode * caDisplayMode;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) char isVirtual;

- (char)isVirtual;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (double)refreshRate;
- (void).cxx_destruct;
- (CADisplayMode *)caDisplayMode;
- (ATVDisplayMode *)initWithDisplayMode:(CADisplay *)arg0 refreshRate:(double)arg1 isVirtual:(char)arg2;
- (NSDictionary *)stringRepresentation;

@end
