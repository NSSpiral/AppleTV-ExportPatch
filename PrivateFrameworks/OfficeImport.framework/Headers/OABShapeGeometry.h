/* Runtime dump - OABShapeGeometry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABShapeGeometry : NSObject

+ (void)readAdjustValuesFromShapeProperties:(struct EshShapeProperties *)arg0 toGeometry:(struct EshShapeProperties)arg1;
+ (void)readGeometryCoordSpaceFromShapeProperties:(struct EshShapeProperties *)arg0 toGeometry:(struct EshShapeProperties)arg1;
+ (void)readLimoFromPath:(struct EshPath *)arg0 toGeometry:(struct EshPath)arg1;
+ (void)readFromFormulas:(struct EshTablePropVal<EshFormula> *)arg0 toGeometry:(struct EshTablePropVal<EshFormula>)arg1;
+ (void)readFromTextBoxRects:(struct EshTablePropVal<EshComputedRect> *)arg0 toGeometry:(struct EshTablePropVal<EshComputedRect>)arg1;
+ (void)readPathCommandsAndParamsFromPath:(struct EshPath *)arg0 toGeometry:(struct EshPath)arg1;
+ (int)actualPathCommandForPathCommand:(int)arg0 index:(unsigned short)arg1;
+ (struct OADAdjustCoord)adjustCoordWithComputedValue:(struct EshComputedValue)arg0;
+ (struct EshComputedValue)computedValueWithAdjustCoord:(struct OADAdjustCoord)arg0;
+ (void)appendAdjustPoint:(struct OADAdjustPoint)arg0 toPathParams:(struct OADAdjustCoord)arg1;
+ (void)writeAdjustValuesFromGeometry:(NSObject *)arg0 toShapeProperties:(struct EshShapeProperties *)arg1;
+ (void)writeCoordSpaceFromGeometry:(NSObject *)arg0 toShape:(struct EshShape *)arg1;
+ (void)writeLimoFromGeometry:(NSObject *)arg0 toPath:(struct EshPath *)arg1;
+ (void)writePathCommandsAndParamsFromGeometry:(NSObject *)arg0 toPath:(struct EshPath *)arg1;
+ (void)writeFormulasFromGeometry:(NSObject *)arg0 toPath:(struct EshPath *)arg1;
+ (void)writeTextBodyRectsFromGeometry:(NSObject *)arg0 toPath:(struct EshPath *)arg1;
+ (void)readFromShape:(struct EshShape *)arg0 toShape:(struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> >)arg1;
+ (void)readFromPathCommands:(struct EshTablePropVal<EshPathCommand> *)arg0 pathParams:(struct EshTablePropVal<EshPathCommand>)arg1 toGeometry:(struct EshPathCommand *)arg2;
+ (void)readFromLimo:(struct CsPoint<int>)arg0 toGeometry:(NSObject *)arg1;
+ (void)writeFromShape:(id)arg0 toShape:(struct EshShape *)arg1;

@end
