/* Runtime dump - UIPrinterSetupConfigureViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate>
{
    char _addToNetwork;
    char _directPrinting;
    PKPrinter * _printer;
    NSString * _directPasscode;
    UIButton * _finishButton;
    UIPrinterSetupConnectingView * _connectingView;
}

@property (retain, nonatomic) PKPrinter * printer;
@property (nonatomic) char addToNetwork;
@property (nonatomic) char directPrinting;
@property (copy, nonatomic) NSString * directPasscode;
@property (retain, nonatomic) UIButton * finishButton;
@property (retain, nonatomic) UIPrinterSetupConnectingView * connectingView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(NSObject *)arg1 forSection:(int)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayFooterView:(NSObject *)arg1 forSection:(int)arg2;
- (char)tableView:(UITableView *)arg0 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)textDidChange:(char)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (PKPrinter *)printer;
- (void)setPrinter:(PKPrinter *)arg0;
- (UIPrinterSetupConfigureViewController *)initWithPrinter:(PKPrinter *)arg0;
- (void)setConnectingView:(UIPrinterSetupConnectingView *)arg0;
- (UIPrinterSetupConnectingView *)connectingView;
- (void)setAddToNetwork:(char)arg0;
- (void)setDirectPrinting:(char)arg0;
- (void)setDirectPasscode:(NSString *)arg0;
- (void)setFinishButton:(UIButton *)arg0;
- (void)finish;
- (void)finished:(char)arg0;
- (void)toggleAddToNetwork:(id)arg0;
- (void)toggleDirectPrinting:(id)arg0;
- (char)addToNetwork;
- (char)directPrinting;
- (NSString *)directPasscode;
- (UIButton *)finishButton;

@end
