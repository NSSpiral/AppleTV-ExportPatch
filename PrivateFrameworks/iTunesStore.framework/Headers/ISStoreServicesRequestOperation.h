/* Runtime dump - ISStoreServicesRequestOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreServicesRequestOperation : ISOperation
{
    SSRequest * _request;
}

@property (readonly) SSRequest * request;

- (void)cancel;
- (void)dealloc;
- (SSRequest *)request;
- (void)run;
- (ISStoreServicesRequestOperation *)initWithRequest:(SSRequest *)arg0;

@end
