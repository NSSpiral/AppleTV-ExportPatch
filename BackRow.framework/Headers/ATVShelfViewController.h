/* Runtime dump - ATVShelfViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSubviewController;

@class ATVFeedElement, BRControl, BRMediaShelfView;
@interface ATVShelfViewController : NSObject <ATVSubviewController>
{
    BRMediaShelfView * _shelfView;
    NSArray * _sections;
}

@property (retain, nonatomic) BRMediaShelfView * shelfView;
@property (retain, nonatomic) NSArray * sections;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)mediaShelf:(BRMediaShelfView *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (void)setShelfView:(BRMediaShelfView *)arg0;
- (BRMediaShelfView *)shelfView;
- (ATVShelfViewController *)init;
- (BRControl *)view;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
