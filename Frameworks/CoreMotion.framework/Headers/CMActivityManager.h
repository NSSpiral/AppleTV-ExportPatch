/* Runtime dump - CMActivityManager
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManager : NSObject
{
    id _internal;
}

@property (copy) id activityHandler;
@property (readonly, nonatomic) char activityAvailable;

- (char)isActivityAvailable;
- (int)overrideOscarSideband:(char)arg0 withState:(int)arg1;
- (void)setActivityHandler:(id /* block */)arg0;
- (id /* block */)activityHandler;
- (void)dealloc;
- (CMActivityManager *)init;

@end
