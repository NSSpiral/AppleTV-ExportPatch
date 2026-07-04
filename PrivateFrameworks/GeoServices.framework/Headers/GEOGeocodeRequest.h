/* Runtime dump - GEOGeocodeRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequest : GEOPlaceSearchRequest
{
    unsigned short _geocodeProvider;
}

@property (nonatomic) unsigned short geocodeProvider;

- (GEOGeocodeRequest *)initReverseGeocodeWithCoordinate:(struct ?)arg0;
- (GEOGeocodeRequest *)initForwardGeocodeWithAddress:(NSString *)arg0;
- (GEOGeocodeRequest *)initReverseGeocodeWithCoordinate:(struct ?)arg0 includeBusinessOptions:(char)arg1;
- (GEOGeocodeRequest *)initForwardGeocodeWithAddressDictionary:(NSDictionary *)arg0;
- (GEOGeocodeRequest *)initForwardGeocodeWithAddressString:(NSString *)arg0;
- (unsigned short)geocodeProvider;
- (void)setGeocodeProvider:(unsigned short)arg0;
- (GEOGeocodeRequest *)initWithAddress:(NSString *)arg0 maxResults:(int)arg1 traits:(NSArray *)arg2;
- (GEOGeocodeRequest *)initWithCoordinate:(struct ?)arg0 includeEntryPoints:(char)arg1 traits:(NSArray *)arg2;

@end
