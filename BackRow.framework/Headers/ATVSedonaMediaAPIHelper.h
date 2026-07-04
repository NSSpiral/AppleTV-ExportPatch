/* Runtime dump - ATVSedonaMediaAPIHelper
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface ATVSedonaMediaAPIHelper : BRSingleton
{
    NSMutableArray * _queue;
    id _currentRequest;
    int _state;
}

+ (ATVSedonaMediaAPIHelper *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_mediaOpenFinished:(id)arg0;
- (void)mediaOpenURL:(NSURL *)arg0 params:(NSDictionary *)arg1 openFinishedHandler:(id /* block */)arg2;
- (void)mediaClose;
- (void)_mediaCloseFinished:(id)arg0;
- (void)_queueRequest:(NSURLRequest *)arg0;
- (void)_handleNextRequest;
- (void)_handleOpenRequest;
- (void)_handleCloseRequest;
- (ATVSedonaMediaAPIHelper *)init;
- (void).cxx_destruct;

@end
