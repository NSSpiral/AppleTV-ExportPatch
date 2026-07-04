/* Runtime dump - BRPanelControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRContainerViewCell;

@class BRControl;
@interface BRPanelControl : BRControl <BRContainerViewCell>
{
    BRControl * _background;
    int _mode;
    float _nonAxisAlignment;
    float _verticalSpacing;
    float _verticalMargin;
    float _horizontalSpacing;
    float _horizontalMargin;
    id _loadCompletionBlock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubcontrols;
- (void)setIgnoreLoadAndDisplayOnDemand;
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(char)arg0;
- (void)setPanelMode:(int)arg0;
- (void)setHorizontalSpacing:(float)arg0;
- (struct CGPoint)positionForControlAtIndex:(unsigned int)arg0 preSize:(float *)arg1 postSize:(float *)arg2;
- (void)focusDirectlyOnControl:(BRControl *)arg0;
- (void)setNonAxisAlignment:(float)arg0;
- (void)cancelContainerViewLoad;
- (void)setReadyToDisplay;
- (float)horizontalMargin;
- (void)setHorizontalMargin:(float)arg0;
- (void)setVerticalSpacing:(float)arg0;
- (struct CGSize)_performFlowRightToLeft:(id)arg0 inBounds:(struct CGSize)arg1 setFrame:(char)arg2;
- (struct CGSize)_performFlowTopToBottom:(id)arg0 inBounds:(struct CGSize)arg1 setFrame:(char)arg2;
- (void)_performFillRightToLeft:(id)arg0;
- (void)_performFillTopToBottom:(id)arg0;
- (int)panelMode;
- (void)setBackgroundControl:(BRControl *)arg0;
- (BRControl *)backgroundControl;
- (float)nonAxisAlignment;
- (float)verticalSpacing;
- (void)setVerticalMargin:(float)arg0;
- (float)verticalMargin;
- (float)horizontalSpacing;
- (void)setHorizontalSpacingForPreferredWidth:(float)arg0 minimumSpacing:(float)arg1;
- (struct CGRect)_marginedFrameForFrame:(NSObject *)arg0 screenRes:(SEL)arg1;
- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (BRPanelControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;

@end
