/* Runtime dump - ATVPodcastSubscriptionSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl, BRMenuItem;
@interface ATVPodcastSubscriptionSelectionHandler : NSObject <BRSelectionHandler>
{
    BRControl * _selectionRequester;
    BRMenuItem * _menuItem;
}

@property (weak, nonatomic) BRControl * selectionRequester;
@property (weak, nonatomic) BRMenuItem * menuItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setMenuItem:(BRMenuItem *)arg0;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)setSelectionRequester:(BRControl *)arg0;
- (void)_handleSelectionForMenuItem:(NSObject *)arg0;
- (void)_handleLoginSuccess:(id)arg0;
- (void)_handleLoginFailure:(id)arg0;
- (BRControl *)selectionRequester;
- (void).cxx_destruct;
- (BRMenuItem *)menuItem;

@end
