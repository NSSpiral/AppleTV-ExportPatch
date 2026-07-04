/* Runtime dump - MPArtworkConfiguration
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkConfiguration : NSObject
{
    ML3ArtworkConfiguration * _artworkConfiguration;
}

@property (retain, nonatomic) ML3ArtworkConfiguration * artworkConfiguration;

+ (NSDictionary *)systemConfiguration;

- (void)setArtworkConfiguration:(ML3ArtworkConfiguration *)arg0;
- (ML3ArtworkConfiguration *)artworkConfiguration;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)sizesToAutogenerateForMediaType:(unsigned int)arg0 artworkType:(int)arg1;
- (MPArtworkConfiguration *)initWithConfigurationDictionaries:(id)arg0;
- (NSObject *)supportedSizesForMediaType:(unsigned int)arg0 artworkType:(int)arg1;

@end
