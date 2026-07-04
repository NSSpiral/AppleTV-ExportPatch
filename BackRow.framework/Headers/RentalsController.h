/* Runtime dump - RentalsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class BRListControl, BRMenuItem;
@interface RentalsController : BRDataQueryController

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (RentalsController *)initWithDataClient:(ATVDataClient *)arg0 dataClientType:(unsigned int)arg1;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (NSObject *)indexPathForDataItem:(void *)arg0;

@end
