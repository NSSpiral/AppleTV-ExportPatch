/* Runtime dump - SAPhoneVoiceMailSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber * autoPlay;
@property (copy, nonatomic) NSArray * calls;
@property (copy, nonatomic) NSArray * playVoiceMailCommands;
@property (retain, nonatomic) <SAClientBoundCommand> * postPlayCommand;

+ (SAPhoneVoiceMailSnippet *)voiceMailSnippet;
+ (NSDictionary *)voiceMailSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSNumber *)autoPlay;
- (void)setAutoPlay:(NSNumber *)arg0;
- (NSArray *)playVoiceMailCommands;
- (void)setPlayVoiceMailCommands:(NSArray *)arg0;
- (<SAClientBoundCommand> *)postPlayCommand;
- (void)setPostPlayCommand:(<SAClientBoundCommand> *)arg0;
- (NSArray *)calls;
- (void)setCalls:(NSArray *)arg0;

@end
