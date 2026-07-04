/* Runtime dump - ATVQualityOfServiceInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVQualityOfServiceInfo : NSObject
{
    NSArray * _samples;
}

@property (readonly, nonatomic) NSArray * samples;

- (ATVQualityOfServiceInfo *)initWithSamples:(NSArray *)arg0;
- (void)dealloc;
- (NSArray *)samples;

@end
