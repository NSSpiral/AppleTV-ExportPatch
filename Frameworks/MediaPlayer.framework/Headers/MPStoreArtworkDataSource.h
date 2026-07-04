/* Runtime dump - MPStoreArtworkDataSource
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (MPStoreArtworkDataSource *)sharedStoreArtworkDataSource;

- (char)areRepresentationsAvailableForCatalog:(id)arg0;
- (NSString *)visualIdenticalityIdentifierForCatalog:(id)arg0;
- (NSObject *)existingArtworkEffectResultForEffectType:(unsigned int)arg0 catalog:(CUICatalog *)arg1 options:(NSDictionary *)arg2;
- (id)supportedSizesForCatalog:(id)arg0;
- (id)sortedSupportedSizesForCatalog:(id)arg0;
- (id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (NSURLRequest *)requestForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (id)_bestURLForCatalog:(id)arg0 size:(struct CGSize)arg1;

@end
