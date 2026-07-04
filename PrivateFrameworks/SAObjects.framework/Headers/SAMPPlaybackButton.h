/* Runtime dump - SAMPPlaybackButton
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlaybackButton : SAAceView

@property (copy, nonatomic) NSArray * pauseCommands;
@property (copy, nonatomic) NSArray * playCommands;

+ (SAMPPlaybackButton *)playbackButton;
+ (NSDictionary *)playbackButtonWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)pauseCommands;
- (void)setPauseCommands:(NSArray *)arg0;
- (NSArray *)playCommands;
- (void)setPlayCommands:(NSArray *)arg0;

@end
