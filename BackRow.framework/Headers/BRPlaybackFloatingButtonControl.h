/* Runtime dump - BRPlaybackFloatingButtonControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVThreePartHorizontalStretchView.h>

@class ATVFeedVideoFloatingButtonElement;
@interface BRPlaybackFloatingButtonControl : ATVThreePartHorizontalStretchView
{
    ATVFeedVideoFloatingButtonElement * _feedElement;
}

@property (copy, nonatomic) ATVFeedVideoFloatingButtonElement * feedElement;

- (void)layoutSubcontrols;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (NSArray *)accessibilityTraitsList;
- (ATVFeedVideoFloatingButtonElement *)feedElement;
- (void)setFeedElement:(ATVFeedVideoFloatingButtonElement *)arg0;
- (void)_configureImagesForFocused:(char)arg0;
- (void)_adjustTitleAttributesForFocus;
- (BRPlaybackFloatingButtonControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
