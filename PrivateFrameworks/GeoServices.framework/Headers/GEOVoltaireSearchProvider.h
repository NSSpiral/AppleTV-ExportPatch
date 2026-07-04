/* Runtime dump - GEOVoltaireSearchProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate>
{
    GEORequester * _requester;
    id _finished;
    id _refinement;
    char _cancelled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLRequest *)_searchURLForRequest:(NSURLRequest *)arg0;

- (void)cancel;
- (void)dealloc;
- (void)requesterDidFinish:(NSObject *)arg0;
- (void)requesterDidCancel:(NSObject *)arg0;
- (void)requester:(GEORequester *)arg0 didFailWithError:(char)arg1;
- (void)search:(NSString *)arg0 timeout:(int)arg1 useBackgroundConnection:(char)arg2 finished:(id /* block */)arg3 refinement:(/* block */ id)arg4 error:(NSError *)arg5 isCompletions:(/* block */ id)arg6;

@end
