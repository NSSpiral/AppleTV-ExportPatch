/* Runtime dump - ATViCloudActivateMyPSController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, BRWaitPromptControl;
@interface ATViCloudActivateMyPSController : BRViewController
{
    ATVDataQuery * _query;
    BRWaitPromptControl * _waitPrompt;
    id _completionHandler;
}

@property (retain, nonatomic) ATVDataQuery * query;
@property (retain, nonatomic) BRWaitPromptControl * waitPrompt;
@property (copy, nonatomic) id completionHandler;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (void)_showSpinner;
- (void)setWaitPrompt:(BRWaitPromptControl *)arg0;
- (void)_queryComplete:(id)arg0;
- (BRWaitPromptControl *)waitPrompt;
- (void)_onWasPushed;
- (void)_displayScreensaverDialogWithCompletionHandler:(id /* block */)arg0;
- (ATVDataQuery *)query;
- (id /* block */)completionHandler;
- (void)setQuery:(ATVDataQuery *)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;

@end
