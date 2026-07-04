/* Runtime dump - GEOVoltaireGeocodeProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate>
{
    GEORequester * _requester;
    char _isForwardGeocodeRequest;
    char _isBatchRequest;
    char _cancelled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)providerName;
+ (NSString *)forwardGeocoderURL;
+ (NSString *)reverseGeocoderURL;
+ (NSString *)batchReverseGeocoderURL;

- (void)cancel;
- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)forwardGeocode:(id)arg0 success:(char *)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)reverseGeocode:(id)arg0 success:(char *)arg1 error:(/* block */ id)arg2;
- (void)batchReverseGeocode:(id)arg0 success:(char *)arg1 error:(/* block */ id)arg2;
- (id)newRequester:(GEOFeatureSpecificSimpleTileRequester *)arg0;
- (void)_batchRequesterDidFinish:(id)arg0;
- (void)_singleRequesterDidFinish:(id)arg0;

@end
