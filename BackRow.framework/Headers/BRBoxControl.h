/* Runtime dump - BRBoxControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRContainerViewCell;

@class BRControl, BRHorizontalDividerControl;
@interface BRBoxControl : BRControl <BRContainerViewCell>
{
    BRControl * _content;
    BRHorizontalDividerControl * _divider;
    float _dividerMargin;
    struct ? _dividerSuggestedHeight;
    struct ? _space;
    id _loadCompletionBlock;
    struct ? _contentSize;
}

@property (nonatomic) struct ? contentSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)windowMaxBoundsChanged;
- (void)setIgnoreLoadAndDisplayOnDemand;
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(char)arg0;
- (void)setDividerMargin:(float)arg0;
- (void)setDividerSuggestedHeight:(struct ?)arg0;
- (void)setDivider:(BRHorizontalDividerControl *)arg0;
- (void)cancelContainerViewLoad;
- (void)setReadyToDisplay;
- (BRHorizontalDividerControl *)divider;
- (struct ?)dividerSuggestedHeight;
- (float)dividerMargin;
- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (NSString *)description;
- (struct ?)contentSize;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (void)setContentSize:(struct ?)arg0;
- (BRControl *)content;
- (void)setSpace:(struct ?)arg0;
- (void)setContent:(BRControl *)arg0;

@end
