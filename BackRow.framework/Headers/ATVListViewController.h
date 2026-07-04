/* Runtime dump - ATVListViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSubviewController;

@class ATVFeedElement, BRControl, BRListControl, BRListView, BRMenuItem;
@interface ATVListViewController : NSObject <ATVSubviewController>
{
    char _disabled;
    BRListView * _listView;
    NSArray * _sections;
}

@property (retain, nonatomic) BRListView * listView;
@property (retain, nonatomic) NSArray * sections;
@property (nonatomic) char disabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRListView *)listView;
- (void)setListView:(BRListView *)arg0;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)updateWithViewElement:(ATVFeedElement *)arg0 forceRefresh:(char)arg1;
- (void)listDidFinishLayout:(NSObject *)arg0;
- (ATVListViewController *)init;
- (BRControl *)view;
- (void)setDisabled:(char)arg0;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;
- (char)isDisabled;

@end
