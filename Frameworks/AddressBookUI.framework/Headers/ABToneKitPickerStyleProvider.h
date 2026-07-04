/* Runtime dump - ABToneKitPickerStyleProvider
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABToneKitPickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>
{
    CNContactStyle * _contactStyle;
}

@property (retain, nonatomic) CNContactStyle * contactStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char tonePickerUsesOpaqueBackground;
@property (readonly, nonatomic) int tonePickerTableViewSeparatorStyle;
@property (readonly, nonatomic) UIFont * tonePickerCellTextFont;
@property (readonly, nonatomic) UIColor * tonePickerCellTextColor;
@property (readonly, nonatomic) UIColor * tonePickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor * tonePickerCellBackgroundColor;
@property (readonly, nonatomic) char wantsCustomTonePickerHeaderView;
@property (readonly, nonatomic) UIFont * tonePickerHeaderTextFont;
@property (readonly, nonatomic) UIColor * tonePickerHeaderTextColor;
@property (readonly, nonatomic) UIColor * tonePickerHeaderTextShadowColor;
@property (readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;
@property (readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor * tonePickerCustomTableSeparatorColor;
@property (readonly, nonatomic) int tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) char tonePickerHeaderTextShouldBeUppercase;
@property (readonly, nonatomic) char vibrationPickerUsesOpaqueBackground;
@property (readonly, nonatomic) int vibrationPickerTableViewSeparatorStyle;
@property (readonly, nonatomic) UIFont * vibrationPickerCellTextFont;
@property (readonly, nonatomic) UIColor * vibrationPickerCellTextColor;
@property (readonly, nonatomic) UIColor * vibrationPickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor * vibrationPickerCellBackgroundColor;
@property (readonly, nonatomic) char wantsCustomVibrationPickerHeaderView;
@property (readonly, nonatomic) UIFont * vibrationPickerHeaderTextFont;
@property (readonly, nonatomic) UIColor * vibrationPickerHeaderTextColor;
@property (readonly, nonatomic) UIColor * vibrationPickerHeaderTextShadowColor;
@property (readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property (readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor * vibrationPickerCustomTableSeparatorColor;
@property (readonly, nonatomic) int vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) char vibrationPickerHeaderTextShouldBeUppercase;

- (void)setContactStyle:(CNContactStyle *)arg0;
- (CNContactStyle *)contactStyle;
- (char)tonePickerUsesOpaqueBackground;
- (int)tonePickerTableViewSeparatorStyle;
- (UIColor *)tonePickerCustomTableSeparatorColor;
- (int)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
- (UIFont *)tonePickerCellTextFont;
- (UIColor *)tonePickerCellTextColor;
- (UIColor *)tonePickerCellHighlightedTextColor;
- (UIColor *)tonePickerCellBackgroundColor;
- (NSObject *)newBackgroundViewForSelectedTonePickerCell:(char)arg0;
- (NSObject *)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (char)wantsCustomTonePickerHeaderView;
- (UIFont *)tonePickerHeaderTextFont;
- (UIColor *)tonePickerHeaderTextColor;
- (UIColor *)tonePickerHeaderTextShadowColor;
- (struct UIOffset)tonePickerHeaderTextShadowOffset;
- (struct UIEdgeInsets)tonePickerHeaderTextPaddingInsets;
- (char)tonePickerHeaderTextShouldBeUppercase;
- (NSObject *)newBackgroundViewForSelectedVibrationPickerCell:(char)arg0;
- (NSObject *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (char)vibrationPickerUsesOpaqueBackground;
- (int)vibrationPickerTableViewSeparatorStyle;
- (UIFont *)vibrationPickerCellTextFont;
- (UIColor *)vibrationPickerCellTextColor;
- (UIColor *)vibrationPickerCellHighlightedTextColor;
- (UIColor *)vibrationPickerCellBackgroundColor;
- (char)wantsCustomVibrationPickerHeaderView;
- (UIFont *)vibrationPickerHeaderTextFont;
- (UIColor *)vibrationPickerHeaderTextColor;
- (UIColor *)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset)vibrationPickerHeaderTextShadowOffset;
- (struct UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;
- (UIColor *)vibrationPickerCustomTableSeparatorColor;
- (int)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
- (char)vibrationPickerHeaderTextShouldBeUppercase;

@end
