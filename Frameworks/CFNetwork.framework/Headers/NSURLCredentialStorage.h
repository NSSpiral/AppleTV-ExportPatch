/* Runtime dump - NSURLCredentialStorage
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCredentialStorage : NSObject
{
    NSURLCredentialStorageInternal * _internal;
}

@property (readonly, copy) NSDictionary * allCredentials;

+ (NSURLCredentialStorage *)sharedCredentialStorage;

- (NSDictionary *)allCredentials;
- (void)removeCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1;
- (void)getCredentialsForProtectionSpace:(NSObject *)arg0 task:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)getDefaultCredentialForProtectionSpace:(NSObject *)arg0 task:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)setCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1 task:(NSObject *)arg2;
- (void)setDefaultCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1 task:(NSObject *)arg2;
- (NSObject *)credentialsForProtectionSpace:(NSObject *)arg0;
- (void)setCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1;
- (void)setDefaultCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1;
- (NSURLCredentialStorage *)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage *)arg0;
- (void)removeCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1 options:(NSDictionary *)arg2;
- (NSString *)_initWithIdentifier:(NSString *)arg0 private:(BOOL)arg1;
- (struct _CFURLCredentialStorage *)_CFURLCredentialStorage;
- (void)removeCredential:(NSObject *)arg0 forProtectionSpace:(NSObject *)arg1 options:(NSDictionary *)arg2 task:(NSObject *)arg3;
- (void)dealloc;
- (NSURLCredentialStorage *)init;
- (NSObject *)defaultCredentialForProtectionSpace:(NSObject *)arg0;

@end
