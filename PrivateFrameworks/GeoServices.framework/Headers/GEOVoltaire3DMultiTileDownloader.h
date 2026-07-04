/* Runtime dump - GEOVoltaire3DMultiTileDownloader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaire3DMultiTileDownloader : GEOVoltaireMultiTileDownloader

- (NSString *)_localizationURLIfNecessaryForTileKey:(struct _GEOTileKey *)arg0;
- (struct _GEOTileKey)_tileKeyForURL:(NSURL *)arg0 edition:(unsigned int *)arg1 isLocalized:(char *)arg2;
- (NSString *)_baseURLStringForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)_urlForTileKey:(struct _GEOTileKey *)arg0;

@end
