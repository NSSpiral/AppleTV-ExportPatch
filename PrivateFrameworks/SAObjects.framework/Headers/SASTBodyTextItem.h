/* Runtime dump - SASTBodyTextItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>

@property (copy, nonatomic) NSString * bodyText;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)bodyTextItem;
+ (NSDictionary *)bodyTextItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setBodyText:(NSString *)arg0;
- (NSString *)bodyText;
- (NSString *)encodedClassName;

@end
