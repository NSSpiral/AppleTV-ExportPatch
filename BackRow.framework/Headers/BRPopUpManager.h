/* Runtime dump - BRPopUpManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRControl, BRWindow;
@interface BRPopUpManager : BRSingleton
{
    NSMutableArray * _queuedPopUps;
    BRWindow * _popUpContainerWindow;
    double _lastUpdate;
}

+ (BRPopUpManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)postPopUpWithControl:(BRControl *)arg0 identifier:(NSString *)arg1 position:(unsigned int)arg2 size:(struct CGSize)arg3 options:(NSDictionary *)arg4;
- (char)_canDisplay;
- (void)removePopUpWithIdentifier:(NSString *)arg0;
- (void)_updateActivity;
- (void)_animateRemovePopupWithIdentifier:(NSString *)arg0;
- (void)_displayPopUp:(id)arg0;
- (void)_addControlToQueue:(NSObject *)arg0;
- (void)_processPopUps;
- (void)_removePopupWithIdentifier:(NSString *)arg0;
- (NSString *)_popUpForIdentifier:(NSString *)arg0;
- (void)_removeControlFromQueue:(NSObject *)arg0;
- (void)_removeAnimationFinished:(id)arg0;
- (void)_removePopup:(id)arg0;
- (void)dealloc;
- (BRPopUpManager *)init;

@end
