/* Runtime dump - SSAskPermissionActionRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAskPermissionActionRequest : SSRequest <SSXPCCoding>
{
    NSURL * _url;
}

@property (readonly, nonatomic) NSURL * URL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSAskPermissionActionRequest *)initWithXPCEncoding:(NSString *)arg0;
- (SSAskPermissionActionRequest *)initWithURL:(NSURL *)arg0;
- (NSURL *)URL;

@end
