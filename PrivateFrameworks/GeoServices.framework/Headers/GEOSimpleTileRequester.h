/* Runtime dump - GEOSimpleTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLConnectionDelegate>
{
    NSMutableArray * _waiting;
    NSMutableSet * _running;
    char _cancelled;
    char _subclassImplementsTileEdition;
    NSMutableArray * _errors;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)eTagType;

- (void)cancel;
- (void)dealloc;
- (void)_cleanup;
- (void)start;
- (char)isRunning;
- (GEOSimpleTileRequester *)initWithKeyList:(GEOTileKeyList *)arg0 manifestConfiguration:(GEOResourceManifestConfiguration *)arg1 locale:(NSLocale *)arg2 cachedEtags:(GEOTileKeyMap *)arg3 cachedData:(NSData *)arg4;
- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0;
- (void)_doWorkOrFinish;
- (id)mergeBaseTile:(id)arg0 withLocalizationTile:(id)arg1;
- (id)mergeBaseTileEtag:(id)arg0 withLocalizationTileEtag:(id)arg1;
- (NSString *)urlForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)editionHeader;
- (char)allowsCookies;
- (NSString *)localizationURLForTileKey:(struct _GEOTileKey *)arg0;
- (void)_operationFailed:(id)arg0 error:(NSError *)arg1;
- (void)_operationFinished:(id)arg0;

@end
