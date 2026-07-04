/* Runtime dump - UIKeyboardEmojiDefaultsController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiDefaultsController : NSObject
{
    NSMutableDictionary * _defaults;
}

+ (UIKeyboardEmojiDefaultsController *)sharedController;

- (void)dealloc;
- (UIKeyboardEmojiDefaultsController *)init;
- (int)emojiCategoryDefaultsIndex:(NSObject *)arg0;
- (NSDictionary *)emptyDefaultsDictionary;
- (void)handleWrite:(id)arg0;
- (void)handleRead:(id)arg0;
- (void)writeEmojiDefaults;
- (void)readEmojiDefaults;
- (void)setEmojiCategoryDefaultsIndex:(int)arg0 forCategory:(NSString *)arg1;
- (void)setRecentsKey:(NSString *)arg0;
- (NSString *)recentsKey;
- (void)setUsageHistoryKey:(NSString *)arg0;
- (NSString *)usageHistoryKey;
- (void)setSkinToneBaseKeyPreferencesKey:(NSString *)arg0;
- (NSString *)skinToneBaseKeyPreferencesKey;
- (void)setCurrentSequenceKey:(int)arg0;
- (int)currentSequenceKey;
- (void)setDefaultsValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)defaultsValueForKey:(NSString *)arg0;

@end
