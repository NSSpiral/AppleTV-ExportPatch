/* Runtime dump - MusicVideosController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicController.h>

@class BRListControl, BRMenuItem;
@interface MusicVideosController : MusicController

+ (NSObject *)musicVideoArtistsControllerWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;

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
- (int)_headerCount;
- (int)typeaheadSelectionOffset;

@end
