/* Runtime dump - GEOGeocodeRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequester : NSObject
{
    NSMapTable * _pendingGeocodes;
    NSMapTable * _pendingBatchGeocodes;
    NSLock * _pendingGeocodesLock;
}

+ (void)_countryProvidersDidChange:(NSDictionary *)arg0;
+ (GEOGeocodeRequester *)sharedGeocodeRequester;

- (void)dealloc;
- (GEOGeocodeRequester *)init;
- (void)forwardGeocode:(id)arg0 success:(char *)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)reverseGeocode:(id)arg0 success:(char *)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)cancelGeocode:(id)arg0;
- (void)batchReverseGeocode:(id)arg0 success:(char *)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)cancelBatchReverseGeocode:(id)arg0;

@end
