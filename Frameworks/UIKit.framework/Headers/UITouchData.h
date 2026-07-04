/* Runtime dump - UITouchData
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITouchData : NSObject
{
    struct CGPoint startTouchDownLocation;
    unsigned int lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    char touchIsValidTap;
    UITouch * lastTouch;
}

@end
