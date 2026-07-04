/* Runtime dump - SettingsAirPlayCRDModeController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAirPlayCRDModeController : BRViewController
{
    NSString * _pendingImageID;
    <BRImageProxy> * _backgroundImageProxy;
}

+ (void)initialize;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)selectedBackgroundImageProxy:(NSObject *)arg0;
- (void)_imageLoadSucceeded:(id)arg0;
- (void)_imageLoadFailed:(id)arg0;
- (void)_CRDBackgroundPreferenceChanged:(NSNotification *)arg0;
- (void)_enterCustomMessage;
- (void)_successfullySelectedImage:(UIImage *)arg0;
- (void)dealloc;
- (SettingsAirPlayCRDModeController *)init;
- (void).cxx_destruct;

@end
