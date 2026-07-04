/* Runtime dump - FigHUDLayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigHUDLayer : CALayer
{
    struct __CTFont * _Font;
    float _FontSize;
    struct __CFDictionary * _TextAttributes;
    struct __CFArray * _Labels;
    struct __CFArray * _Values;
    struct __CFArray * _LabelColors;
    struct __CFArray * _ValueColors;
}

- (long)addLine:(struct __CFString *)arg0 withLabelColorIndex:(int)arg1 withValueColorIndex:(int)arg2;
- (void)setFont:(struct __CFString *)arg0 withPointSize:(float)arg1;
- (void)resetLines;
- (long)addLine:(struct __CFString *)arg0 withColorIndex:(int)arg1;
- (struct __CFArray *)getValues;
- (struct __CFArray *)getLabels;
- (void)setValueAtIndex:(int)arg0 format:(NSString *)arg1;
- (void)dealloc;
- (FigHUDLayer *)init;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)setValue:(struct __CFString *)arg0 atIndex:(int)arg1;

@end
