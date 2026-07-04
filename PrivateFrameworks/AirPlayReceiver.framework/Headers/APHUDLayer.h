/* Runtime dump - APHUDLayer
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface APHUDLayer : CALayer
{
    struct __CTFont * _Font;
    struct __CFDictionary * _TextAttributes;
    struct __CFArray * _Labels;
    struct __CFArray * _Values;
    struct __CFArray * _Colors;
}

- (void)addLine:(struct __CFString *)arg0 withColorIndex:(int)arg1;
- (void)setValueAtIndex:(int)arg0 format:(NSString *)arg1;
- (void)dealloc;
- (APHUDLayer *)init;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)setValue:(struct __CFString *)arg0 atIndex:(int)arg1;

@end
