/* Runtime dump - GEOVoltaireDirectionsProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate>
{
    GEORequester * _requester;
    char _cancelled;
}

@property (retain, nonatomic) GEORequester * requester;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (GEORequester *)requester;
- (void)setRequester:(GEORequester *)arg0;
- (void)startProviderWithRequest:(NSURLRequest *)arg0;
- (void)cancelProviderRequest;
- (void)cleanupRequester;

@end
