/* Runtime dump - GEOVoltaireSimpleTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0;
- (NSString *)urlForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)localizationURLForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)_localizationURLForTileKey:(struct _GEOTileKey *)arg0;
- (unsigned int)tileSetForKey:(struct _GEOTileKey *)arg0;

@end
