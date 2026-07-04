/* Runtime dump - PXAnimation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXAnimation : NSObject

+ (void)readCommonTimeNodeData:(struct _xmlNode *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (PXAnimation *)readParagraphBuild:(struct _xmlNode *)arg0;
+ (PXAnimation *)readOleChartBuild:(struct _xmlNode *)arg0;
+ (PXAnimation *)readGraphicBuild:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)readAnimationFromTimingXmlNode:(struct _xmlNode *)arg0 tgtAnimation:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readTimeNodeType:(NSObject *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1;
+ (void)readPresetClass:(NSObject *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1;
+ (void)readRestartType:(NSObject *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1;
+ (void)readChildTimeNodeList:(struct _xmlNode *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readIterate:(struct _xmlNode *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readStConditionList:(struct _xmlNode *)arg0 commonTimeNodeData:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimEffectElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimMotionElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimRotationElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimScaleElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimAudioElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimVideoElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimCmdElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimParallelElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimSequentialElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readAnimSetElement:(struct _xmlNode *)arg0 timeNode:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readCondition:(struct _xmlNode *)arg0 timeCondition:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readTriggerEvent:(NSObject *)arg0 timeCondition:(PDTimeCondition *)arg1;
+ (NSObject *)newTarget:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (NSObject *)newShapeTarget:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (void)readChartBuildStep:(NSObject *)arg0 chartTarget:(NSObject *)arg1;
+ (void)readChartType:(NSObject *)arg0 oleChartTarget:(NSObject *)arg1;
+ (void)readCommonBehaviorData:(struct _xmlNode *)arg0 tgtCommonBehaviorData:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (void)readPointFromNode:(struct _xmlNode *)arg0 tgtPoint:(struct _xmlNode *)arg1;
+ (void)readCommonMediaNodeData:(struct _xmlNode *)arg0 commonMediaData:(struct _xmlNode *)arg1 drawingState:(struct _xmlNode *)arg2;
+ (PXAnimation *)readAnimVariant:(struct _xmlNode *)arg0 drawingState:(struct _xmlNode *)arg1;
+ (int)readChartBuildType:(NSObject *)arg0;

@end
