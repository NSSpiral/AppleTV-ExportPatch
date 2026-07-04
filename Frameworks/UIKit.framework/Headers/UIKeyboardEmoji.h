/* Runtime dump - UIKeyboardEmoji
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmoji : NSObject
{
    NSString * _emojiString;
    unsigned int _variantMask;
}

@property (retain, nonatomic) NSString * emojiString;
@property unsigned int variantMask;

+ (NSString *)emojiWithString:(NSString *)arg0 withVariantMask:(unsigned int)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)emojiString;
- (unsigned int)variantMask;
- (NSString *)key;
- (void)setEmojiString:(NSString *)arg0;
- (UIKeyboardEmoji *)initWithString:(NSString *)arg0 withVariantMask:(unsigned int)arg1;
- (void)setVariantMask:(unsigned int)arg0;

@end
