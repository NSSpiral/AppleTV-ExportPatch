/* Runtime dump - SASource
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASource : SADomainObject

@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * accountName;
@property (copy, nonatomic) NSString * domainIdentifier;
@property (copy, nonatomic) NSNumber * remote;

+ (void *)source;
+ (NSDictionary *)sourceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setDomainIdentifier:(NSString *)arg0;
- (NSString *)domainIdentifier;
- (NSString *)groupIdentifier;
- (void)setAccountIdentifier:(NSString *)arg0;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (NSString *)accountIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)remote;
- (void)setRemote:(NSNumber *)arg0;

@end
