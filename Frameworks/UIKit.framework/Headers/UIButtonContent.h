/* Runtime dump - UIButtonContent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButtonContent : NSObject <NSCoding, NSCopying>
{
    NSString * title;
    NSAttributedString * attributedTitle;
    UIImage * image;
    UIImage * background;
    UIColor * titleColor;
    UIColor * imageColor;
    UIColor * shadowColor;
    NSNumber * drawingStroke;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSAttributedString * attributedTitle;
@property (retain, nonatomic) UIImage * image;
@property (retain, nonatomic) UIImage * background;
@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) UIColor * imageColor;
@property (retain, nonatomic) UIColor * shadowColor;
@property (retain, nonatomic) NSNumber * drawingStroke;
@property (retain, nonatomic) _UIGraphicsLetterpressStyle * letterpressStyle;
@property (readonly, nonatomic) char isEmpty;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UIButtonContent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setAttributedTitle:(NSAttributedString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (UIButtonContent *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (UIImage *)image;
- (void)setShadowColor:(UIColor *)arg0;
- (UIColor *)shadowColor;
- (void)setLetterpressStyle:(_UIGraphicsLetterpressStyle *)arg0;
- (_UIGraphicsLetterpressStyle *)letterpressStyle;
- (NSAttributedString *)attributedTitle;
- (UIImage *)background;
- (void)setBackground:(UIImage *)arg0;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (UIColor *)imageColor;
- (void)setImageColor:(UIColor *)arg0;
- (NSNumber *)drawingStroke;
- (void)setDrawingStroke:(NSNumber *)arg0;

@end
