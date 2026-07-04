/* Runtime dump - SSKeybagRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSKeybagRequest : SSRequest <SSXPCCoding>
{
    NSNumber * _accountID;
    id _contentIdentifier;
    int _options;
}

@property (readonly) NSNumber * accountID;
@property (copy) id contentIdentifier;
@property int keybagOptions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (SSKeybagRequest *)initWithAccountIdentifier:(NSString *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSKeybagRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)setContentIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSNumber *)accountID;
- (NSString *)accountIdentifier;
- (NSString *)contentIdentifier;
- (int)keybagOptions;
- (void)setKeybagOptions:(int)arg0;

@end
