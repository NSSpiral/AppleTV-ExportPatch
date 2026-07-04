/* Runtime dump - PodcastsMainController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVNavigationBarController;
@interface PodcastsMainController : BRViewController
{
    ATVNavigationBarController * _navigationBarController;
    char _needsReload;
}

+ (void)initialize;

- (void)wasPushed;
- (void)wasPopped;
- (id)RootCollectionBinding;
- (void)updateBoundRootCollection;
- (NSObject *)_newFavoritesController;
- (NSObject *)_newSearchControllerForItem:(NSObject *)arg0;
- (void)bindRootCollectionBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)reloadIfNeeded;
- (void)dealloc;
- (PodcastsMainController *)init;
- (void)reload;
- (void).cxx_destruct;

@end
