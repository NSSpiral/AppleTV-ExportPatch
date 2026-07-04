/* Runtime dump - ATVRadioClipItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioItem;
@interface ATVRadioClipItem : ATVDataItem
{
    ATVRadioItem * _clipItem;
    ATVRadioItem * _trackItem;
}

@property (retain, nonatomic) ATVRadioItem * clipItem;
@property (retain, nonatomic) ATVRadioItem * trackItem;

+ (char)_canFallbackToTrackForProperty:(NSString *)arg0;

- (ATVRadioClipItem *)initWithDataClient:(ATVDataClient *)arg0 radioAudioClip:(id)arg1 track:(ML3Track *)arg2;
- (ATVDataItem *)radioTrack;
- (id)audioClip;
- (void)setTrackItem:(ATVRadioItem *)arg0;
- (ATVRadioItem *)trackItem;
- (id)_typeStr;
- (ATVRadioItem *)clipItem;
- (void)setClipItem:(ATVRadioItem *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (NSDictionary *)trackInfo;

@end
