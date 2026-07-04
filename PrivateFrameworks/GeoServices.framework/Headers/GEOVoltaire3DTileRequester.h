/* Runtime dump - GEOVoltaire3DTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester

+ (Class)multiDownloaderClass;
+ (Class)simpleRequesterClass;
+ (struct _GEOTileKey)patchTileKey:(struct _GEOTileKey *)arg0;
+ (NSString *)queryStringFromKey:(struct _GEOTileKey *)arg0 manifestConfiguration:(struct _GEOTileKey)arg1;
+ (unsigned char)tileProviderIdentifier;

- (NSString *)multiTileURLStringForTileKey:(struct _GEOTileKey *)arg0 useStatusCodes:(char *)arg1;
- (unsigned int)tileSetForKey:(struct _GEOTileKey *)arg0;

@end
