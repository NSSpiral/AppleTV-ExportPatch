/* Runtime dump - VKInteractiveDispatch
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKInteractiveDispatch : VKDispatch

+ (VKInteractiveDispatch *)defaultDispatch;

- (NSOperationQueue *)_newLayoutQueue:(char *)arg0;
- (NSOperationQueue *)_newRenderQueue:(char *)arg0;

@end
