/* Runtime dump - ATVSlideshowPlaylistController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDataQueryController.h>
@interface ATVSlideshowPlaylistController : BRDataQueryController
{
    id __completionHandler;
}

@property (copy, nonatomic) id _completionHandler;

+ (NSObject *)newPlaylistsQueryWithDataClient:(NSObject *)arg0;

- (NSObject *)newPreDataQuery;
- (char)preDataQueryComplete:(id)arg0;
- (void)set_completionHandler:(id /* block */)arg0;
- (id)waitControl;
- (ATVSlideshowPlaylistController *)initWithServerID:(ATVHSDataServerID *)arg0 dataClientType:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)_completionHandler;
- (void).cxx_destruct;

@end
