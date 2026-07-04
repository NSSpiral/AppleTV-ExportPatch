/* Runtime dump - SARelatedName
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARelatedName : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)relatedName;
+ (NSDictionary *)relatedNameWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
