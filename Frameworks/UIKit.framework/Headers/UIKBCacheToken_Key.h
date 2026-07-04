/* Runtime dump - UIKBCacheToken_Key
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCacheToken_Key : UIKBCacheToken
{
    id _style;
    NSString * _cacheDisplayString;
    int _displayTypeHint;
    int _displayRowHint;
    struct CGSize _size;
    int _state;
    int _clipCorners;
    char _usesInsets;
    struct UIEdgeInsets _displayInsets;
}

+ (NSString *)tokenForKey:(NSString *)arg0 style:(struct ?)arg1;
+ (NSString *)tokenForKey:(NSString *)arg0 style:(struct ?)arg1 displayInsets:(struct UIEdgeInsets)arg2;

- (void)dealloc;
- (struct CGSize)size;
- (NSString *)string;
- (void)setSize:(struct CGSize)arg0;
- (char)hasKey;
- (NSString *)stringForRenderFlags:(int)arg0 lightKeyboard:(char)arg1;
- (int)rowHint;
- (void)setRowHint:(int)arg0;
- (int)displayHint;
- (void)setDisplayHint:(int)arg0;
- (NSString *)_initWithKey:(NSString *)arg0 style:(struct ?)arg1 displayInsets:(struct UIEdgeInsets)arg2;
- (NSArray *)_stringWithAdditionalValues:(NSArray *)arg0;

@end
