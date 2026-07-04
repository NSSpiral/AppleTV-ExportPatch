/* Runtime dump - ATVIPv4AddressSelectionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVIPv4AddressSelectionWidget, BRImageControl, BRTextControl;
@interface ATVIPv4AddressSelectionControl : BRControl
{
    NSArray * _octetBackgroundLayers;
    NSArray * _digitLayers;
    NSArray * _dotLayers;
    BRImageControl * _arrowsLayer;
    ATVIPv4AddressSelectionWidget * _selectionWidget;
    BRTextControl * _doneLayer;
    int _selection;
}

- (void)controlWasActivated;
- (NSArray *)accessibilityTraitsList;
- (struct CGRect)preferredFrameForScreenSize:(NSObject *)arg0;
- (char)moveSelectionLeft;
- (char)moveSelectionRight;
- (char)incrementSelection;
- (char)decrementSelection;
- (char)setValueAtSelection:(int)arg0;
- (char)doneButtonSelected;
- (id)_buildOctetBackgroundLayers;
- (id)_buildDigitLayers;
- (id)_buildDotLayers;
- (CALayer *)_buildArrowsLayer;
- (CALayer *)_buildDoneLayer;
- (float)_layoutUIWithHeight:(float)arg0;
- (void)_setSelection:(int)arg0;
- (void)_setDigitValue:(int)arg0 atIndex:(int)arg1;
- (NSDictionary *)_textEntryGlyphGrayAttributes;
- (NSDictionary *)_textEntryGlyphAttributes;
- (struct CGRect)_arrowsFrameForSelection:(id)arg0;
- (struct CGRect)_selectionWidgetFrameForSelection:(id)arg0;
- (struct CGRect)_digitFrameForSelection:(id)arg0;
- (void)_setDigitHighlighted:(char)arg0 atIndex:(int)arg1;
- (float)_singleCellWidth;
- (struct CGRect)_cellFrameForSelection:(id)arg0;
- (void)dealloc;
- (ATVIPv4AddressSelectionControl *)init;
- (void)setFrame:(struct CGRect)arg0;
- (void)reset;
- (NSString *)accessibilityLabel;
- (NSString *)ipAddress;
- (void)setIPAddress:(NSString *)arg0;

@end
