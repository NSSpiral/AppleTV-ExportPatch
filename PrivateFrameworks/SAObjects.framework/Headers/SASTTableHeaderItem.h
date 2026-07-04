/* Runtime dump - SASTTableHeaderItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTTableHeaderItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSArray * columnValues;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)tableHeaderItem;
+ (NSDictionary *)tableHeaderItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)columnValues;
- (void)setColumnValues:(NSArray *)arg0;

@end
