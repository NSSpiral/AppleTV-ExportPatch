/* Runtime dump - SASportsMetadataGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * groupTitle;
@property (copy, nonatomic) NSArray * metadata;
@property (copy, nonatomic) NSNumber * selected;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)metadataGroup;
+ (NSDictionary *)metadataGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSelected:(NSNumber *)arg0;
- (NSNumber *)selected;
- (void)setMetadata:(NSArray *)arg0;
- (NSArray *)metadata;
- (NSString *)encodedClassName;
- (NSString *)groupTitle;
- (void)setGroupTitle:(NSString *)arg0;

@end
