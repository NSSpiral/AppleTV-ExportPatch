/* Runtime dump - UIControlTargetAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIControlTargetAction : NSObject
{
    id _target;
    SEL _action;
    int _eventMask;
    char _cancelled;
}

@property (nonatomic) char cancelled;

- (char)cancelled;
- (void)setCancelled:(char)arg0;

@end
