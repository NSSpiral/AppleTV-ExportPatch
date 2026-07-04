/* Runtime dump - SettingsMetadataView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface SettingsMetadataView : BRControl
{
    char _wrapValueText;
    float _horizontalPadding;
}

@property char wrapValueText;
@property (nonatomic) float horizontalPadding;

- (void)layoutSubcontrols;
- (NSString *)_valueAccessibilityLabelForLabel:(NSString *)arg0 andValue:(id)arg1;
- (void)setValues:(NSArray *)arg0 forLabels:(id)arg1;
- (char)wrapValueText;
- (void)setWrapValueText:(char)arg0;
- (SettingsMetadataView *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)setHorizontalPadding:(float)arg0;
- (float)horizontalPadding;

@end
