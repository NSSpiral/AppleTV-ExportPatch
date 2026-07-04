/* Runtime dump - SAUIHtmlView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIHtmlView : SAAceView

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSString * descriptionText;
@property (copy, nonatomic) NSString * html;

+ (NSObject *)htmlView;
+ (NSDictionary *)htmlViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (void)setDescriptionText:(NSString *)arg0;
- (NSString *)descriptionText;
- (NSString *)encodedClassName;
- (NSString *)html;
- (void)setHtml:(NSString *)arg0;

@end
