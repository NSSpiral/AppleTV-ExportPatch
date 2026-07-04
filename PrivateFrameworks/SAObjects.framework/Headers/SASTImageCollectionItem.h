/* Runtime dump - SASTImageCollectionItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTImageCollectionItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSArray * images;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)imageCollectionItem;
+ (NSDictionary *)imageCollectionItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)images;
- (void)setImages:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
