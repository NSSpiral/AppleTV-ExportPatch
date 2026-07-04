/* Runtime dump - SASPronunciationContext
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * domainObjectIdentifier;
@property (copy, nonatomic) NSString * domainObjectPropertyIdentifier;
@property (copy, nonatomic) NSString * fullName;
@property (copy, nonatomic) NSString * orthography;
@property (copy, nonatomic) NSNumber * tokenOffset;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)pronunciationContext;
+ (NSDictionary *)pronunciationContextWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)orthography;
- (NSString *)fullName;
- (void)setFullName:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)setOrthography:(NSString *)arg0;
- (NSNumber *)tokenOffset;
- (void)setTokenOffset:(NSNumber *)arg0;
- (NSURL *)domainObjectIdentifier;
- (void)setDomainObjectIdentifier:(NSURL *)arg0;
- (NSString *)domainObjectPropertyIdentifier;
- (void)setDomainObjectPropertyIdentifier:(NSString *)arg0;

@end
