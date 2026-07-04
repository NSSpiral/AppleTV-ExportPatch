/* Runtime dump - MKSharedAttributionViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSharedAttributionViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse>
{
    char _isSelectable;
    NSAttributedString * _attribution;
    <MKPlaceSharedAttributionDelegate> * _delegate;
}

@property (nonatomic) char isSelectable;
@property (copy, nonatomic) NSAttributedString * attribution;
@property (weak, nonatomic) <MKPlaceSharedAttributionDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char requiresPreferredContentSizeInStackingView;

- (void)contentSizeDidChange;
- (void)setIsSelectable:(char)arg0;
- (char)requiresPreferredContentSizeInStackingView;
- (void)dealloc;
- (void)setDelegate:(<MKPlaceSharedAttributionDelegate> *)arg0;
- (MKSharedAttributionViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<MKPlaceSharedAttributionDelegate> *)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (char)isSelectable;
- (NSAttributedString *)attribution;
- (void)setAttribution:(NSAttributedString *)arg0;

@end
