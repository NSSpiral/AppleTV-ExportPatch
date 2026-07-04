/* Runtime dump - GEOGeocodeProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeProvider : NSObject
{
    id _successHandler;
    id _batchSuccessHandler;
    id _errorHandler;
}

@property (copy, nonatomic) id successHandler;
@property (copy, nonatomic) id batchSuccessHandler;
@property (copy, nonatomic) id errorHandler;

+ (NSString *)providerName;

- (void)cancel;
- (void)dealloc;
- (void)setErrorHandler:(id /* block */)arg0;
- (id /* block */)errorHandler;
- (void)forwardGeocode:(id)arg0 success:(char *)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)reverseGeocode:(id)arg0 success:(char *)arg1 error:(/* block */ id)arg2;
- (void)batchReverseGeocode:(id)arg0 success:(char *)arg1 error:(/* block */ id)arg2;
- (id /* block */)successHandler;
- (void)setSuccessHandler:(id /* block */)arg0;
- (id /* block */)batchSuccessHandler;
- (void)setBatchSuccessHandler:(id /* block */)arg0;

@end
