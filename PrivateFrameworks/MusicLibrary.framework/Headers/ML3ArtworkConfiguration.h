/* Runtime dump - ML3ArtworkConfiguration
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ArtworkConfiguration : NSObject
{
    NSMutableDictionary * _artworkConfigurationDictionary;
    NSMutableDictionary * _supportedSizesCache;
    float _mainScreenScale;
}

@property (retain, nonatomic) NSMutableDictionary * artworkConfigurationDictionary;
@property (retain, nonatomic) NSMutableDictionary * supportedSizesCache;
@property (nonatomic) float mainScreenScale;

+ (NSDictionary *)systemConfiguration;

- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)sizesToAutogenerateForMediaType:(unsigned long)arg0 artworkType:(int)arg1;
- (ML3ArtworkConfiguration *)initWithConfigurationDictionaries:(id)arg0;
- (NSMutableDictionary *)supportedSizesCache;
- (NSObject *)_supportedSizeKeysForMediaType:(unsigned long)arg0 artworkType:(int)arg1;
- (NSObject *)supportedSizesForMediaType:(unsigned long)arg0 artworkType:(int)arg1;
- (NSMutableDictionary *)artworkConfigurationDictionary;
- (void)setArtworkConfigurationDictionary:(NSMutableDictionary *)arg0;
- (void)setSupportedSizesCache:(NSMutableDictionary *)arg0;
- (void)setMainScreenScale:(float)arg0;
- (float)mainScreenScale;

@end
