/* Runtime dump - UIKBShadowEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect>
{
    NSString * _colorName;
    float _weight;
    struct CGSize _offset;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _concaveInsets;
}

@property (nonatomic) struct CGSize offset;
@property (nonatomic) struct UIEdgeInsets insets;
@property (nonatomic) struct UIEdgeInsets concaveInsets;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char renderUnder;
@property (readonly, nonatomic) SEL renderSelector;
@property (nonatomic) float weight;

+ (UIColor *)effectWithColor:(UIColor *)arg0 offset:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 weight:(float)arg3;

- (void)dealloc;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isValid;
- (UIKBShadowEffect *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOffset:(struct CGSize)arg0;
- (struct CGSize)offset;
- (void)setConcaveInsets:(struct UIEdgeInsets)arg0;
- (float)weight;
- (char)renderUnder;
- (SEL)renderSelector;
- (void)setWeight:(float)arg0;
- (UIKBShadowEffect *)initWithColor:(UIColor *)arg0 offset:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 weight:(float)arg3;
- (struct UIEdgeInsets)insets;
- (struct UIEdgeInsets)concaveInsets;
- (void)setInsets:(struct UIEdgeInsets)arg0;

@end
