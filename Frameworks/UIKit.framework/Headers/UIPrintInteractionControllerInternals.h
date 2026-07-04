/* Runtime dump - UIPrintInteractionControllerInternals
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInteractionControllerInternals : NSObject
{
    int _pageCount;
    struct _NSRange _pageRange;
    int _currentPage;
    UIPrintPanelViewController * _printPanelViewController;
    UIPrintingProgress * _printingProgress;
    PKPrinter * _printer;
    UIPrintPaper * _paper;
    PKPrintSettings * _printSettings;
    UIPrintInfo * _activePrintInfo;
    int _printInfoState;
    char _supressNotifyDismissed;
    UIPrintPageRenderer * _formatterRenderer;
    char _manualPrintPageEnabled;
}

- (void)dealloc;

@end
