/* Runtime dump - SASTHeaderItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTHeaderItem : AceObject <SASTTemplateItem>

@property (retain, nonatomic) SAUIDecoratedText * header;
@property (retain, nonatomic) SAUIDecoratedText * subtitle;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)headerItem;
+ (NSDictionary *)headerItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (SAUIDecoratedText *)subtitle;
- (void)setSubtitle:(SAUIDecoratedText *)arg0;
- (void)setHeader:(SAUIDecoratedText *)arg0;
- (SAUIDecoratedText *)header;
- (NSString *)encodedClassName;

@end
