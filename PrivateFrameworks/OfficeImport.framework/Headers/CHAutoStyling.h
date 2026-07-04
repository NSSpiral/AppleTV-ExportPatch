/* Runtime dump - CHAutoStyling
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHAutoStyling : NSObject
{
    CHDChart * mChart;
    OADDrawingTheme * mDrawingTheme;
}

+ (CHAutoStyling *)autoStylingWithChart:(id)arg0 drawingTheme:(OADDrawingTheme *)arg1;

- (void)dealloc;
- (id)drawingTheme;
- (CHAutoStyling *)initWithChart:(GQHChart *)arg0 drawingTheme:(OADDrawingTheme *)arg1;
- (int)defaultMarkerStyleForSeriesIndex:(unsigned int)arg0;
- (void)replaceStrokeAndFillInEmptyMarker:(NSObject *)arg0 withSeriesGraphicProperties:(NSDictionary *)arg1;

@end
