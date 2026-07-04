/* Runtime dump - MLTrackImport
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLTrackImport : NSObject <NSCopying>
{
    NSData * _artworkData;
    NSString * _assetFilePath;
    NSArray * _chapters;
    NSMutableDictionary * _properties;
    char _shouldAddToPurchasedPlaylist;
    char _assignArtworkCacheIDFromAlbum;
}

@property (copy, nonatomic) NSData * artworkData;
@property (copy, nonatomic) NSString * assetFilePath;
@property (copy, nonatomic) NSArray * chapters;
@property (copy, nonatomic) MLContentRating * contentRating;
@property (nonatomic) unsigned long mediaType;
@property (copy, nonatomic) MLMovieProperties * movieProperties;
@property (nonatomic) char shouldAddToPurchasedPlaylist;
@property (nonatomic) char assignArtworkCacheIDFromAlbum;
@property (readonly, copy, nonatomic) NSDictionary * entityProperties;

+ (void)initialize;

- (MLTrackImport *)init;
- (MLTrackImport *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setValue:(NSObject *)arg0 forEntityProperty:(NSObject *)arg1;
- (MLContentRating *)contentRating;
- (NSDictionary *)entityProperties;
- (MLMovieProperties *)movieProperties;
- (void)setContentRating:(MLContentRating *)arg0;
- (void)setMovieProperties:(MLMovieProperties *)arg0;
- (NSObject *)valueForEntityProperty:(NSObject *)arg0;
- (NSDictionary *)copyEntityProperties;
- (NSData *)artworkData;
- (void)setArtworkData:(NSData *)arg0;
- (NSString *)assetFilePath;
- (void)setAssetFilePath:(NSString *)arg0;
- (char)assignArtworkCacheIDFromAlbum;
- (void)setAssignArtworkCacheIDFromAlbum:(char)arg0;
- (NSArray *)chapters;
- (void)setChapters:(NSArray *)arg0;
- (char)shouldAddToPurchasedPlaylist;
- (void)setShouldAddToPurchasedPlaylist:(char)arg0;
- (unsigned long)mediaType;
- (void)setMediaType:(unsigned long)arg0;

@end
