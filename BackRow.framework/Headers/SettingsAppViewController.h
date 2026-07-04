/* Runtime dump - SettingsAppViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListView, BRMediaMenuView, BRMenuItem, BRMerchant, SettingsPreviewView;
@interface SettingsAppViewController : BRViewController
{
    BRMerchant * _merchant;
    <BRAppliance> * _appliance;
    BRMediaMenuView * _mediaMenuView;
    BRListView * _list;
}

@property (readonly, nonatomic) BRMerchant * merchant;
@property (readonly, nonatomic) <BRAppliance> * appliance;
@property (readonly, nonatomic) BRMediaMenuView * mediaMenuView;
@property (readonly, nonatomic) BRListView * list;
@property (readonly, nonatomic) SettingsPreviewView * previewView;

- (BRMerchant *)merchant;
- (BRMenuItem *)list:(BRListView *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListView *)arg0 numberOfRowsInSection:(long)arg1;
- (BRMediaMenuView *)mediaMenuView;
- (<BRAppliance> *)appliance;
- (SettingsAppViewController *)initWithAppliance:(<BRAppliance> *)arg0;
- (SettingsAppViewController *)initWithMerchant:(BRMerchant *)arg0;
- (NSObject *)restrictionsMenuItem;
- (NSObject *)privacyMenuItem;
- (void).cxx_destruct;
- (SettingsPreviewView *)previewView;
- (BRListView *)list;

@end
