/* Runtime dump - ATVSWUDownloadController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent;
@interface ATVSWUDownloadController : BRViewController
{
    char _applyStarted;
    NSString * _cancelTitle;
    NSString * _cancelText;
    NSString * _cancelContinueLabel;
    NSString * _cancelCancelLabel;
}

@property (retain, nonatomic) NSString * cancelTitle;
@property (retain, nonatomic) NSString * cancelText;
@property (retain, nonatomic) NSString * cancelContinueLabel;
@property (retain, nonatomic) NSString * cancelCancelLabel;
@property (nonatomic) char applyStarted;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (ATVSWUDownloadController *)initWithCancelTitle:(NSString *)arg0 text:(NSString *)arg1 continueLabel:(NSString *)arg2 cancelLabel:(NSString *)arg3;
- (void)startOperation;
- (void)stopOperation;
- (void)_updateCheckFinished:(id)arg0;
- (void)_updateDownloadFinished:(id)arg0;
- (void)_updateApplyStarted:(id)arg0;
- (void)_updateApplyFailed:(id)arg0;
- (void)_updateCheckStarted:(id)arg0;
- (void)_updateDownloadStarted:(id)arg0;
- (void)setCancelTitle:(NSString *)arg0;
- (void)setCancelText:(NSString *)arg0;
- (void)setCancelContinueLabel:(NSString *)arg0;
- (void)setCancelCancelLabel:(NSString *)arg0;
- (void)setApplyStarted:(char)arg0;
- (void)_requestCancel;
- (NSString *)cancelTitle;
- (NSString *)cancelText;
- (NSString *)cancelContinueLabel;
- (NSString *)cancelCancelLabel;
- (char)applyStarted;
- (void)_updateProgress:(id)arg0;
- (void)dealloc;
- (ATVSWUDownloadController *)init;
- (void).cxx_destruct;
- (void)cancelOperation;

@end
