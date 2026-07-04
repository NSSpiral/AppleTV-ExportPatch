/* Runtime dump - SSVServerAuthenticateRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVServerAuthenticateRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext * _authenticationContext;
    NSObject<OS_xpc_object> * _dialog;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> * encodedDialog;
@property (copy, nonatomic) SSAuthenticationContext * authenticationContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVServerAuthenticateRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (SSAuthenticationContext *)authenticationContext;
- (SSVServerAuthenticateRequest *)initWithEncodedDialog:(NSObject<OS_xpc_object> *)arg0;
- (void)startWithAuthenticateResponse:(NSURLResponse *)arg0;
- (NSObject<OS_xpc_object> *)encodedDialog;

@end
