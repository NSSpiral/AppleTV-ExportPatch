/* Runtime dump - CHBGraphicProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBGraphicProperties : NSObject

+ (NSObject *)oadStrokeFrom:(struct XlChartLineStyle *)arg0;
+ (NSObject *)oadGraphicPropertiesFromState:(NSObject *)arg0 xlLineStyle:(struct XlChartLineStyle *)arg1 xlFillStyle:(struct XlChartLineStyle)arg2;
+ (NSString *)oadGraphicPropertiesFromXlChartSeriesFormat:(struct XlChartSeriesFormat *)arg0 state:(struct XlChartSeriesFormat)arg1;
+ (NSObject *)mapFillStyle:(struct XlChartFillStyle *)arg0 xlPictureFormat:(struct XlChartFillStyle)arg1 state:(struct CsColour)arg2;
+ (float)widthFromLineWeightEnum:(int)arg0;
+ (NSObject *)mapPresetDashFromPattern:(int)arg0;
+ (NSObject *)mapFillStyleForMarker:(struct XlChartMarkerStyle *)arg0 complex:(struct XlChartMarkerStyle)arg1 state:(struct CsColour)arg2;
+ (int)oaPresetDashTypeFromLinePatternEnum:(int)arg0;
+ (CHBGraphicProperties *)mapAssociatedEscherObjectstate:(NSObject *)arg0;
+ (int)presetLinePatternEnumFromDash:(id)arg0;
+ (int)lineWeightEnumFromWidth:(float)arg0;
+ (NSObject *)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType *)arg0 state:(struct XlChartFillStyle *)arg1;
+ (NSObject *)oadGraphicPropertiesFromXlMarkerStyle:(struct XlChartMarkerStyle *)arg0 complex:(struct XlChartMarkerStyle)arg1 state:(struct CsColour)arg2;

@end
