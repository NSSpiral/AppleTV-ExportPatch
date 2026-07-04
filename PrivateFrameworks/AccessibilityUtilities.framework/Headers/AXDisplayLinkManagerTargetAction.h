/* Runtime dump - AXDisplayLinkManagerTargetAction
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDisplayLinkManagerTargetAction : NSObject
{
    id _target;
    SEL _actionSelector;
    unsigned int _frameInterval;
    unsigned int _displayDidRefreshCount;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned int frameInterval;
@property (nonatomic) unsigned int displayDidRefreshCount;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (void)setFrameInterval:(unsigned int)arg0;
- (unsigned int)frameInterval;
- (AXDisplayLinkManagerTargetAction *)initWithTarget:(NSObject *)arg0 actionSelector:(SEL)arg1 frameInterval:(unsigned int)arg2;
- (void)setActionSelector:(SEL)arg0;
- (SEL)actionSelector;
- (unsigned int)displayDidRefreshCount;
- (void)setDisplayDidRefreshCount:(unsigned int)arg0;
- (AXDisplayLinkManagerTargetAction *)initWithTarget:(NSObject *)arg0 actionSelector:(SEL)arg1;
- (void)displayDidRefresh:(id)arg0;

@end
