/* Runtime dump - MFMailAccountProxyGenerator
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailAccountProxyGenerator : NSObject
{
    _MFMailAccountProxySource * _proxySource;
    char _allowsRestrictedAccounts;
}

- (MFMailAccountProxyGenerator *)initWithAllowsRestrictedAccounts:(char)arg0;
- (NSString *)accountProxyContainingEmailAddress:(NSString *)arg0 includingInactive:(char)arg1 originatingBundleID:(NSString *)arg2 sourceAccountManagement:(int)arg3;
- (NSObject *)defaultMailAccountProxyForDeliveryOriginatingBundleID:(NSObject *)arg0 sourceAccountManagement:(int)arg1;
- (NSObject *)activeAccountProxiesOriginatingBundleID:(NSObject *)arg0 sourceAccountManagement:(int)arg1;
- (id)allAccountProxies;
- (NSString *)accountProxyContainingEmailAddress:(NSString *)arg0 includingInactive:(char)arg1;
- (void)dealloc;
- (MFMailAccountProxyGenerator *)init;

@end
