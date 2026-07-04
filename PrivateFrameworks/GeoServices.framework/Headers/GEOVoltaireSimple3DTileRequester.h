/* Runtime dump - GEOVoltaireSimple3DTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester

+ (unsigned char)tileProviderIdentifier;

- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0;
- (NSString *)urlForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)_baseURLStringForTileKey:(struct _GEOTileKey *)arg0;
- (unsigned int)tileSetForKey:(struct _GEOTileKey *)arg0;

@end
