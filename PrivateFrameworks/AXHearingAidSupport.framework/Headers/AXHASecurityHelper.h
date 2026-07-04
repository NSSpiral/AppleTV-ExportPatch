/* Runtime dump - AXHASecurityHelper
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHASecurityHelper : NSObject
{
    struct __SecIdentity * _appleIDIdentity;
    NSArray * _certificateDescription;
    AXHAAccessQueue * _securityQueue;
}

@property (retain, nonatomic) NSArray * certificateDescription;
@property (retain, nonatomic) AXHAAccessQueue * securityQueue;

+ (AXHASecurityHelper *)sharedHelper;

- (void)dealloc;
- (AXHASecurityHelper *)init;
- (id)trustChain;
- (char)shouldTrustStream:(NSObject *)arg0;
- (void)setSecurityQueue:(AXHAAccessQueue *)arg0;
- (void)prepareHelper;
- (void)setCertificateDescription:(NSArray *)arg0;
- (AXHAAccessQueue *)securityQueue;
- (NSArray *)certificateDescription;
- (char)trustChainAvailable;
- (NSObject *)certificateChainForIdentity:(struct __SecIdentity *)arg0;
- (NSObject *)certificateChainFromTrust:(struct __SecTrust *)arg0;

@end
