/* Runtime dump - UIPrintPanelViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner>
{
    UIPrintInteractionController * _printInteractionController;
    UIPrintInfo * _observedPrintInfo;
    UINavigationController * _navigationController;
    UIPrintPanelTableViewController * _tableViewController;
    UIViewController * _parentController;
    UIPopoverController * _poverController;
    UIWindow * _window;
    PKPrinter * _printer;
    char _dismissed;
    char _animated;
    char _observingRotation;
}

@property (retain, nonatomic) PKPrinter * printer;
@property (readonly, nonatomic) int pageCount;
@property (nonatomic) struct _NSRange pageRange;
@property (nonatomic) char duplex;
@property (readonly, nonatomic) NSArray * paperList;
@property (retain, nonatomic) UIPrintPaper * paper;
@property (nonatomic) int copies;
@property (readonly, nonatomic) char showDuplex;
@property (readonly, nonatomic) char showPageRange;
@property (readonly, nonatomic) char showCopies;
@property (readonly, nonatomic) char showPaper;
@property (readonly, nonatomic) char showPaperSelection;
@property (readonly, nonatomic) char showPrinterWarning;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)printerBrowserViewDidDisappear;
- (void)_presentWindow;
- (void)_keyWindowWillRotate:(id)arg0;
- (void)_presentInParentAnimated:(char)arg0;
- (void)dismissAnimated:(char)arg0;
- (char)filtersPrinters;
- (void)cancelPrinting;
- (PKPrinter *)printer;
- (void)setPrinter:(PKPrinter *)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (int)pageCount;
- (char)duplex;
- (void)setDuplex:(char)arg0;
- (int)copies;
- (void)setCopies:(int)arg0;
- (void)printPanelDidDisappear;
- (void)printPaperViewDidDisappear;
- (void)printRangeViewDidDisappear;
- (void)dismissPrintPanel:(char)arg0 animated:(char)arg1;
- (char)showPageRange;
- (struct _NSRange)pageRange;
- (void)setPageRange:(struct _NSRange)arg0;
- (NSObject *)_removeRollsFrom:(NSObject *)arg0;
- (UIPrintPaper *)paper;
- (void)setPaper:(UIPrintPaper *)arg0;
- (NSArray *)paperList;
- (char)showPaper;
- (UIPrintPanelViewController *)initWithPrintInterationController:(BRController *)arg0 inParentController:(BRController *)arg1;
- (void)presentPrintPanelAnimated:(char)arg0;
- (void)presentPrintPanelFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2;
- (void)presentPrintPanelFromBarButtonItem:(NSObject *)arg0 animated:(char)arg1;
- (void)startPrinting;
- (char)showDuplex;
- (char)showCopies;
- (char)showPrinterWarning;
- (char)showPaperSelection;

@end
