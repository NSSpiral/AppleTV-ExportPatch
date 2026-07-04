/* Runtime dump - SettingsProfileViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol MCProfileConnectionObserver;

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsProfileViewController : BRViewController <MCProfileConnectionObserver>
{
    NSArray * _installedProfiles;
}

@property (copy, nonatomic) NSArray * installedProfiles;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setInstalledProfiles:(NSArray *)arg0;
- (void)_addProfile;
- (void)_inspectProfile:(id)arg0;
- (NSArray *)installedProfiles;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(MCProfileConnection *)arg0 userInfo:(NSDictionary *)arg1;
- (void)dealloc;
- (SettingsProfileViewController *)init;
- (void).cxx_destruct;

@end
