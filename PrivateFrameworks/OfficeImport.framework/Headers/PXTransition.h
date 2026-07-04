/* Runtime dump - PXTransition
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXTransition : NSObject

+ (void)initialize;
+ (void)readTransitionFromNode:(struct _xmlNode *)arg0 tgtTransition:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (int)readOrientation:(struct _xmlNode *)arg0 attribute:(struct _xmlNode *)arg1 defaultValue:(struct _xmlNode *)arg2;
+ (int)readDirection:(struct _xmlNode *)arg0 defaultValue:(struct _xmlNode *)arg1;
+ (int)readReverseDirection:(struct _xmlNode *)arg0 defaultValue:(struct _xmlNode *)arg1;
+ (int)readInOut:(struct _xmlNode *)arg0 defaultValue:(struct _xmlNode *)arg1;

@end
