/* Runtime dump - BRMetadataLineLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface BRMetadataLineLayer : BRControl
{
    BRControl * _labelLayer;
    BRControl * _valueLayer;
    float _maxLabelWidth;
}

- (void)layoutSubcontrols;
- (void)setMaxLabelWidth:(float)arg0;
- (BRMetadataLineLayer *)initWithLabel:(NSString *)arg0 value:(NSObject *)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void *)value;
- (NSString *)accessibilityLabel;
- (NSString *)label;

@end
