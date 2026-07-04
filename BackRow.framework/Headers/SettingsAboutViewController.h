/* Runtime dump - SettingsAboutViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BREvent, BRIPConfiguration, BRListControl, BRMenuItem, SettingsMetadataView;
@interface SettingsAboutViewController : BRViewController
{
    SettingsMetadataView * _infoView;
    BRIPConfiguration * _ipConfig;
    NSTimer * _updateTimer;
    int _moreInfoType;
    int _versionType;
    int _productInfoType;
}

@property (nonatomic) int moreInfoType;
@property (nonatomic) int versionType;
@property (nonatomic) int productInfoType;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)wasBuried;
- (void)wasExhumed;
- (void)_displayConfigurationChanged:(NSNotification *)arg0;
- (void)_updateNetworkInfo:(NSDictionary *)arg0;
- (void)_commissionNetworkUpdateTimer;
- (void)_decommissionNetworkUpdateTimer;
- (void)_advanceMoreInfoItem;
- (void)_toggleVersionAndProductType;
- (int)moreInfoType;
- (void)setMoreInfoType:(int)arg0;
- (int)versionType;
- (void)setVersionType:(int)arg0;
- (int)productInfoType;
- (void)setProductInfoType:(int)arg0;
- (void)_configureAboutControl;
- (NSString *)_productTypeLabelString;
- (NSString *)_productTypeValueString;
- (NSString *)_versionLabelString;
- (NSString *)_versionValueString;
- (NSString *)_moreInfoLabelString;
- (NSString *)_moreInfoValueString;
- (void)dealloc;
- (SettingsAboutViewController *)init;
- (void).cxx_destruct;
- (void)_networkChanged:(NSNotification *)arg0;

@end
