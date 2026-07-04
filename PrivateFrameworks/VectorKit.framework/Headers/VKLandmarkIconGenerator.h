/* Runtime dump - VKLandmarkIconGenerator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLandmarkIconGenerator : NSObject

+ (VKLandmarkIconGenerator *)sharedGenerator;

- (NSObject *)newIconWithMask:(struct CGImage *)arg0 outlineMask:(struct CGImage *)arg1 style:(struct ? *)arg2 scale:(SCNActionScale *)arg3;
- (char)canHandleStyle:(struct ? *)arg0;
- (NSString *)keyForName:(NSString *)arg0 style:(struct ? *)arg1 size:(struct CGSize)arg2;

@end
