/* Runtime dump - UIKeyboardEmojiInputController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiInputController : NSObject
{
    int _currentSequence;
    NSMutableDictionary * _usageHistory;
    NSMutableArray * _recents;
    NSMutableDictionary * _skinToneBaseKeyPreferences;
    int _lastViewedCategory;
}

@property int lastViewedCategory;

+ (void)writeEmojiDefaultsAndReleaseActiveInputView;
+ (Class)classForInputView;
+ (void)writeEmojiDefaults;
+ (NSObject *)activeInputView;

- (void)dealloc;
- (UIKeyboardEmojiInputController *)initWithInputView:(NSObject *)arg0;
- (int)lastViewedCategory;
- (NSMutableDictionary *)skinToneBaseKeyPreferences;
- (void)updateSkinToneBaseKey:(NSString *)arg0 variantUsed:(id)arg1;
- (void)emojiUsed:(id)arg0;
- (NSMutableArray *)recents;
- (void)setLastViewedCategory:(int)arg0;
- (double)scoreForSequence:(int)arg0;
- (double)scoreForEmoji:(id)arg0;
- (char)isAncientSequence:(int)arg0;
- (void)clearAncientHistory;
- (NSDictionary *)defaultsDictionary;

@end
