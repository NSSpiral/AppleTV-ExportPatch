/* Runtime dump - MPMediaLibraryArtworkDataSource
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource>
{
    char _usesFallbackCache;
    NSCache * _fallbackCache;
    MPArtworkResizeUtility * _artworkResizeUtility;
}

@property (nonatomic) char usesFallbackCache;
@property (retain, nonatomic) NSCache * fallbackCache;
@property (retain, nonatomic) MPArtworkResizeUtility * artworkResizeUtility;
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
- (NSObject *)existingArtworkEffectResultForEffectType:(unsigned int)arg0 catalog:(CUICatalog *)arg1 options:(NSDictionary *)arg2;
- (void)loadArtworkEffectResultForEffectType:(unsigned int)arg0 catalog:(CUICatalog *)arg1 options:(NSDictionary *)arg2 systemEffectHandler:(id /* block */)arg3 completionHandler:(/* block */ id)arg4;
- (id)_cachedRepresentationForCatalog:(id)arg0;
- (char)_isRepresentation:(NSDictionary *)arg0 validForCatalog:(id)arg1;
- (NSObject *)_representationAtSize:(struct CGSize)arg0 forCatalog:(CUICatalog *)arg1;
- (void)_cacheRepresentation:(NSDictionary *)arg0 forCatalog:(CUICatalog *)arg1;
- (UIImage *)_resizeArtwork:(UIImage *)arg0 toSize:(struct CGSize)arg1 completionHandler:(id /* block */)arg2;
- (void)_resizeOriginalArtworkForArtworkCatalog:(id)arg0 completionHandler:(id /* block */)arg1;
- (char)usesFallbackCache;
- (NSCache *)fallbackCache;
- (char)_isRepresentationSize:(struct CGSize)arg0 validForFittingSize:(struct CGSize)arg1;
- (MPArtworkResizeUtility *)artworkResizeUtility;
- (void)setUsesFallbackCache:(char)arg0;
- (void)setFallbackCache:(NSCache *)arg0;
- (void)setArtworkResizeUtility:(MPArtworkResizeUtility *)arg0;
- (MPMediaLibraryArtworkDataSource *)init;
- (void).cxx_destruct;

@end
