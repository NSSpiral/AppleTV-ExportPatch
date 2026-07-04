/* Runtime dump - MusicArtistsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicCollectionController.h>

@class BRListControl, BRMenuItem;
@interface MusicArtistsController : MusicCollectionController
{
    int _mode;
    NSString * _genre;
    NSMutableArray * _artistData;
}

+ (NSObject *)allArtistsControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (NSObject *)allComposersControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
+ (MusicArtistsController *)artistsControllerByGenre:(id)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSError *)errorForNoContent;
- (NSObject *)newDataQuery;
- (NSString *)newPreviewQueryForIndexPath:(NSIndexPath *)arg0;
- (NSString *)newPlayQueryForIndexPath:(NSIndexPath *)arg0;
- (void)playQueryComplete:(id)arg0;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (MusicArtistsController *)initWithGenre:(NSString *)arg0 dataClient:(ATVDataClient *)arg1 dataClientType:(unsigned int)arg2;
- (int)_headerCount;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (int)typeaheadSelectionOffset;
- (void)dealloc;
- (NSData *)data;
- (char)shouldShowSearch;
- (void)_setMode:(int)arg0;

@end
