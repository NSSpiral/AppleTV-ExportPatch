/* Runtime dump - SAUIAssistantHintView
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSArray * regions;

+ (NSObject *)assistantHintView;
+ (NSDictionary *)assistantHintViewWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)regions;
- (void)setRegions:(NSArray *)arg0;

@end
