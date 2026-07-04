/* Runtime dump - ATVMoviesPlayActionButtonControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRButtonControl.h>
@interface ATVMoviesPlayActionButtonControl : BRButtonControl

+ (NSSet *)playButtonForAsset:(NSSet *)arg0;
+ (NSObject *)playButtonForMediaItem:(NSObject *)arg0;

- (void)_downloadStateChanged:(NSNotification *)arg0;
- (void)_updateButtonStateWithAsset:(NSSet *)arg0;
- (void)dealloc;

@end
