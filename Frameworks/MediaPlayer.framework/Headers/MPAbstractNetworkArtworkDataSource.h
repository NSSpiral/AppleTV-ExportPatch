/* Runtime dump - MPAbstractNetworkArtworkDataSource
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, MPArtworkDataSource>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSCache * _artworkRepresentationCache;
    NSMapTable * _catalogTaskMap;
    NSURLSession * _URLSession;
}

@property (readonly, nonatomic) NSURLSessionConfiguration * URLSessionConfiguration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * accessQueue;
@property (retain, nonatomic) NSCache * artworkRepresentationCache;
@property (retain, nonatomic) NSMapTable * catalogTaskMap;
@property (retain, nonatomic) NSURLSession * URLSession;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)areRepresentationsAvailableForCatalog:(id)arg0;
- (char)isRepresentation:(NSDictionary *)arg0 bestRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg0;
- (void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0;
- (NSString *)visualIdenticalityIdentifierForCatalog:(id)arg0;
- (id)supportedSizesForCatalog:(id)arg0;
- (id)sortedSupportedSizesForCatalog:(id)arg0;
- (id)cacheKeyForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (NSURLRequest *)requestForCatalog:(id)arg0 size:(struct CGSize)arg1;
- (NSURLSession *)URLSession;
- (NSCache *)artworkRepresentationCache;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg0 handler:(id /* block */)arg1;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg0 immediateImageDecompressionAllowed:(char)arg1;
- (NSURLSessionConfiguration *)URLSessionConfiguration;
- (NSData *)_artworkRepresentationWithImageFromData:(NSData *)arg0 forURLResponse:(NSURLResponse *)arg1 size:(struct CGSize)arg2 immediateImageDecompressionAllowed:(char)arg3;
- (NSObject<OS_dispatch_queue> *)accessQueue;
- (NSMapTable *)catalogTaskMap;
- (char)wantsBackgroundImageDecompression;
- (char)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (char)_isRepresentationSize:(struct CGSize)arg0 validForCatalog:(id)arg1;
- (void)setAccessQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setArtworkRepresentationCache:(NSCache *)arg0;
- (void)setCatalogTaskMap:(NSMapTable *)arg0;
- (void)setURLSession:(NSObject *)arg0;
- (MPAbstractNetworkArtworkDataSource *)init;
- (void).cxx_destruct;

@end
