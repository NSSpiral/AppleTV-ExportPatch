/* Runtime dump - PhotoQueryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/PhotoController.h>

@class BRListControl;
@interface PhotoQueryController : PhotoController
{
    NSMutableDictionary * _previews;
    char _refreshData;
    NSTimer * _deviceSleepHoldOffTimer;
}

@property (weak, nonatomic) NSTimer * deviceSleepHoldOffTimer;

- (void)wasPopped;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (char)dataClientUpdated:(id)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (PhotoQueryController *)initWithMode:(int)arg0 dataServerID:(NSObject *)arg1;
- (char)previewQueryComplete:(id)arg0;
- (void)_sendScreenSaverHoldOfNotification:(NSNotification *)arg0;
- (void)setDeviceSleepHoldOffTimer:(NSTimer *)arg0;
- (NSTimer *)deviceSleepHoldOffTimer;
- (NSString *)_previewKeyForIndexPath:(NSIndexPath *)arg0;
- (void)_selectedScreenSaverCollection:(id)arg0;
- (id)_createItemsQueryForCollection:(id)arg0;
- (char)dataServerConnectionChanged:(NSNotification *)arg0;
- (void).cxx_destruct;

@end
