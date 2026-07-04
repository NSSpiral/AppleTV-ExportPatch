/* Runtime dump - OAITOrientedBounds
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAITOrientedBounds : NSObject

+ (OAITOrientedBounds *)absoluteOrientedBoundsOfDrawable:(id)arg0;
+ (float)scaleFactorFromLength:(float)arg0 toLength:(float)arg1;
+ (struct CGAffineTransform)transformFromBounds:(struct CGRect)arg0 toOrientedBounds:(struct CGSize)arg1;
+ (OAITOrientedBounds *)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg0 parentOrientedBounds:(id)arg1 parentLogicalBounds:(struct CGRect)arg2;
+ (OAITOrientedBounds *)relativeOrientedBoundsOfDrawable:(id)arg0;
+ (OAITOrientedBounds *)adjustedOrientedBoundsWithOrientedBounds:(OADOrientedBounds *)arg0 logicalBounds:(struct CGRect)arg1;
+ (OAITOrientedBounds *)adjustedOrientedBoundsWithOrientedBounds:(OADOrientedBounds *)arg0;
+ (struct CGRect)axisParallelBoundsOfOrientedBounds:(id)arg0;

@end
