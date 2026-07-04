/* Runtime dump - SettingsHDMIOutputController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRListControl, BRMenuItem;
@interface SettingsHDMIOutputController : BRViewController
{
    <NSObject> * _observer;
}

@property (retain, nonatomic) <NSObject> * observer;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)dealloc;
- (SettingsHDMIOutputController *)init;
- (<NSObject> *)observer;
- (void)setObserver:(<NSObject> *)arg0;
- (void).cxx_destruct;

@end
