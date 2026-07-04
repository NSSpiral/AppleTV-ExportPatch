/* Runtime dump - TSKStarRatingViewRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKStarRatingViewRenderer : NSObject

+ (struct CGPath *)newStarPath:(float)arg0;
+ (void)renderRating:(int)arg0 intoContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 style:(struct CGSize)arg3 showDots:(id)arg4 color:(int)arg5;

- (TSKStarRatingViewRenderer *)init;

@end
