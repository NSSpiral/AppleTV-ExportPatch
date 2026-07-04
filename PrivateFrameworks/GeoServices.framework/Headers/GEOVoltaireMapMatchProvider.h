/* Runtime dump - GEOVoltaireMapMatchProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate>
{
    GEORequester * _requester;
    id _errorHandler;
    id _finishedHandler;
    char _cancelled;
}

@property (retain, nonatomic) GEORequester * requester;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)providerURL;

- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)cancelRequest;
- (GEORequester *)requester;
- (void)setRequester:(GEORequester *)arg0;

@end
