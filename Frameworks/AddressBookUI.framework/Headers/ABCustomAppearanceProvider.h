/* Runtime dump - ABCustomAppearanceProvider
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCustomAppearanceProvider : NSObject
{
    ABStyleProvider * _styleProvider;
}

- (Class)propertyCellClass;
- (Class)actionCellClass;
- (id)newActionButton;
- (NSObject *)newScrollingBackgroundView;
- (float)distanceBetweenSections;
- (void)setHighlighted:(char)arg0 onPropertyCell:(NSObject *)arg1;
- (void)setIndicatesFaceTimeHistory:(char)arg0 onActionButton:(_CertInfoActionButton *)arg1;
- (int)unknownModalPresentationStyle;
- (char)shouldUseCardContentProviderWhenAvailable;
- (Class)customCardCellClass;
- (Class)customCardActionCellClass;
- (id)newCardActionButton;
- (NSObject *)newCustomCardTableScrollingBackgroundView;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(char)arg0;
- (float)cardTableViewSectionFooterHeightWhenEditing:(char)arg0;
- (char)shouldPropagateStylesToPickers;
- (char)shouldPropagateStylesThroughUnknownPersonActions;
- (void)customSetEmphasized:(char)arg0 onCell:(NSObject *)arg1;
- (void)dealloc;
- (ABCustomAppearanceProvider *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;

@end
