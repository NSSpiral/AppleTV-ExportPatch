/* Runtime dump - GEODirectionsRouteResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRouteResponse : GEODirectionsResponse

- (NSString *)description;
- (NSDictionary *)dictionaryRepresentation;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (GEODirectionsRouteResponse *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
