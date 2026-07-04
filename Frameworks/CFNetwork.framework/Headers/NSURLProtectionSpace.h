/* Runtime dump - NSURLProtectionSpace
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>
{
    NSURLProtectionSpaceInternal * _internal;
}

@property (readonly, copy) NSString * realm;
@property (readonly) char receivesCredentialSecurely;
@property (readonly) char isProxy;
@property (readonly, copy) NSString * host;
@property (readonly) int port;
@property (readonly, copy) NSString * proxyType;
@property (readonly, copy) NSString * protocol;
@property (readonly, copy) NSString * authenticationMethod;

+ (char)supportsSecureCoding;

- (struct _CFURLProtectionSpace *)_cfurlprtotectionspace;
- (id)_internalInit;
- (char)receivesCredentialSecurely;
- (void)dealloc;
- (NSURLProtectionSpace *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURLProtectionSpace *)init;
- (char)isEqual:(NSObject *)arg0;
- (char)isProxy;
- (unsigned int)hash;
- (NSString *)description;
- (NSURLProtectionSpace *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)host;
- (NSString *)authenticationMethod;
- (NSString *)protocol;
- (int)port;
- (NSObject *)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg0;
- (NSString *)realm;
- (struct _CFURLProtectionSpace *)_CFURLProtectionSpace;
- (NSURLProtectionSpace *)initWithProxyHost:(NSString *)arg0 port:(int)arg1 type:(NSObject *)arg2 realm:(NSString *)arg3 authenticationMethod:(NSString *)arg4;
- (NSURLProtectionSpace *)initWithHost:(NSString *)arg0 port:(int)arg1 protocol:(NSString *)arg2 realm:(NSString *)arg3 authenticationMethod:(NSString *)arg4;
- (NSArray *)distinguishedNames;
- (struct __SecTrust *)serverTrust;
- (NSString *)proxyType;

@end
