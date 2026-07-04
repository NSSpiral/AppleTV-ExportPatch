/* Runtime dump - BKSHIDEventRouterManager
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase
{
    char _needsFlush;
}

@property (nonatomic) char needsFlush;

+ (BKSHIDEventRouterManager *)sharedInstance;

- (void)dealloc;
- (BKSHIDEventRouterManager *)init;
- (void)_routerUpdated:(id)arg0;
- (void)setEventRouters:(NSArray *)arg0;
- (void)_flushTrigger;
- (char)needsFlush;
- (void)setNeedsFlush:(char)arg0;
- (void)_flush;

@end
