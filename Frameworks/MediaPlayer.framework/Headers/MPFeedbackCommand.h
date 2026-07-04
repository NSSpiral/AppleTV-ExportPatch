/* Runtime dump - MPFeedbackCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFeedbackCommand : MPRemoteCommand
{
    int _presentationStyle;
    char _active;
    NSString * _localizedTitle;
    NSString * _localizedShortTitle;
}

@property (nonatomic) char active;
@property (copy, nonatomic) NSString * localizedTitle;
@property (copy, nonatomic) NSString * localizedShortTitle;

- (void)setLocalizedTitle:(NSString *)arg0;
- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setLocalizedShortTitle:(NSString *)arg0;
- (void)setPresentationStyle:(int)arg0;
- (NSString *)localizedShortTitle;
- (char)isActive;
- (int)presentationStyle;
- (void)setActive:(char)arg0;
- (void).cxx_destruct;
- (NSString *)localizedTitle;

@end
