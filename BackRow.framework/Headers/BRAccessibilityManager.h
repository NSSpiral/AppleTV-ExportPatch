/* Runtime dump - BRAccessibilityManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRContextMenuControl;
@interface BRAccessibilityManager : BRSingleton
{
    BRContextMenuControl * _utilityMenu;
    char _optionMenuEnabled;
    char _ignoreNextEvent;
}

@property (nonatomic) char optionMenuEnabled;
@property (nonatomic) char ignoreNextEvent;

+ (BRAccessibilityManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (char)handleEventAction:(NSObject *)arg0;
- (char)optionMenuEnabled;
- (void)setOptionMenuEnabled:(char)arg0;
- (void)_dismissContextMenu:(id)arg0;
- (void)setIgnoreNextEvent:(char)arg0;
- (void)_returnHome:(id)arg0;
- (void)_voiceOverSelected:(id)arg0;
- (void)_captionsSelected:(id)arg0;
- (void)_descriptiveVideoSelected:(id)arg0;
- (char)ignoreNextEvent;
- (char)contextMenuIsVisible;
- (void)_showAccessibilityMenu;
- (BRAccessibilityManager *)init;
- (void).cxx_destruct;

@end
