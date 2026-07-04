/* Runtime dump - GEOSearchRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchRequest : GEOPlaceSearchRequest

- (Class)responseClass;
- (GEOSearchRequest *)initWithBusinessIDs:(unsigned long long *)arg0 traits:(NSArray *)arg1;
- (GEOSearchRequest *)initWithSearchQuery:(ATVDataQuery *)arg0 hint:(id)arg1 maxResults:(unsigned int)arg2 suppressResultsRequiringAttribution:(char)arg3 traits:(NSArray *)arg4;
- (GEOSearchRequest *)initWithFragment:(NSString *)arg0 entriesType:(int)arg1 listType:(int)arg2 traits:(NSArray *)arg3;

@end
