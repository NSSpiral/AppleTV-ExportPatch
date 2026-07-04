/* Runtime dump - SSVKeybagSyncRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVKeybagSyncRequest : SSRequest <SSXPCCoding>
{
    NSNumber * _accountID;
}

@property (readonly, nonatomic) NSNumber * accountIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (SSVKeybagSyncRequest *)initWithAccountIdentifier:(NSNumber *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSVKeybagSyncRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void).cxx_destruct;
- (NSNumber *)accountIdentifier;

@end
