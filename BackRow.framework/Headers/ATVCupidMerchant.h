/* Runtime dump - ATVCupidMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVNativeMerchant.h>

@class BRController;
@interface ATVCupidMerchant : ATVNativeMerchant
{
    NSTimer * _updateCoalescingTimer;
    ATVDataQuery * _pendingDataQuery;
    int _accessModeForInvitations;
    double _coalescingDuration;
}

@property (nonatomic) double coalescingDuration;
@property (weak, nonatomic) NSTimer * updateCoalescingTimer;
@property (retain, nonatomic) ATVDataQuery * pendingDataQuery;
@property (nonatomic) int accessModeForInvitations;

+ (NSString *)cupidMediaPath;

- (void)_configureRuntimeSupport;
- (void)setCoalescingDuration:(double)arg0;
- (void)_dataClientUpdatedNotification:(NSNotification *)arg0;
- (void)_dataClientConnectionChanged:(NSNotification *)arg0;
- (void)_photoStreamAccountActivity:(id)arg0;
- (void)_updatePCAccessModeForInvitations:(char *)arg0;
- (void)_pcAppliancesAccessChanged:(NSNotification *)arg0;
- (void)_updatePhotoStreamMainMenuIconBadge;
- (void)_resetPhotoStreamScreenSaverWithCollectionIDContainedInArray:(NSArray *)arg0;
- (void)_coalesceNewUpdate;
- (ATVDataQuery *)pendingDataQuery;
- (void)setPendingDataQuery:(ATVDataQuery *)arg0;
- (int)accessModeForInvitations;
- (NSTimer *)updateCoalescingTimer;
- (double)coalescingDuration;
- (void)setUpdateCoalescingTimer:(NSTimer *)arg0;
- (void)setAccessModeForInvitations:(int)arg0;
- (void)dealloc;
- (ATVCupidMerchant *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (BRController *)rootController;

@end
