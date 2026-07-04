/* Runtime dump - SAUIAcePronunciationItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * commands;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * tts;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)acePronunciationItem;
+ (NSDictionary *)acePronunciationItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSArray *)commands;
- (void)setCommands:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSString *)tts;
- (void)setTts:(NSString *)arg0;

@end
