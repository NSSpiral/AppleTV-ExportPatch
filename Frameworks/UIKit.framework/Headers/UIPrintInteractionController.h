/* Runtime dump - UIPrintInteractionController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInteractionController : NSObject
{
    char _hidesNumberOfCopies;
    id _completionHandler;
    unsigned int _backgroundTaskIdentifier;
    id _printState;
    char _showsPageRange;
    char _showsPaperSelectionForLoadedPapers;
    UIPrintInfo * _printInfo;
    <UIPrintInteractionControllerDelegate> * _delegate;
    UIPrintPaper * _printPaper;
    UIPrintPageRenderer * _printPageRenderer;
    UIPrintFormatter * _printFormatter;
    id _printingItem;
    NSArray * _printingItems;
    <UIPrintInteractionControllerDelegate> * _printActivityDelegate;
}

@property (retain, nonatomic) UIPrintInfo * printInfo;
@property (nonatomic) <UIPrintInteractionControllerDelegate> * delegate;
@property (nonatomic) char showsPageRange;
@property (nonatomic) char showsNumberOfCopies;
@property (nonatomic) char showsPaperSelectionForLoadedPapers;
@property (readonly, nonatomic) UIPrintPaper * printPaper;
@property (retain, nonatomic) UIPrintPageRenderer * printPageRenderer;
@property (retain, nonatomic) UIPrintFormatter * printFormatter;
@property (copy, nonatomic) id printingItem;
@property (copy, nonatomic) NSArray * printingItems;
@property (nonatomic) <UIPrintInteractionControllerDelegate> * printActivityDelegate;
@property (readonly, nonatomic) int pageCount;
@property (nonatomic) struct _NSRange pageRange;
@property (retain, nonatomic) PKPrinter * printer;
@property (retain, nonatomic) UIPrintPaper * paper;

+ (char)isPrintingAvailable;
+ (UIPrintInteractionController *)sharedPrintController;
+ (UIPrintInteractionController *)printableUTIs;
+ (char)canPrintURL:(NSURL *)arg0;
+ (char)canPrintData:(NSData *)arg0;

- (void)release;
- (void)dealloc;
- (void)setDelegate:(<UIPrintInteractionControllerDelegate> *)arg0;
- (UIPrintInteractionController *)init;
- (<UIPrintInteractionControllerDelegate> *)delegate;
- (UIPrintInteractionController *)_init;
- (void)dismissAnimated:(char)arg0;
- (PKPrinter *)printer;
- (void)setPrinter:(PKPrinter *)arg0;
- (int)pageCount;
- (UIPrintInfo *)printInfo;
- (char)presentFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2 completionHandler:(id /* block */)arg3;
- (char)presentAnimated:(char)arg0 completionHandler:(id /* block */)arg1;
- (char)presentFromBarButtonItem:(NSObject *)arg0 animated:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrintPageRenderer:(UIPrintPageRenderer *)arg0;
- (UIPrintPageRenderer *)printPageRenderer;
- (NSDictionary *)_currentPrintInfo;
- (void)_printPanelDidPresent;
- (void)_printPanelWillDismiss:(char)arg0;
- (void)_printPanelDidDismiss;
- (void)_updatePageCount;
- (struct _NSRange)pageRange;
- (void)setPageRange:(struct _NSRange)arg0;
- (struct CGSize)_printItemContentSize;
- (UIPrintPaper *)paper;
- (void)setPaper:(UIPrintPaper *)arg0;
- (char)_canShowDuplex;
- (char)_canShowPageRange;
- (char)_canShowCopies;
- (char)_canShowPaperList;
- (void)_cleanPrintState;
- (char)_setupPrintPanel:(id)arg0;
- (void)_setPrintInfoState:(int)arg0;
- (void)_endPrintJob:(char)arg0 error:(NSError *)arg1;
- (NSObject *)printingItem;
- (NSObject *)_paperForPDFItem:(NSObject *)arg0 withDuplexMode:(int)arg1;
- (void)_updatePrintPaper;
- (void)_startPrinting;
- (NSObject *)_paperForContentType:(int)arg0;
- (void)_preparePrintInfo;
- (void)_printPage;
- (NSObject *)_printPageRenderer:(NSObject *)arg0;
- (NSObject *)_printItem:(NSObject *)arg0;
- (void)setPrintingItem:(NSObject *)arg0;
- (char)printToPrinter:(id)arg0 completionHandler:(id /* block */)arg1;
- (char)showsNumberOfCopies;
- (void)setShowsNumberOfCopies:(char)arg0;
- (void)setPrintInfo:(UIPrintInfo *)arg0;
- (char)showsPageRange;
- (void)setShowsPageRange:(char)arg0;
- (char)showsPaperSelectionForLoadedPapers;
- (void)setShowsPaperSelectionForLoadedPapers:(char)arg0;
- (UIPrintPaper *)printPaper;
- (UIPrintFormatter *)printFormatter;
- (void)setPrintFormatter:(UIPrintFormatter *)arg0;
- (NSArray *)printingItems;
- (void)setPrintingItems:(NSArray *)arg0;
- (<UIPrintInteractionControllerDelegate> *)printActivityDelegate;
- (void)setPrintActivityDelegate:(<UIPrintInteractionControllerDelegate> *)arg0;
- (void)_enableManualPrintPage:(char)arg0;
- (void)_manualPrintPage;
- (void)_cancelManualPrintPage;

@end
