/* Runtime dump - AXDisplayLinkManager
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDisplayLinkManager : NSObject
{
    char _hasUpdatedTargetActions;
    char _handlingDisplayRefresh;
    CADisplayLink * _storedDisplayLink;
    NSMutableSet * _activeTargetActions;
    NSMutableSet * _updatedTargetActions;
    unsigned int _warmUpModeRequirementsCount;
}

@property (readonly, nonatomic) char paused;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned int frameInterval;
@property (retain, nonatomic) CADisplayLink * displayLink;
@property (retain, nonatomic) CADisplayLink * storedDisplayLink;
@property (retain, nonatomic) NSMutableSet * activeTargetActions;
@property (retain, nonatomic) NSMutableSet * updatedTargetActions;
@property (nonatomic) char hasUpdatedTargetActions;
@property (nonatomic) char handlingDisplayRefresh;
@property (nonatomic) unsigned int warmUpModeRequirementsCount;
@property (readonly, nonatomic) char warmUpModeEnabled;

+ (void)_releaseCurrentDisplayLinkManager;
+ (AXDisplayLinkManager *)currentDisplayLinkManager;

- (void)dealloc;
- (AXDisplayLinkManager *)init;
- (double)timestamp;
- (double)duration;
- (unsigned int)frameInterval;
- (void)setDisplayLink:(CADisplayLink *)arg0;
- (CADisplayLink *)displayLink;
- (void)setActiveTargetActions:(NSMutableSet *)arg0;
- (void)setUpdatedTargetActions:(NSMutableSet *)arg0;
- (CADisplayLink *)storedDisplayLink;
- (void)_displayDidRefresh:(id)arg0;
- (void)setStoredDisplayLink:(CADisplayLink *)arg0;
- (void)addTarget:(NSObject *)arg0 selector:(SEL)arg1 frameInterval:(unsigned int)arg2;
- (char)isHandlingDisplayRefresh;
- (id)_prepareUpdatedTargetActionsForModification;
- (NSMutableSet *)activeTargetActions;
- (void)_didAddFirstTargetAction;
- (void)_didRemoveLastTargetAction;
- (NSMutableSet *)updatedTargetActions;
- (char)hasUpdatedTargetActions;
- (void)setHasUpdatedTargetActions:(char)arg0;
- (char)isWarmUpModeEnabled;
- (unsigned int)warmUpModeRequirementsCount;
- (void)setWarmUpModeRequirementsCount:(unsigned int)arg0;
- (void)setHandlingDisplayRefresh:(char)arg0;
- (void)addTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (void)removeTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;
- (char)isPaused;

@end
