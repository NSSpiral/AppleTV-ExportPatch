/* Runtime dump - SettingsAnalyticsViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMediaMenuView, BRMenuItem;
@interface SettingsAnalyticsViewController : BRViewController
{
    BRMediaMenuView * _mediaMenuView;
}

@property (retain, nonatomic) BRMediaMenuView * mediaMenuView;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRMediaMenuView *)mediaMenuView;
- (void)setMediaMenuView:(BRMediaMenuView *)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (SettingsAnalyticsViewController *)init;
- (void).cxx_destruct;

@end
