/* Runtime dump - ATVScriptRunnerController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement, ATVJSContext, BRProgressBarWidget, BRTextControl;
@interface ATVScriptRunnerController : ATVFeedController
{
    BRTextControl * _statusText;
    BRProgressBarWidget * _progressBar;
    ATVJSContext * _context;
}

@property (retain, nonatomic) BRTextControl * statusText;
@property (retain, nonatomic) BRProgressBarWidget * progressBar;
@property (retain, nonatomic) ATVJSContext * context;

- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (ATVScriptRunnerController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (void)_setStatus:(GEORPProblemStatus *)arg0 withPercentComplete:(float)arg1;
- (void)_evaluateScripts:(id)arg0;
- (void)dealloc;
- (ATVScriptRunnerController *)initWithDictionary:(NSDictionary *)arg0;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (BRTextControl *)statusText;
- (void)setStatusText:(BRTextControl *)arg0;
- (BRProgressBarWidget *)progressBar;
- (void)setProgressBar:(BRProgressBarWidget *)arg0;

@end
