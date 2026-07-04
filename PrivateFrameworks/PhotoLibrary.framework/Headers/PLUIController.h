/* Runtime dump - PLUIController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIController : NSObject
{
    id _delegate;
    UITransitionView * _fullScreenTransitionView;
    NSDictionary * _configuration;
}

+ (PLUIController *)sharedInstance;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (PLUIController *)init;
- (void)setConfiguration:(NSDictionary *)arg0;
- (NSDictionary *)configuration;
- (NSObject *)contentViewWithFrame:(struct CGRect)arg0;

@end
