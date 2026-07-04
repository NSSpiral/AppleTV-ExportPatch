/* Runtime dump - SASTItemGroup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTItemGroup : SAUISnippet

@property (copy, nonatomic) NSArray * templateItems;

+ (CKDMMCSItemGroup *)itemGroup;
+ (NSDictionary *)itemGroupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)templateItems;
- (void)setTemplateItems:(NSArray *)arg0;

@end
