/* Runtime dump - ATVLocaleChooserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListView, BRMenuItem;
@interface ATVLocaleChooserController : BRViewController
{
    NSArray * _countryEntries;
    BRListView * _list;
}

- (void)wasPushed;
- (BRMenuItem *)list:(BRListView *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListView *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_showProgressForLocale:(NSObject *)arg0;
- (void)_performLocaleChange:(NSDictionary *)arg0;
- (ATVLocaleChooserController *)init;
- (void).cxx_destruct;

@end
