/* Runtime dump - MKRightPaddedTextAttachment
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRightPaddedTextAttachment : NSTextAttachment
{
    float _padding;
}

@property (nonatomic) float padding;

- (UIImage *)_contentViewForImage:(UIImage *)arg0;
- (void)setImage:(UIImage *)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (void)setPadding:(float)arg0;
- (float)padding;

@end
