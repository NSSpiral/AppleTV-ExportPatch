/* Runtime dump - CMShapeUtils
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMShapeUtils : NSObject

+ (CMShapeUtils *)inscribedBoundsWithBounds:(id)arg0 logicalBounds:(struct CGRect)arg1;
+ (CMShapeUtils *)relatvieBoundsWithAbsoluteInnerBounds:(id)arg0 parentBounds:(id)arg1;
+ (float)fontSizeForText:(NSString *)arg0 insideRectangle:(struct CGSize)arg1;
+ (struct CGRect)transformRect:(NSObject *)arg0 scale:(SEL)arg1 offsetX:(struct CGRect)arg2 offsetY:(struct CGSize)arg3;
+ (float)intersectionAngleNextToAngle:(float)arg0 isAfter:(char)arg1 nodeSize:(struct CGSize)arg2;
+ (CMShapeUtils *)internalBoundsWithBounds:(id)arg0 scaleBounds:(struct CGRect)arg1;
+ (CMShapeUtils *)transformedBoundsWithBounds:(id)arg0 transform:(NSObject *)arg1;
+ (char)isShapeALine:(id)arg0;
+ (double)mapAdjustCoord:(struct OADAdjustCoord)arg0 geometry:(TSDInfoGeometry *)arg1;
+ (float)scaleFactorFromLength:(float)arg0 toLength:(float)arg1;
+ (CMShapeUtils *)transformFromBounds:(struct CGRect)arg0 toOrientedBounds:(struct CGSize)arg1;
+ (double)getFormulaResultFromCustomGeometry:(NSObject *)arg0 atIndex:(unsigned int)arg1;
+ (long)radToNativeAngle:(double)arg0 isEscher:(char)arg1;
+ (double)nativeAngleToRad:(long)arg0 isEscher:(char)arg1;
+ (long)mapFormulaKeywordValue:(int)arg0 geometry:(TSDInfoGeometry *)arg1;
+ (double)mapFormulaOfType:(int)arg0 argValues:(double *)arg1 isEscher:(char)arg2;
+ (float)normalizedAngle:(float)arg0;
+ (double)fixedPointDegToRad:(long)arg0;
+ (void)setCoordSpaceForCustomeGeometry:(NSObject *)arg0 fromSize:(struct CGSize)arg1;
+ (CMShapeUtils *)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg0 parentOrientedBounds:(id)arg1 parentLogicalBounds:(struct CGRect)arg2;
+ (long)radToFixedPointDeg:(double)arg0;
+ (double)milliMinutesToRad:(long)arg0;
+ (long)radToMilliMinutes:(double)arg0;

@end
