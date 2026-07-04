/* Runtime dump - ATVVPNConnectionController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRTextControl, BRWaitSpinnerControl;
@interface ATVVPNConnectionController : BRController
{
    char _abortedConnection;
    id _resultBlock;
    BRTextControl * _prompt;
    BRWaitSpinnerControl * _spinner;
}

@property (copy, nonatomic) id resultBlock;
@property (retain, nonatomic) BRTextControl * prompt;
@property (retain, nonatomic) BRWaitSpinnerControl * spinner;
@property (nonatomic) char abortedConnection;

+ (ATVVPNConnectionController *)controlWithResultBlock:(id /* block */)arg0;

- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (void)setSpinner:(BRWaitSpinnerControl *)arg0;
- (char)abortedConnection;
- (id /* block */)resultBlock;
- (void)setAbortedConnection:(char)arg0;
- (ATVVPNConnectionController *)init;
- (BRTextControl *)prompt;
- (void)setPrompt:(BRTextControl *)arg0;
- (void).cxx_destruct;
- (BRWaitSpinnerControl *)spinner;
- (void)setResultBlock:(id /* block */)arg0;

@end
