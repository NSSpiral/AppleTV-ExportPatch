/* Runtime dump - UIReferenceLibraryViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate>
{
    NSString * _term;
    NSArray * _definitionValues;
    UINavigationController * _baseNavController;
    UITableViewController * _multiDefViewController;
    UIViewController * _longDefViewController;
    int _oldPopoverStyle;
    UIWindow * _rotationDecider;
    id _dismissCompletionHandler;
}

@property (copy, nonatomic) id dismissCompletionHandler;
@property (retain, nonatomic) UIWindow * _rotationDecider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIColor *)_backgroundColor;
+ (char)_shouldShowDefineForTerm:(id)arg0;
+ (UIColor *)_foregroundColor;
+ (NSDictionary *)_colorAttributes;
+ (UIColor *)_diddlyDoViewLineColor;
+ (UIImage *)_defaultButtonImage;
+ (UIImage *)_pressedButtonImage;
+ (NSDictionary *)_localizedDictionaryTitleAttributes;
+ (NSDictionary *)_dictionaryDefinitionAttributes;
+ (char)dictionaryHasDefinitionForTerm:(id)arg0;
+ (NSString *)_popoverControllerForReferenceLibraryWithString:(NSString *)arg0;
+ (NSString *)_viewControllerForReferenceWithString:(NSString *)arg0 options:(unsigned int)arg1;

- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (UIColor *)_backgroundColor;
- (UIReferenceLibraryViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)_setPopoverController:(BRController *)arg0;
- (void)viewDidLoad;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg0;
- (void)_didResignContentViewControllerOfPopover:(id)arg0;
- (void)navigationController:(UINavigationController *)arg0 willShowViewController:(BRController *)arg1 animated:(char)arg2;
- (UIColor *)_foregroundColor;
- (id /* block */)dismissCompletionHandler;
- (void)setDismissCompletionHandler:(id /* block */)arg0;
- (NSDictionary *)_colorAttributes;
- (UIReferenceLibraryViewController *)initWithTerm:(NSString *)arg0;
- (void)_dismissModalReferenceView:(NSObject *)arg0;
- (void)_setRotationDecider:(id)arg0;
- (void)pushDownloadManager:(NSObject *)arg0;
- (void)_searchWeb:(id)arg0;
- (void)_installRequiredElementsOnViewController:(BRController *)arg0;
- (UIColor *)_diddlyDoViewLineColor;
- (UIImage *)_defaultButtonImage;
- (UIImage *)_pressedButtonImage;
- (NSDictionary *)_localizedDictionaryTitleAttributes;
- (NSDictionary *)_dictionaryDefinitionAttributes;
- (UIWindow *)_rotationDecider;

@end
