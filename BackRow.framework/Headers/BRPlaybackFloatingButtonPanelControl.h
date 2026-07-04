/* Runtime dump - BRPlaybackFloatingButtonPanelControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPanelControl.h>

@class ATVFeedVideoFloatingButtonsElement, BRPlaybackFloatingButtonControl;
@interface BRPlaybackFloatingButtonPanelControl : BRPanelControl
{
    NSArray * _buttonSets;
    ATVFeedVideoFloatingButtonsElement * _currentButtonSet;
    BRPlaybackFloatingButtonControl * _button1;
    BRPlaybackFloatingButtonControl * _button2;
    BRPlaybackFloatingButtonControl * _button3;
}

@property (copy, nonatomic) NSArray * buttonSets;
@property (retain, nonatomic) ATVFeedVideoFloatingButtonsElement * currentButtonSet;
@property (retain, nonatomic) BRPlaybackFloatingButtonControl * button1;
@property (retain, nonatomic) BRPlaybackFloatingButtonControl * button2;
@property (retain, nonatomic) BRPlaybackFloatingButtonControl * button3;

- (void)controlWasDeactivated;
- (void)setCurrentButtonSet:(ATVFeedVideoFloatingButtonsElement *)arg0;
- (ATVFeedVideoFloatingButtonsElement *)currentButtonSet;
- (void)_configureForFeedElement:(NSObject *)arg0;
- (NSArray *)buttonSets;
- (void)showButtons;
- (BRPlaybackFloatingButtonControl *)button1;
- (BRPlaybackFloatingButtonControl *)button3;
- (void)setButtonSets:(NSArray *)arg0;
- (struct CGRect)frameForFrame:(NSObject *)arg0;
- (void)playbackElapsedTimeChanged:(double)arg0;
- (void)setButton1:(BRPlaybackFloatingButtonControl *)arg0;
- (void)setButton2:(BRPlaybackFloatingButtonControl *)arg0;
- (void)setButton3:(BRPlaybackFloatingButtonControl *)arg0;
- (BRPlaybackFloatingButtonPanelControl *)init;
- (void)hideButtons;
- (void).cxx_destruct;
- (BRPlaybackFloatingButtonControl *)button2;

@end
