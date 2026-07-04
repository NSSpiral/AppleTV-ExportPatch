/* Runtime dump - ATVMusicStoreScrollerDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRGridControl;
@interface ATVMusicStoreScrollerDataSource : NSObject
{
    NSArray * _controls;
    NSString * _identifier;
}

@property (retain, nonatomic) NSArray * controls;
@property (retain, nonatomic) NSString * identifier;

- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (NSString *)grid:(BRGridControl *)arg0 itemIDAtIndex:(long)arg1;
- (long)grid:(BRGridControl *)arg0 indexForItemID:(NSObject *)arg1;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (void)_setControlIdentifiers;
- (void)dealloc;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void)setControls:(NSArray *)arg0;
- (NSArray *)controls;

@end
