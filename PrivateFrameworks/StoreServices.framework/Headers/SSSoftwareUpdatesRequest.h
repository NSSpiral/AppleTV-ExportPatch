/* Runtime dump - SSSoftwareUpdatesRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesRequest : SSRequest
{
    SSSoftwareUpdatesContext * _context;
}

@property (readonly) SSSoftwareUpdatesContext * updateQueueContext;
@property (nonatomic) <SSSoftwareUpdatesRequestDelegate> * delegate;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSSoftwareUpdatesRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)start;
- (void)startWithUpdatesResponseBlock:(id /* block */)arg0;
- (SSSoftwareUpdatesRequest *)initWithUpdateQueueContext:(SSSoftwareUpdatesContext *)arg0;
- (SSSoftwareUpdatesContext *)updateQueueContext;

@end
