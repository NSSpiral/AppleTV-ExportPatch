/* Runtime dump - SASportsMetadata
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSNumber * average;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSNumber * selected;
@property (copy, nonatomic) NSString * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)metadata;
+ (NSDictionary *)metadataWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)identifier;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)setSelected:(NSNumber *)arg0;
- (NSNumber *)selected;
- (NSString *)encodedClassName;
- (NSNumber *)average;
- (void)setAverage:(NSNumber *)arg0;

@end
