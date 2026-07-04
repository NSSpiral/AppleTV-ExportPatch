/* Runtime dump - BRMediaCollectionGeniusInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaCollectionGeniusInfo : NSObject

+ (void)setImplementationClass:(Class)arg0;
+ (char)isGeniusDBAvailable;
+ (BRMediaCollectionGeniusInfo *)geniusInfoForGeniusPlaylist:(id)arg0;

- (BRMediaCollectionGeniusInfo *)initWithGeniusPlaylist:(char)arg0;
- (char)assetIsCurrentSeed:(id)arg0;
- (char)assetIsValidSeed:(id)arg0;
- (char)setGeniusSeed:(ATVDataItem *)arg0;
- (char)refreshGeniusPlaylist;
- (id)saveGeniusPlaylist;
- (char)playlistIsDirty;

@end
