/* Runtime dump - SASTGridItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTGridItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSArray * gridCells;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)gridItem;
+ (NSDictionary *)gridItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)gridCells;
- (void)setGridCells:(NSArray *)arg0;

@end
