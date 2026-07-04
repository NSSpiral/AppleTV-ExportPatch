/* Runtime dump - VKPOIIconGenerator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPOIIconGenerator : NSObject

+ (VKPOIIconGenerator *)sharedGenerator;

- (struct CGSize)imageSizeForStyle:(struct ? *)arg0 scale:(SCNActionScale *)arg1;
- (id)newIconWithGlyph:(struct CGImage *)arg0 style:(struct ? *)arg1 scale:(SCNActionScale *)arg2;
- (char)canHandleStyle:(struct ? *)arg0;
- (NSString *)keyForName:(NSString *)arg0 style:(struct ? *)arg1 size:(struct CGSize)arg2;

@end
