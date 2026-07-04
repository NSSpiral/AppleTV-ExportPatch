/* Runtime dump - SAMPSearchConstraint
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * query;
@property (copy, nonatomic) NSArray * searchProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)searchConstraint;
+ (NSDictionary *)searchConstraintWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)query;
- (void)setQuery:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)searchProperties;
- (void)setSearchProperties:(NSArray *)arg0;

@end
