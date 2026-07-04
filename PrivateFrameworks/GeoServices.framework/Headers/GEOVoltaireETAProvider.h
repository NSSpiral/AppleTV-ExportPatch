/* Runtime dump - GEOVoltaireETAProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireETAProvider : GEOETAProvider <PBRequesterDelegate>
{
    GEORequester * _requester;
    id _errorHandler;
    id _finishedHandler;
    id _willSendRequestHandler;
    id _simpleETARequestFinishedHandler;
    char _cancelled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)requesterWillSendRequestForEstablishedConnection:(NSURLConnection *)arg0;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)cancelRequest;
- (void)startRequest:(NSURLRequest *)arg0 connectionProperties:(struct ? *)arg1 willSendRequest:(struct ?)arg2 finished:(id /* block */)arg3 error:(/* block */ id)arg4;
- (void)updateRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startSimpleETARequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;

@end
