/* Runtime dump - BLEffectManager
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLEffectManager : NSObject

+ (struct CGContext *)newContextWithSize:(struct CGSize)arg0 clear:(char)arg1;
+ (struct CGContext *)newContextWithSize:(struct CGSize)arg0 clear:(char)arg1 alpha:(char)arg2;
+ (struct CGContext *)newGrayscaleContextWithSize:(struct CGSize)arg0 clear:(char)arg1;
+ (void)performBlock:(id /* block */)arg0 fromContext:(/* block */ id)arg1 toContext:(struct CGContext *)arg2;
+ (void)performLineBlock:(id /* block */)arg0 fromContext:(/* block */ id)arg1 toContext:(struct CGContext *)arg2;
+ (struct CGContext *)newContext:(struct CGContext *)arg0 lineOperation:(NSObject *)arg1;
+ (void)performBlock:(id /* block */)arg0 onContext:(/* block */ id)arg1;
+ (struct CGImage *)newBrushImageRefWithSize:(float)arg0 softness:(float)arg1 brightness:(float)arg2;
+ (void)performLineBlock:(id /* block */)arg0 onContext:(/* block */ id)arg1;
+ (struct CGContext *)newContext:(struct CGContext *)arg0 pixelOperation:(NSObject *)arg1;
+ (struct CGContext *)newContext:(struct CGContext *)arg0 withSaturation:(float)arg1;
+ (struct CGContext *)newContextFromContext:(struct CGContext *)arg0;
+ (void)fillContext:(struct CGContext *)arg0 withColor:(UIColor *)arg1;
+ (void)invertContext:(struct CGContext *)arg0;
+ (NSObject *)effectManager;

@end
