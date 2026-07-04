/* Runtime dump - UIKeyboardEmojiCategory
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCategory : NSObject
{
    int _categoryType;
    NSArray * _emoji;
    int _lastVisibleFirstEmojiIndex;
    NSString * _displaySymbol;
}

@property int categoryType;
@property (retain) NSArray * emoji;
@property (nonatomic) int lastVisibleFirstEmojiIndex;
@property (readonly, nonatomic) NSString * name;
@property (readonly) NSString * displaySymbol;

+ (NSString *)localizedStringForKey:(NSString *)arg0;
+ (int)numberOfCategories;
+ (NSObject *)categoryForType:(int)arg0;
+ (NSString *)displayName:(int)arg0;
+ (NSArray *)categories;
+ (char)emojiString:(NSString *)arg0 inGroup:(unsigned int *)arg1 withGroupCount:(int)arg2;
+ (unsigned int)hasVariantsForEmoji:(id)arg0;
+ (UIKeyboardEmojiCategory *)emojiRecentsFromPreferences;

- (void)dealloc;
- (NSArray *)emoji;
- (NSString *)name;
- (void)setEmoji:(NSArray *)arg0;
- (void)setCategoryType:(int)arg0;
- (int)categoryType;
- (void)releaseCategories;
- (int)lastVisibleFirstEmojiIndex;
- (void)setLastVisibleFirstEmojiIndex:(int)arg0;
- (NSString *)displaySymbol;

@end
