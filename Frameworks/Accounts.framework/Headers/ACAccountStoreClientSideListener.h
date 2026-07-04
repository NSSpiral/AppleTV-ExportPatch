/* Runtime dump - ACAccountStoreClientSideListener
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ACAccountStoreClientSideListener *)sharedClientSideListener;

- (void)accountCredentialsDidChangeForAccountWithIdentifier:(NSString *)arg0;

@end
