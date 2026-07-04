/* Runtime dump - BRTabControlItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMultiPartWidgetLayer, BRTextControl;
@interface BRTabControlItem : BRControl
{
    id _opaqueIdentifier;
    BRMultiPartWidgetLayer * _baseControl;
    BRTextControl * _label;
}

- (void)layoutSubcontrols;
- (void)setLabelAttributes:(NSDictionary *)arg0;
- (void)setLabelOpacity:(float)arg0;
- (void)setTabImages:(id)arg0;
- (void)dealloc;
- (BRTabControlItem *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (BRTextControl *)label;
- (void)setLabel:(BRTextControl *)arg0;
- (char)isAccessibilityElement;

@end
