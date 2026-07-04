/* Runtime dump - ATVBSRController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol BRMenuListItemProvider;

@class ATVBSRLayer, BRControl, BRDisplayMode, BREvent;
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider>
{
    id _completionBlock;
    ATVBSRLayer * _bsrControl;
    int _selectionKind;
    BRDisplayMode * _originalMode;
    BRDisplayMode * _failedMode;
    char _originalModeWasAuto;
    CADisplay * _mainDisplay;
    NSString * _mainDisplayUniqueID;
    NSArray * _listOfResolutionsToTry;
    NSTimer * _modeTimer;
    int _secondsLeftBeforeNextDisplayMode;
    int _attemptedModeNumber;
    int _numberOfBSRAttempts;
    char _isBSRController;
    int _result;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVBSRController *)controllerForBlackScreenRecoveryWithCompletionBlock:(id /* block */)arg0;
+ (ATVBSRController *)controllerForChangingToResolution:(id)arg0 withCompletionBlock:(id /* block */)arg1;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (NSArray *)_initWithModeList:(int)arg0 selectionKind:(int)arg1 fromBSR:(char)arg2 completionBlock:(id /* block */)arg3;
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)arg0;
- (char)_executeDisplayChangeEvent;
- (void)_restoreOriginalModeAndPopController;
- (void)_availableModesChanged;
- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)itemSelected:(long)arg0;
- (void)_setListOfResolutionsToTry:(id)arg0;
- (NSString *)_countdownString;
- (void)_playResolutionSwitchFailedSound;
- (id)_nextModeToTry;
- (void)_timerCallback:(id /* block */)arg0;
- (void)dealloc;
- (ATVBSRController *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSString *)titleForRow:(long)arg0;
- (long)itemCount;

@end
