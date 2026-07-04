/* Runtime dump - ATVPodcastStationsController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRSecureResource;

@class BRAuthenticator, BRListControl, BRMediaMenuView, BRMediaParadeControl, BRMenuItem;
@interface ATVPodcastStationsController : BRViewController <BRSecureResource>
{
    BRMediaParadeControl * _paradeControl;
    BRMediaMenuView * _mediaMenuView;
    NSArray * _stations;
}

@property (retain, nonatomic) NSArray * stations;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRAuthenticator *)secureResourceAuthenticator;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_setupParadeWithImages:(id)arg0;
- (NSArray *)stations;
- (void)setStations:(NSArray *)arg0;
- (ATVPodcastStationsController *)init;
- (void).cxx_destruct;

@end
