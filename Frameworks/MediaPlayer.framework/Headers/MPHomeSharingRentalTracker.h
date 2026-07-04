/* Runtime dump - MPHomeSharingRentalTracker
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingRentalTracker : NSObject
{
    NSObject<OS_dispatch_queue> * _rentalTrackerQueue;
    NSMutableDictionary * _rentals;
}

+ (MPHomeSharingRentalTracker *)sharedInstance;

- (void)removeAllRentalsForDatabaseID:(NSObject *)arg0;
- (void)_saveRentals;
- (void)removeRentalWithItemID:(unsigned long long)arg0;
- (void)addRentalWithItemID:(unsigned long long)arg0 databaseID:(NSObject *)arg1;
- (MPHomeSharingRentalTracker *)init;
- (MPHomeSharingRentalTracker *)_init;
- (void).cxx_destruct;

@end
