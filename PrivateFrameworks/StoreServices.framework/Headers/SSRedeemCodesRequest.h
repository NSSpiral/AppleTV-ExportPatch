/* Runtime dump - SSRedeemCodesRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext * _authenticationContext;
    NSArray * _redeemCodes;
    char _headless;
    char _cameraRecognized;
}

@property (readonly) NSArray * redeemCodes;
@property (copy) SSAuthenticationContext * authenticationContext;
@property char headless;
@property char cameraRecognized;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSRedeemCodesRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSAuthenticationContext *)authenticationContext;
- (void)startWithRedeemResponseBlock:(id /* block */)arg0;
- (SSRedeemCodesRequest *)initWithRedeemCodes:(NSArray *)arg0;
- (NSArray *)redeemCodes;
- (char)headless;
- (void)setHeadless:(char)arg0;
- (char)cameraRecognized;
- (void)setCameraRecognized:(char)arg0;

@end
