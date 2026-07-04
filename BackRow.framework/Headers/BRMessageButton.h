/* Runtime dump - BRMessageButton
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRHorizontalSegmentedWidget.h>

@class BRHorizontalSegmentedWidget;
@interface BRMessageButton : BRHorizontalSegmentedWidget
{
    BRHorizontalSegmentedWidget * _segmentedImage;
    ATVImage * _leftSelectedImage;
    ATVImage * _centerSelectedImage;
    ATVImage * _rightSelectedImage;
    ATVImage * _leftUnselectedImage;
    ATVImage * _centerUnselectedImage;
    ATVImage * _rightUnselectedImage;
    NSDictionary * _selectedTextAttributes;
    NSDictionary * _unselectedTextAttributes;
    NSString * _title;
}

@property (copy, nonatomic) NSString * title;

- (void)_handleWindowMaxBoundsChanged:(NSNotification *)arg0;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (NSArray *)accessibilityTraitsList;
- (id)additionalActions;
- (float)verticalTextDisplacementFactor;
- (void)_setupAssetsAndAttributes;
- (void)_updateTextForCurrentFocusState;
- (void)dealloc;
- (BRMessageButton *)init;
- (void)setTitle:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)title;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
