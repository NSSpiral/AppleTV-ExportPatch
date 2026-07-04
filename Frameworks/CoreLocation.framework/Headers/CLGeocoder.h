/* Runtime dump - CLGeocoder
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLGeocoder : NSObject
{
    CLGeocoderInternal * _internal;
}

@property (readonly, nonatomic) char geocoding;

- (void)reverseGeocodeLocation:(NSObject *)arg0 heading:(double)arg1 localResultsOnly:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)reverseGeocodeLocation:(NSObject *)arg0 heading:(double)arg1 completionHandler:(id /* block */)arg2;
- (char)isGeocoding;
- (void)_notifyNoResult;
- (void)_ticket:(NSObject *)arg0 didReturnError:(NSError *)arg1 partialResultForLocation:(NSObject *)arg2;
- (void)_ticket:(NSObject *)arg0 didReturnGeoMapItems:(NSArray *)arg1;
- (void)_ensureMainThreadExecutionContextForBlock:(id /* block */)arg0;
- (void)_ticket:(NSObject *)arg0 didReturnError:(NSError *)arg1;
- (void)geocodeAddressString:(NSString *)arg0 inRegion:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)_notifyCancel;
- (void)_notifyResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)reverseGeocodeLocation:(NSObject *)arg0 localResultsOnly:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)reverseGeocodeLocation:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)geocodeAddressDictionary:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
- (void)cancelGeocode;
- (void)_notifyPartialResult:(NSObject *)arg0;
- (void)geocodeAddressString:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)_notifyError:(NSError *)arg0;
- (void)_notifyResult:(NSObject *)arg0;
- (void)dealloc;
- (CLGeocoder *)init;

@end
