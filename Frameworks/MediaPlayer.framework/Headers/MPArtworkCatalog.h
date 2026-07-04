/* Runtime dump - MPArtworkCatalog
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkCatalog : NSObject
{
    struct CGSize _fittingSize;
    char _loadingRepresentation;
    float _destinationScale;
    id _token;
    <MPArtworkDataSource> * _dataSource;
    NSString * _cacheIdentifier;
    id _requestingContext;
    id _destination;
    id _configurationBlock;
}

@property (readonly, nonatomic) int MP_artworkType;
@property (nonatomic) float destinationScale;
@property (nonatomic) struct CGSize fittingSize;
@property (readonly, nonatomic) struct CGSize scaledFittingSize;
@property (retain, nonatomic) id token;
@property (weak, nonatomic) <MPArtworkDataSource> * dataSource;
@property (readonly, nonatomic) NSCache * cache;
@property (readonly, nonatomic) <NSCopying> * visualIdenticalityIdentifier;
@property (copy, nonatomic) NSString * cacheIdentifier;
@property (weak, nonatomic) id requestingContext;
@property (weak, nonatomic) id destination;
@property (copy, nonatomic) id configurationBlock;
@property char loadingRepresentation;

+ (NSOperationQueue *)_artworkLoadQueue;
+ (NSString *)_artworkCacheForIdentifier:(NSString *)arg0 requestingContext:(NSObject *)arg1;
+ (UIImage *)staticArtworkCatalogWithImage:(UIImage *)arg0;
+ (void)setCacheLimit:(unsigned int)arg0 forCacheIdentifier:(NSString *)arg1 requestingContext:(NSObject *)arg2;
+ (void)setCachePurgesWhenEnteringBackground:(char)arg0 forCacheIdentifier:(NSString *)arg1 requestingContext:(NSObject *)arg2;

- (struct CGSize)scaledFittingSize;
- (<NSCopying> *)visualIdenticalityIdentifier;
- (float)destinationScale;
- (void)setFittingSize:(struct CGSize)arg0;
- (void)setDestinationScale:(float)arg0;
- (void)requestImageWithCompletionHandler:(id /* block */)arg0;
- (MPArtworkCatalog *)initWithToken:(NSString *)arg0 dataSource:(<MPArtworkDataSource> *)arg1;
- (char)isLoadingRepresentation;
- (struct CGSize)fittingSize;
- (void)setLoadingRepresentation:(char)arg0;
- (void)_updateRepresentation;
- (void)setCacheIdentifier:(NSString *)arg0;
- (void)setRequestingContext:(NSObject *)arg0;
- (NSString *)cacheIdentifier;
- (NSString *)requestingContext;
- (void)_updateWithRepresentation:(<WebDocumentRepresentation> *)arg0;
- (void)_loadBestRepresentationIfNeeded;
- (id)bestImageFromDisk;
- (void)setDestination:(NSObject *)arg0 configurationBlock:(id /* block */)arg1;
- (char)isArtworkVisuallyIdenticalToCatalog:(id)arg0;
- (void)requestColorAnalysisWithAlgorithm:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)requestFocusRegionsWithCompletionHandler:(id /* block */)arg0;
- (void)setCacheIdentifier:(NSString *)arg0 forRequestingContext:(NSObject *)arg1;
- (int)MP_artworkType;
- (void)dealloc;
- (void)setDataSource:(<MPArtworkDataSource> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<MPArtworkDataSource> *)dataSource;
- (MKMapItem *)destination;
- (void)setDestination:(NSObject *)arg0;
- (NSCache *)cache;
- (id /* block */)configurationBlock;
- (void)setConfigurationBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (NSString *)token;
- (void)setToken:(NSString *)arg0;

@end
