/* Runtime dump - MPCompleteMyCollectionArtworkDataSource
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCompleteMyCollectionArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (char)areRepresentationsAvailableForCatalog:(id)arg0;
- (NSString *)visualIdenticalityIdentifierForCatalog:(id)arg0;
- (id)supportedSizesForCatalog:(id)arg0;
- (int)_artworkTypeForCatalog:(id)arg0;
- (id)sortedSupportedSizesForCatalog:(id)arg0;
- (id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (NSURLRequest *)requestForCatalog:(id)arg0 size:(struct CGSize)arg1;

@end
