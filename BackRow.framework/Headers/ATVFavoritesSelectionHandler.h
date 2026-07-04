/* Runtime dump - ATVFavoritesSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol BRSelectionHandler;

@class BRControl;
@interface ATVFavoritesSelectionHandler : BRSingleton <BRSelectionHandler>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFavoritesSelectionHandler *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (char)_handleFavoriteSelection:(id)arg0 autoPlay:(char)arg1;

@end
