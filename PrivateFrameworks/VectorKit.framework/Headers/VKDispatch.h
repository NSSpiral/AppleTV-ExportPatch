/* Runtime dump - VKDispatch
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDispatch : NSObject
{
    NSObject<OS_dispatch_queue> * _homeQueue;
    NSObject<OS_dispatch_queue> * _layoutQueue;
    NSObject<OS_dispatch_queue> * _renderQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * homeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * layoutQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * renderQueue;

+ (NSOperationQueue *)tileDecodeQueue;
+ (NSOperationQueue *)preemptiveLoadQueue;
+ (VKDispatch *)defaultDispatch;
+ (NSOperationQueue *)stylesheetLoadQueue;
+ (NSOperationQueue *)tileDecodeStylingQueue;
+ (NSOperationQueue *)iconRenderQueue;
+ (NSOperationQueue *)textureManagerRootQueue;

- (void)dealloc;
- (NSString *)description;
- (NSObject<OS_dispatch_queue> *)renderQueue;
- (NSObject<OS_dispatch_queue> *)layoutQueue;
- (NSObject<OS_dispatch_queue> *)homeQueue;
- (VKDispatch *)initWithHomeQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSOperationQueue *)_initWithHomeQueue:(NSObject<OS_dispatch_queue> *)arg0 layoutQueue:(NSObject<OS_dispatch_queue> *)arg1 renderQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSOperationQueue *)_newLayoutQueue:(char *)arg0;
- (NSOperationQueue *)_newRenderQueue:(char *)arg0;

@end
