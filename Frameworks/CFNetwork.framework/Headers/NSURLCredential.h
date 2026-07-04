/* Runtime dump - NSURLCredential
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying>
{
    NSURLCredentialInternal * _internal;
}

@property (readonly) unsigned int persistence;

+ (NSURLCredential *)credentialWithUser:(id)arg0 password:(NSString *)arg1 persistence:(unsigned int)arg2;
+ (NSObject *)credentialWithIdentity:(struct __SecIdentity *)arg0 certificates:(NSArray *)arg1 persistence:(unsigned int)arg2;
+ (NSObject *)credentialForTrust:(struct __SecTrust *)arg0;
+ (char)supportsSecureCoding;

- (NSURLCredential *)initWithUser:(HMUser *)arg0 password:(NSString *)arg1 persistence:(unsigned int)arg2;
- (NSURLCredential *)initWithIdentity:(struct __SecIdentity *)arg0 certificates:(NSArray *)arg1 persistence:(unsigned int)arg2;
- (NSURLCredential *)initWithTrust:(struct __SecTrust *)arg0;
- (struct _CFURLCredential *)_CFURLCredential;
- (char)hasPassword;
- (unsigned int)persistence;
- (char)_hasSWCACreatorAttribute;
- (void)_removeSWCACreatorAttribute;
- (void)dealloc;
- (NSURLCredential *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSURLCredential *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)password;
- (NSString *)user;
- (NSArray *)certificates;
- (struct __SecIdentity *)identity;
- (struct _CFURLCredential *)_cfurlcredential;
- (NSObject *)_initWithCFURLCredential:(struct _CFURLCredential *)arg0;

@end
