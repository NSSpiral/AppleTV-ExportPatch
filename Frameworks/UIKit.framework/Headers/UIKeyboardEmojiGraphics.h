/* Runtime dump - UIKeyboardEmojiGraphics
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiGraphics : NSObject

+ (UIKeyboardEmojiGraphics *)sharedInstance;
+ (NSString *)emojiCategoryImagePath:(NSString *)arg0;
+ (struct CGSize)emojiSize:(char)arg0;
+ (struct CGPoint)padding:(char)arg0;
+ (UIKeyboardEmojiGraphics *)emojiFontAttributesForPortrait:(char)arg0;
+ (unsigned char)colCount:(char)arg0;
+ (NSDictionary *)emojiFontAttributes;
+ (unsigned char)rowCount:(char)arg0;
+ (struct CGPoint)margin:(char)arg0;
+ (float)recentLableVerticalPadding:(char)arg0;
+ (float)optionalDescriptionPadding:(char)arg0;
+ (float)emojiPageControlYOffset:(char)arg0;
+ (char)boldText;

- (UIKeyboardEmojiGraphics *)init;

@end
