/* Runtime dump - ComputersController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class BRListControl, BRMenuItem;
@interface ComputersController : BRDataQueryController
{
    NSMutableDictionary * _previews;
    NSMutableArray * _listItems;
    NSMutableDictionary * _listPreviews;
}

@property (retain, nonatomic) NSMutableArray * listItems;
@property (retain, nonatomic) NSMutableDictionary * listPreviews;

- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSError *)errorForNoContent;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSObject *)newPreDataQuery;
- (char)preDataQueryComplete:(id)arg0;
- (char)previewQueryComplete:(id)arg0;
- (NSString *)_previewKeyForIndexPath:(NSIndexPath *)arg0;
- (char)dataServerConnectionChanged:(NSNotification *)arg0;
- (ComputersController *)initWithServerID:(ATVHSDataServerID *)arg0;
- (void)setListPreviews:(NSMutableDictionary *)arg0;
- (void)setListItems:(NSMutableArray *)arg0;
- (NSMutableDictionary *)listPreviews;
- (void).cxx_destruct;
- (NSMutableArray *)listItems;

@end
