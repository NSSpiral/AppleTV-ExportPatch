/* Runtime dump - ATVCursorTracker
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRCursorLayer, BRKeyValueObservingRegistry;
@interface ATVCursorTracker : NSObject
{
    BRCursorLayer * _cursorLayer;
    BRKeyValueObservingRegistry * _kvoRegistry;
    BRControl * _trackedControl;
}

@property (retain, nonatomic) BRCursorLayer * cursorLayer;
@property (retain, nonatomic) BRKeyValueObservingRegistry * kvoRegistry;
@property (retain, nonatomic) BRControl * trackedControl;

+ (CALayer *)trackerWithCursorLayer:(BRCursorLayer *)arg0;

- (void)_focusChanged:(NSNotification *)arg0;
- (BRCursorLayer *)cursorLayer;
- (void)layoutCursorLayer;
- (void)setCursorLayer:(BRCursorLayer *)arg0;
- (ATVCursorTracker *)initWithCursorLayer:(BRCursorLayer *)arg0;
- (void)setKvoRegistry:(BRKeyValueObservingRegistry *)arg0;
- (BRControl *)trackedControl;
- (struct CGRect)_trackedFocusCursorFrame;
- (void)setTrackedControl:(BRControl *)arg0;
- (BRKeyValueObservingRegistry *)kvoRegistry;
- (void)dealloc;
- (ATVCursorTracker *)init;
- (void).cxx_destruct;

@end
