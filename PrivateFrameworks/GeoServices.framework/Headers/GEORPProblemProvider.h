/* Runtime dump - GEORPProblemProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemProvider : NSObject

- (void)cancelRequest;
- (void)startSubmissionRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startStatusRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startNotificationAvailabilityRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;

@end
