/* Runtime dump - GEORPVoltaireProblemProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPVoltaireProblemProvider : GEORPProblemProvider <PBRequesterDelegate>
{
    GEORequester * _submissionRequester;
    GEORequester * _statusRequester;
    GEORequester * _notificationAvailabilityRequester;
    id _submissionErrorHandler;
    id _submissionFinishedHandler;
    id _statusErrorHandler;
    id _statusFinishedHandler;
    id _notificationAvailabilityErrorHandler;
    id _notificationAvailabilityFinishedHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)cancelRequest;
- (void)startSubmissionRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startStatusRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startNotificationAvailabilityRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;

@end
