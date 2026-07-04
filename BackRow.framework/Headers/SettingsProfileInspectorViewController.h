/* Runtime dump - SettingsProfileInspectorViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem, SettingsMetadataView;
@interface SettingsProfileInspectorViewController : BRViewController
{
    MCProfile * _profile;
    SettingsMetadataView * _infoView;
}

@property (retain, nonatomic) MCProfile * profile;
@property (retain, nonatomic) SettingsMetadataView * infoView;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsMetadataView *)infoView;
- (void)setInfoView:(SettingsMetadataView *)arg0;
- (void).cxx_destruct;
- (void)_updateMetadata:(NSData *)arg0;
- (SettingsProfileInspectorViewController *)initWithProfile:(MCProfile *)arg0;
- (MCProfile *)profile;
- (void)setProfile:(MCProfile *)arg0;

@end
