/* Runtime dump - ATVInterstitial
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVInterstitial : NSObject
{
    double _startTime;
    double _endTime;
}

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;

- (ATVInterstitial *)_initWithStartTime:(double)arg0 endTime:(double)arg1;
- (NSDictionary *)_initWithFeedDictionary:(NSDictionary *)arg0;
- (void)dealloc;
- (double)startTime;
- (char)containsTime:(double)arg0;
- (double)endTime;

@end
