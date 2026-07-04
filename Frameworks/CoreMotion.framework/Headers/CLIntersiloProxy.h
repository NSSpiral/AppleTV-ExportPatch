/* Runtime dump - CLIntersiloProxy
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloProxy : NSProxy <CLIntersiloServiceProtocol>
{
    CLIntersiloProxy * _peer;
    CLIntersiloProxy * _asymStrongPeer;
    CLIntersiloInterfaceSelectorInfo * _last;
    <CLIntersiloProxyDelegateProtocol> * _delegate;
    CLSilo * _delegateSilo;
    CLIntersiloInterface * _delegateInterface;
    CLIntersiloInterface * _proxiedInterface;
}

@property (readonly, weak, nonatomic) <CLIntersiloProxyDelegateProtocol> * delegate;
@property (readonly, weak, nonatomic) CLSilo * delegateSilo;
@property (readonly, copy, nonatomic) CLIntersiloInterface * delegateInterface;
@property (readonly, copy, nonatomic) CLIntersiloInterface * proxiedInterface;
@property (nonatomic) char valid;

+ (void)becameFatallyBlocked:(id)arg0;
+ (CLIntersiloProxy *)getSilo;
+ (NSObject *)proxyForRecipientObject:(NSObject *)arg0 inSilo:(CLSilo *)arg1 withInboundInterface:(CLIntersiloInterface *)arg2 andOutboundInterface:(id)arg3;
+ (char)isSupported;

- (void)registerDelegate:(NSObject *)arg0 inSilo:(CLSilo *)arg1;
- (CLIntersiloProxy *)initWithDelegateInterface:(CLIntersiloInterface *)arg0 proxiedInterface:(CLIntersiloInterface *)arg1 delegateObject:(NSObject *)arg2 delegateSilo:(CLSilo *)arg3 andUninitializedPeer:(NSObject *)arg4;
- (CLIntersiloProxy *)initWithDelegateInterface:(CLIntersiloInterface *)arg0 proxiedInterface:(CLIntersiloInterface *)arg1 andUninitializedPeer:(NSObject *)arg2;
- (CLSilo *)delegateSilo;
- (CLIntersiloInterface *)delegateInterface;
- (CLIntersiloInterface *)proxiedInterface;
- (char)conformsToProtocol:(NSObject *)arg0;
- (<CLIntersiloProxyDelegateProtocol> *)delegate;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void).cxx_destruct;

@end
