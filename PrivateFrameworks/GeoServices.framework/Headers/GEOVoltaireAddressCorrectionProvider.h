/* Runtime dump - GEOVoltaireAddressCorrectionProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireAddressCorrectionProvider : NSObject <PBRequesterDelegate>
{
    GEORequester * _requester;
    id _errorHandler;
    id _initFinishedHandler;
    id _updateFinishedHandler;
}

@property (retain, nonatomic) GEORequester * requester;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)acInitUrl;
+ (NSURL *)acUpdateURL;

- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)cancelRequest;
- (GEORequester *)requester;
- (void)setRequester:(GEORequester *)arg0;
- (void)startInitRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startUpdateRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;

@end
