/* Runtime dump - UITextRenderingAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRenderingAttributes : NSObject <NSCopying>
{
    UIFont * _font;
    float _minimumFontSize;
    float _actualFontSize;
    float _lineSpacing;
    int _lineBreakMode;
    int _baselineAdjustment;
    float _trackingAdjustment;
    float _minimumTrackingAdjustment;
    float _actualTrackingAdjustment;
    int _alignment;
    char _includeEmoji;
    struct CGRect _truncationRect;
    char _drawUnderline;
}

- (UITextRenderingAttributes *)init;
- (UITextRenderingAttributes *)copyWithZone:(struct _NSZone *)arg0;

@end
