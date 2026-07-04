/* Runtime dump - SAObjectSupport
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * aceVersion;
@property (copy, nonatomic) NSString * classId;
@property (copy, nonatomic) NSString * groupId;
@property (copy, nonatomic) NSArray * supportedProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAObjectSupport *)objectSupport;
+ (NSDictionary *)objectSupportWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)supportedProperties;
- (NSString *)groupIdentifier;
- (NSString *)groupId;
- (void)setGroupId:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)aceVersion;
- (void)setAceVersion:(NSString *)arg0;
- (NSString *)classId;
- (void)setClassId:(NSString *)arg0;
- (void)setSupportedProperties:(NSArray *)arg0;

@end
