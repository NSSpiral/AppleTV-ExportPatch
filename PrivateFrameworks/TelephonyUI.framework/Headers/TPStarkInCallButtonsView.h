/* Runtime dump - TPStarkInCallButtonsView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallButtonsView : UIView
{
    int _highlightedControlIndex;
    int _buttonsMode;
    <TPStarkInCallButtonsViewDelegate> * _delegate;
    float _buttonDistributionScalingFactor;
    NSMutableDictionary * _buttonsDictionary;
    NSArray * _buttonsArray;
    NSMutableArray * _buttonDividerViews;
}

@property int buttonsMode;
@property <TPStarkInCallButtonsViewDelegate> * delegate;
@property (nonatomic) int highlightedControlIndex;
@property (readonly) int numberOfControls;
@property float buttonDistributionScalingFactor;
@property (retain) NSMutableDictionary * buttonsDictionary;
@property (retain) NSArray * buttonsArray;
@property (retain) NSMutableArray * buttonDividerViews;

- (void)setMuted:(char)arg0;
- (TPStarkInCallButtonsView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<TPStarkInCallButtonsViewDelegate> *)arg0;
- (<TPStarkInCallButtonsViewDelegate> *)delegate;
- (char)canBecomeFirstResponder;
- (char)shouldShowActionTypeSendToVoicemail;
- (void)setButtonsMode:(int)arg0 animated:(char)arg1;
- (void)setHighlightedControlIndex:(int)arg0;
- (int)highlightedControlIndex;
- (int)nextHighlightableControlFromIndex:(int)arg0 ascending:(char)arg1;
- (int)numberOfControls;
- (void)performActionForHighlightedControl;
- (void)setButtonDistributionScalingFactor:(float)arg0;
- (void)setButtonsDictionary:(NSMutableDictionary *)arg0;
- (void)setButtonDividerViews:(NSMutableArray *)arg0;
- (void)callCenterModelStateChangedNotification:(NSNotification *)arg0;
- (void)phoneCallStatusChangedNotification:(NSNotification *)arg0;
- (NSArray *)buttonsArray;
- (void)buttonWasTapped:(id)arg0;
- (NSObject *)buttonForButtonType:(int)arg0 createIfNecessary:(char)arg1 createWithHorizontalPositionFraction:(float)arg2;
- (void)setButtonsArray:(NSArray *)arg0;
- (NSArray *)existingButtonsNotInArray:(NSArray *)arg0;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg0 forButton:(UIButton *)arg1;
- (NSMutableArray *)buttonDividerViews;
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg0 forDividerView:(NSObject *)arg1;
- (void)removeButtons:(ABFMFActionButtons *)arg0;
- (void)updateButtonsForCallModelState;
- (NSMutableDictionary *)buttonsDictionary;
- (float)distributedFractionForUndistributedFraction:(float)arg0;
- (float)buttonDistributionScalingFactor;
- (NSObject *)keyForButtonType:(int)arg0;
- (int)buttonsMode;
- (void)setButtonsMode:(int)arg0;

@end
