/* Runtime dump - MRFrameManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRFrameManager : NSObject
{
    NSMutableDictionary * mFrameSets;
    NSMutableDictionary * mFramePools;
}

+ (void)initialize;
+ (MRFrameManager *)sharedManager;

- (void)dealloc;
- (MRFrameManager *)init;
- (void)cleanup;
- (NSObject *)frameWithFrameID:(NSString *)arg0;
- (void)releaseResources;
- (void)recycleFrame:(NSObject *)arg0;
- (NSObject *)resourcePathForFrameID:(NSObject *)arg0 andResource:(NSObject *)arg1;
- (NSObject *)sizeScriptForFrameID:(NSObject *)arg0;

@end
