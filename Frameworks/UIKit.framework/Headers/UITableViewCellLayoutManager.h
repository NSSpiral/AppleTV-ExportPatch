/* Runtime dump - UITableViewCellLayoutManager
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellLayoutManager : NSObject

+ (UITableViewCellLayoutManager *)_alternateUISwitchableSelectorPairs;
+ (NSObject *)layoutManagerForTableViewCellStyle:(int)arg0;
+ (UIColor *)_externalTextColor;
+ (UIColor *)_alternateExternalTextColor;
+ (UIColor *)_externalDetailTextColor;
+ (UIColor *)_alternateExternalDetailTextColor;

- (struct CGRect)contentRectForCell:(NSObject *)arg0 forState:(SEL)arg1;
- (struct CGRect)backgroundEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (void)layoutSubviewsOfCell:(NSObject *)arg0;
- (struct CGRect)contentRectForCell:(NSObject *)arg0 forState:(SEL)arg1 rowWidth:(float)arg2;
- (NSObject *)textLabelForCell:(NSObject *)arg0;
- (NSObject *)detailTextLabelForCell:(NSObject *)arg0;
- (NSObject *)editableTextFieldForCell:(NSObject *)arg0;
- (NSObject *)imageViewForCell:(NSObject *)arg0;
- (NSObject *)badgeForCell:(NSObject *)arg0;
- (struct CGRect)contentEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (void)cell:(NSObject *)arg0 willTransitionToState:(unsigned int)arg1;
- (void)cell:(NSObject *)arg0 didTransitionToState:(unsigned int)arg1;
- (struct CGRect)selectedBackgroundEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (struct CGRect)backgroundStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (struct CGSize)intrinsicContentSizeForCell:(NSObject *)arg0 rowWidth:(float)arg1;
- (struct CGRect)_backgroundRectForCell:(NSObject *)arg0 forIndentedState:(SEL)arg1 rowWidth:(float)arg2;
- (struct CGRect)_adjustedBackgroundRectForCell:(NSObject *)arg0 forIndentedState:(SEL)arg1 rowWidth:(float)arg2;
- (struct CGRect)_adjustedBackgroundContentRectForCell:(NSObject *)arg0 forIndentedState:(SEL)arg1 rowWidth:(float)arg2;
- (struct CGRect)_adjustedBackgroundRectForCell:(NSObject *)arg0 forIndentedState:(SEL)arg1;
- (struct CGRect)_adjustedBackgroundContentRectForCell:(NSObject *)arg0 forIndentedState:(SEL)arg1;
- (char)accessoryShouldAppearForCell:(NSObject *)arg0;
- (char)editingAccessoryShouldAppearForCell:(NSObject *)arg0;
- (char)reorderSeparatorShouldAppearForCell:(NSObject *)arg0;
- (struct CGRect)_reorderSeparatorRectForCell:(NSObject *)arg0 offscreen:(SEL)arg1;
- (struct CGRect)_reorderControlRectForCell:(NSObject *)arg0 offscreen:(SEL)arg1;
- (struct CGRect)_editingAccessoryRectForCell:(NSObject *)arg0 offscreen:(SEL)arg1;
- (char)reorderControlShouldAppearForCell:(NSObject *)arg0;
- (struct CGRect)_accessoryRectForCell:(NSObject *)arg0 offscreen:(SEL)arg1;
- (struct CGRect)_contentRectForCell:(NSObject *)arg0 forEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2 rowWidth:(char)arg3;
- (char)editControlShouldAppearForCell:(NSObject *)arg0;
- (struct CGRect)_editControlRectForCell:(NSObject *)arg0 offscreen:(SEL)arg1;
- (struct CGRect)deleteConfirmationRectForCell:(NSObject *)arg0;
- (struct CGRect)_backgroundRectForCell:(NSObject *)arg0 forIndentedState:(SEL)arg1;
- (struct CGRect)_contentRectForCell:(NSObject *)arg0 forEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (float)defaultTextLabelFontSizeForCell:(NSObject *)arg0;
- (NSObject *)defaultTextLabelFontForCell:(NSObject *)arg0;
- (NSObject *)defaultLabelForCell:(NSObject *)arg0 ofClass:(Class)arg1;
- (NSObject *)defaultImageViewForCell:(NSObject *)arg0;
- (NSObject *)defaultLabelForCell:(NSObject *)arg0;
- (NSObject *)defaultBadgeForCell:(NSObject *)arg0;
- (struct CGRect)editControlEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (char)editControlShouldFadeForCell:(NSObject *)arg0;
- (struct CGRect)reorderControlEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (char)reorderControlShouldFadeForCell:(NSObject *)arg0;
- (struct CGRect)reorderSeparatorEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (char)reorderSeparatorShouldFadeForCell:(NSObject *)arg0;
- (struct CGRect)accessoryEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (char)accessoryShouldFadeForCell:(NSObject *)arg0;
- (struct CGRect)editingAccessoryEndingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (char)editingAccessoryShouldFadeForCell:(NSObject *)arg0;
- (struct CGRect)contentEndingRectForCell:(NSObject *)arg0 forDisplayOfDeleteConfirmation:(SEL)arg1;
- (float)contentIndentationForCell:(NSObject *)arg0;
- (void)getTextLabelRect:(struct CGRect *)arg0 detailTextLabelRect:(struct CGSize)arg1 forCell:(NSObject *)arg2 rowWidth:(struct CGRect *)arg3;
- (struct CGRect)editControlStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (struct CGRect)reorderControlStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (struct CGRect)reorderSeparatorStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (struct CGRect)accessoryStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (struct CGRect)editingAccessoryStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1 showingDeleteConfirmation:(char)arg2;
- (struct CGRect)contentStartingRectForCell:(NSObject *)arg0 forDisplayOfDeleteConfirmation:(SEL)arg1;
- (struct CGRect)contentStartingRectForCell:(NSObject *)arg0 forNewEditingState:(SEL)arg1;
- (struct CGRect)textRectForCell:(NSObject *)arg0 rowWidth:(SEL)arg1;
- (float)defaultDetailTextLabelFontSizeForCell:(NSObject *)arg0;
- (NSObject *)defaultDetailTextLabelFontForCell:(NSObject *)arg0;
- (NSObject *)defaultEditableTextFieldForCell:(NSObject *)arg0;
- (struct CGRect)textRectForCell:(NSObject *)arg0;

@end
