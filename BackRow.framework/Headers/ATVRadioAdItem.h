/* Runtime dump - ATVRadioAdItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRadioAdItem : ATVDataItem
{
    char _hasStartedPlaying;
    NSMutableDictionary * _adData;
    int _adType;
    int _lastStateRecorded;
}

@property (retain, nonatomic) NSMutableDictionary * adData;
@property (nonatomic) int adType;
@property (nonatomic) char hasStartedPlaying;
@property (nonatomic) int lastStateRecorded;

+ (NSArray *)_preferredVideoFormats;
+ (NSData *)_videoAssetWithAdData:(NSMutableDictionary *)arg0;

- (char)hasStartedPlaying;
- (void)setHasStartedPlaying:(char)arg0;
- (void)setLastStateRecorded:(int)arg0;
- (int)lastStateRecorded;
- (ATVRadioAdItem *)initWithDataClient:(ATVDataClient *)arg0 adData:(NSMutableDictionary *)arg1 adType:(int)arg2;
- (void)setAdType:(int)arg0;
- (void).cxx_destruct;
- (int)adType;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (NSMutableDictionary *)adData;
- (void)setAdData:(NSMutableDictionary *)arg0;

@end
