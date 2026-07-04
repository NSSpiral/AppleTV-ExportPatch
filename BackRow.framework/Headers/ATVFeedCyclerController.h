/* Runtime dump - ATVFeedCyclerController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRCyclerDataSource;
@protocol BRCyclerDelegate;

@class BRControl, BRCyclerControl, BRMerchant;
@interface ATVFeedCyclerController : NSObject <BRCyclerDelegate, BRCyclerDataSource>
{
    NSArray * _items;
    BRMerchant * _merchant;
}

@property (retain) NSArray * items;
@property (retain) BRMerchant * merchant;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRMerchant *)merchant;
- (long)numberOfItemsInCycler:(BRCyclerControl *)arg0;
- (BRControl *)cycler:(BRCyclerControl *)arg0 itemAtIndex:(int)arg1;
- (void)setMerchant:(BRMerchant *)arg0;
- (long)cycler:(BRCyclerControl *)arg0 willCycleToItemAtIndex:(long)arg1;
- (void)dealloc;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;

@end
