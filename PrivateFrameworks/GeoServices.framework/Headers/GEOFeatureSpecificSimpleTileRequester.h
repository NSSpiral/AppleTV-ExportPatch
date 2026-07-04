/* Runtime dump - GEOFeatureSpecificSimpleTileRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester
{
    unsigned long long _featureID;
}

- (NSString *)urlForTileKey:(struct _GEOTileKey *)arg0;
- (NSString *)_localizationURLForTileKey:(struct _GEOTileKey *)arg0;
- (GEOFeatureSpecificSimpleTileRequester *)initWithKeyList:(GEOTileKeyList *)arg0 manifestConfiguration:(GEOResourceManifestConfiguration *)arg1 locale:(NSObject *)arg2 featureID:(unsigned long long)arg3;

@end
