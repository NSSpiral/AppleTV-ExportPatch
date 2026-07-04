/* Runtime dump - GEOSearchResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchResponse : GEOPlaceSearchResponse
{
    NSMapTable * _attributionKeysToInfo;
}

- (void)dealloc;
- (void)_addAttributionInfo:(NSDictionary *)arg0;
- (NSString *)attributionInfoForSourceIdentifier:(NSString *)arg0 sourceVersion:(unsigned int)arg1;

@end
