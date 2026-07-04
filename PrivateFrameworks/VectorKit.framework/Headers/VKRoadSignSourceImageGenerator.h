/* Runtime dump - VKRoadSignSourceImageGenerator
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignSourceImageGenerator : NSObject

+ (struct CGSize)_sizeForSignType:(int)arg0 scale:(float)arg1 contentScale:(float)arg2;
+ (void)_drawSign:(int)arg0 context:(struct CGContext *)arg1 scale:(float)arg2 contentScale:(float)arg3 signColor:(int)arg4;
+ (struct CGImage *)newImageForSignType:(int)arg0 isOffRoute:(char)arg1 scale:(float)arg2 contentScale:(float)arg3;

@end
