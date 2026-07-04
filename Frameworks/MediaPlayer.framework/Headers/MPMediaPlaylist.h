/* Runtime dump - MPMediaPlaylist
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPlaylist : MPMediaItemCollection
{
    NSArray * _representativeArtists;
    MPMediaQuery * _seedTracksQuery;
}

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned int playlistAttributes;
@property (readonly, nonatomic) NSArray * seedItems;

+ (void)_createFilterableDictionary;
+ (char)canFilterByProperty:(NSObject *)arg0;
+ (char)_isValidPlaylistProperty:(NSObject *)arg0;

- (MPArtworkCatalog *)artworkCatalog;
- (MPMediaPlaylist *)initWithMultiverseIdentifier:(MIPMultiverseIdentifier *)arg0;
- (MPMediaPlaylist *)initWithPersistentID:(unsigned long long)arg0;
- (MPMediaQuery *)seedTracksQuery;
- (char)isCloudMix;
- (MPMediaItem *)representativeItem;
- (unsigned int)playlistAttributes;
- (NSArray *)seedItems;
- (void)removeFirstItem;
- (NSArray *)representativeArtists;
- (char)canPlayUsingNetworkType:(int)arg0;
- (void)setUserSelectedArtworkImage:(UIImage *)arg0;
- (NSNumber *)artworkCatalogsWithMaximumCount:(unsigned int)arg0;
- (NSArray *)tiledArtworkCatalogWithRows:(unsigned int)arg0 columns:(unsigned int)arg1;
- (MPMediaPlaylist *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)name;
- (NSArray *)items;
- (unsigned int)mediaTypes;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;
- (char)existsInLibrary;
- (MIPMultiverseIdentifier *)multiverseIdentifier;

@end
