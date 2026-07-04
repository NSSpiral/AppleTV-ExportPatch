/* Runtime dump - BRCXPCTokenClient
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>

- (NSString *)description;
- (void)currentAccountIsUsingUbiquityWithReply:(id /* block */)arg0;
- (void)currentAccountCopyTokenWithBundleID:(NSString *)arg0 version:(NSString *)arg1 reply:(id /* block */)arg2;

@end
