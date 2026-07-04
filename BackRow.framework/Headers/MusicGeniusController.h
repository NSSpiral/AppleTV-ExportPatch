/* Runtime dump - MusicGeniusController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/MusicController.h>

@class BRListControl, BRMenuItem;
@interface MusicGeniusController : MusicController
{
    ATVDataItem * _geniusSeed;
    char _isDataSavedIntoMetadata;
    NSArray * _dataFromMetadata;
    char _startGeniusPlayback;
}

@property (nonatomic) char startGeniusPlayback;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)newDataQuery;
- (char)dataQueryComplete:(ATVDataQuery *)arg0;
- (void *)dataItemAtIndexPath:(NSIndexPath *)arg0;
- (MusicGeniusController *)initWithSeed:(unsigned int)arg0;
- (void)setStartGeniusPlayback:(char)arg0;
- (char)startGeniusPlayback;
- (void)_showMediaMenuView;
- (MusicGeniusController *)initFromMetadataWithDataClient:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
- (NSObject *)errorControlForQuery:(NSObject *)arg0;
- (NSObject *)indexPathForDataItem:(void *)arg0;
- (void)dealloc;
- (NSData *)data;
- (void)_setup;

@end
