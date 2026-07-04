/* Runtime dump - ATVPodcastShowAllSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface ATVPodcastShowAllSelectionHandler : NSObject <BRSelectionHandler>
{
    char _showUnplayedEpisodes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;

@end
