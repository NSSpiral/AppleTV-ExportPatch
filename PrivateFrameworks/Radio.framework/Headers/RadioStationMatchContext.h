/* Runtime dump - RadioStationMatchContext
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchContext : NSObject
{
    char _shouldMatchArtist;
    RadioStationMatchMetadata * _matchMetadata;
}

@property (retain, nonatomic) RadioStationMatchMetadata * matchMetadata;
@property (nonatomic) char shouldMatchArtist;

- (void).cxx_destruct;
- (NSDictionary *)copyMatchDictionary;
- (RadioStationMatchMetadata *)matchMetadata;
- (void)setMatchMetadata:(RadioStationMatchMetadata *)arg0;
- (char)shouldMatchArtist;
- (void)setShouldMatchArtist:(char)arg0;

@end
