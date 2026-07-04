/* Runtime dump - SSPlayInfoRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding>
{
    SSPlayInfoRequestContext * _context;
    SSPlayInfoResponse * _response;
}

@property (readonly) SSPlayInfoRequestContext * playInfoContext;
@property (readonly) SSPlayInfoResponse * playInfoResponse;
@property (nonatomic) <SSPlayInfoRequestDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSPlayInfoRequest *)initWithXPCEncoding:(NSString *)arg0;
- (SSPlayInfoRequest *)initWithPlayInfoContext:(SSPlayInfoRequestContext *)arg0;
- (void)startWithPlayInfoResponseBlock:(SSPlayInfoResponse *)arg0;
- (void)dealloc;
- (SSPlayInfoRequest *)init;
- (char)start;
- (SSPlayInfoRequestContext *)playInfoContext;
- (SSPlayInfoResponse *)playInfoResponse;

@end
