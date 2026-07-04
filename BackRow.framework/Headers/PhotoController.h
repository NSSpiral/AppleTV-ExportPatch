/* Runtime dump - PhotoController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface PhotoController : BRDataQueryController
{
    NSDictionary * _collectionsByType;
    int _mode;
    id _screenSaverSelectionBlock;
    id _photoSelectionBlock;
}

@property (copy, nonatomic) id screenSaverSelectionBlock;
@property (copy, nonatomic) id photoSelectionBlock;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)newDataQuery;
- (char)dataClientUpdated:(id)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (void)setPhotoSelectionBlock:(id /* block */)arg0;
- (PhotoController *)initWithMode:(int)arg0 dataServerID:(NSObject *)arg1;
- (id /* block */)screenSaverSelectionBlock;
- (void)setScreenSaverSelectionBlock:(id /* block */)arg0;
- (id /* block */)photoSelectionBlock;
- (NSObject *)errorControlForQuery:(NSObject *)arg0;
- (NSObject *)collectionsForType:(NSObject *)arg0;
- (void)_selectedScreenSaverCollection:(id)arg0;
- (long)_numberOfItemsInSection:(long)arg0;
- (NSObject *)_BRMediaCollectionsForType:(NSObject *)arg0;
- (NSString *)_iconWithName:(NSString *)arg0;
- (void)_addButtonsToBrowser:(id)arg0 withCollection:(RadioArtworkCollection *)arg1;
- (NSDictionary *)_collectionsByType;
- (void).cxx_destruct;

@end
