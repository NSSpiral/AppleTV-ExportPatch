/* Runtime dump - UIKBCacheToken
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCacheToken : NSObject <NSCopying>
{
    NSMutableArray * _components;
    NSString * _name;
    float _scale;
    int _emptyFields;
    int _renderFlags;
}

@property (readonly, nonatomic) NSString * string;
@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) int rowHint;
@property (nonatomic) int displayHint;
@property (nonatomic) int renderFlags;
@property (nonatomic) int emptyFields;
@property (readonly, nonatomic) char hasKey;

+ (UIKBCacheToken *)tokenForKeyplane:(id)arg0;
+ (NSString *)tokenForKey:(NSString *)arg0 style:(struct ?)arg1;
+ (NSObject *)tokenForKeyMask:(NSObject *)arg0 style:(struct ?)arg1 displayInsets:(struct UIEdgeInsets)arg2;
+ (NSString *)tokenForKey:(NSString *)arg0 style:(struct ?)arg1 displayInsets:(struct UIEdgeInsets)arg2;
+ (NSString *)tokenTemplateForKey:(NSString *)arg0 name:(NSString *)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (NSString *)tokenTemplateFilledForKey:(NSString *)arg0 style:(int)arg1 size:(struct CGSize)arg2;
+ (NSString *)tokenTemplateForKey:(NSString *)arg0 style:(int)arg1 size:(struct CGSize)arg2;

- (void)dealloc;
- (struct CGSize)size;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (UIKBCacheToken *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (void)setSize:(struct CGSize)arg0;
- (NSObject *)stringForState:(int)arg0;
- (int)emptyFields;
- (char)hasKey;
- (NSString *)stringForKey:(NSString *)arg0 state:(int)arg1;
- (NSObject *)stringForSplitState:(char)arg0;
- (NSString *)stringForRenderFlags:(int)arg0 lightKeyboard:(char)arg1;
- (int)renderFlags;
- (UIKBCacheToken *)initWithComponents:(NSMutableArray *)arg0 name:(NSString *)arg1;
- (int)_writeString:(NSString *)arg0 toStr:(char *)arg1 maxLen:(int)arg2;
- (int)_writeNumber:(float)arg0 toStr:(char *)arg1;
- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg0 toStr:(char *)arg1 maxLen:(int)arg2;
- (int)_writeArray:(NSArray *)arg0 toStr:(char *)arg1 maxLen:(int)arg2;
- (NSString *)stringForConstruction:(id)arg0;
- (NSArray *)stringForComponentArray:(NSArray *)arg0 additionalValues:(NSArray *)arg1;
- (UIKBCacheToken *)initWithName:(NSString *)arg0;
- (int)rowHint;
- (void)setRowHint:(int)arg0;
- (int)displayHint;
- (void)setDisplayHint:(int)arg0;
- (void)setEmptyFields:(int)arg0;
- (void)setRenderFlags:(int)arg0;

@end
