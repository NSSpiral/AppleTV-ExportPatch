/* Runtime dump - GEOLocalizationRegionsInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizationRegionsInfo : NSObject
{
    NSDictionary * _regions;
    NSLock * _regionsLock;
}

- (void)dealloc;
- (GEOLocalizationRegionsInfo *)init;
- (void)reset;
- (char)needsLocalizationForKey:(struct _GEOTileKey *)arg0 language:(struct _GEOTileKey)arg1;

@end
