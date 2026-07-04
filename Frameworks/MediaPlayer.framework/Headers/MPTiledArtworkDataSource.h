/* Runtime dump - MPTiledArtworkDataSource
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource>
{
    NSCountedSet * _loadingTiledArtworkRequests;
    NSObject<OS_dispatch_queue> * _loadingTiledArtworkRequestsAccessQueue;
    NSCache * _tiledArtworkRepresentationFallbackCache;
    NSOperationQueue * _tilingArtworkCatalogOperationQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPTiledArtworkDataSource *)_representationCacheKeyForArtworkCatalog:(id)arg0 forAnyRevision:(char)arg1;
+ (NSString *)_errorWithDescription:(NSString *)arg0;
+ (struct CGSize)_tileSizeForFittingSize:(struct CGSize)arg0 rows:(unsigned int)arg1 columns:(unsigned int)arg2 spacing:(float)arg3;
+ (MPTiledArtworkDataSource *)_loadingRequestForArtworkCatalog:(id)arg0;
+ (MPTiledArtworkDataSource *)sharedDataSource;

- (void)_removeLoadingRequestForArtworkCatalog:(id)arg0;
- (void)_addLoadingRequestForArtworkCatalog:(id)arg0;
- (char)_hasLoadingRequestForArtworkCatalog:(id)arg0;
- (char)areRepresentationsAvailableForCatalog:(id)arg0;
- (char)isRepresentation:(NSDictionary *)arg0 bestRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg0;
- (void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0;
- (NSString *)visualIdenticalityIdentifierForCatalog:(id)arg0;
- (MPTiledArtworkDataSource *)init;
- (void).cxx_destruct;

@end
