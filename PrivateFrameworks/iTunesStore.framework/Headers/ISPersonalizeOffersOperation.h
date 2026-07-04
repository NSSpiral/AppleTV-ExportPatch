/* Runtime dump - ISPersonalizeOffersOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPersonalizeOffersOperation : ISOperation
{
    ISPersonalizeOffersRequest * _request;
    SSPersonalizeOffersResponse * _response;
}

@property (readonly) ISPersonalizeOffersRequest * personalizeOffersReqeust;
@property (readonly) SSPersonalizeOffersResponse * response;

- (void)dealloc;
- (void)run;
- (SSPersonalizeOffersResponse *)response;
- (char)_runWithURLDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (NSURL *)_copyResponseForURL:(NSURL *)arg0 requestString:(NSString *)arg1 error:(id *)arg2;
- (void)_addDictionaryToResponse:(NSURLResponse *)arg0;
- (ISPersonalizeOffersOperation *)initWithPersonalizeOffersRequest:(NSURLRequest *)arg0;
- (ISPersonalizeOffersRequest *)personalizeOffersReqeust;

@end
