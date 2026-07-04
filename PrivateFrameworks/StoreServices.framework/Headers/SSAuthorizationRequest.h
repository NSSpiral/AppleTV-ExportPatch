/* Runtime dump - SSAuthorizationRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding>
{
    NSNumber * _accountIdentifier;
    NSString * _keybagPath;
    id _token;
    NSString * _reason;
}

@property (readonly) NSNumber * accountIdentifier;
@property (readonly) id authorizationToken;
@property (copy) NSString * keybagPath;
@property (copy) NSString * reason;
@property (nonatomic) <SSAuthorizationRequestDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (SSAuthorizationRequest *)initWithAuthorizationToken:(NSString *)arg0 accountIdentifier:(NSNumber *)arg1;
- (void)setKeybagPath:(NSString *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSAuthorizationRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSAuthorizationRequest *)init;
- (NSString *)reason;
- (char)start;
- (NSString *)keybagPath;
- (void)startWithAuthorizationResponseBlock:(id /* block */)arg0;
- (NSNumber *)accountIdentifier;
- (void)setReason:(NSString *)arg0;
- (NSString *)authorizationToken;

@end
