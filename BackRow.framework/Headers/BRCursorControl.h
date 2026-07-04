/* Runtime dump - BRCursorControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCursorLayer, BRHorizontalSegmentedWidget;
@interface BRCursorControl : BRControl
{
    BRControl * _trackedControl;
    BRControl * _previousTrackedControl;
    BRCursorLayer * _cursorLayer;
    int _style;
    char _cursorInactive;
    BRHorizontalSegmentedWidget * _previousBadge;
    BRHorizontalSegmentedWidget * _badge;
    NSTimer * _removePreviousBadgeTimer;
    char _cursorTrackingDisabledWhenAvoidsCursor;
}

@property (nonatomic) char cursorTrackingDisabledWhenAvoidsCursor;

- (void)_focusChanged:(NSNotification *)arg0;
- (void)setCursorInactive:(char)arg0;
- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (BRCursorLayer *)cursorLayer;
- (void)_removeCursor;
- (void)_addCursor;
- (void)setCursorStyle:(int)arg0;
- (void)setCursorTrackingDisabledWhenAvoidsCursor:(char)arg0;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (void)_cursorFrameChanged:(NSNotification *)arg0;
- (void)_trackedBadgeUpdated:(id)arg0;
- (void)_updateCursorPositioning;
- (void)_updatePreviousBadge;
- (int)cursorStyle;
- (char)cursorInactive;
- (char)cursorTrackingDisabledWhenAvoidsCursor;
- (void)_addCursorForStyle:(int)arg0;
- (void)_updateBadgeForTrackedControl;
- (void)_resolveCursorStyleForControl:(BRControl *)arg0;
- (void)_removePreviousTrackedControl;
- (void)_removePreviousBadgeTimerFired:(id)arg0;
- (void)_trackFocusedControl:(BRControl *)arg0;
- (void)_updateMyBadge:(id *)arg0 withTrackedControl:(BRControl *)arg1;
- (void)dealloc;
- (void)setAlpha:(float)arg0;
- (BRCursorControl *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
