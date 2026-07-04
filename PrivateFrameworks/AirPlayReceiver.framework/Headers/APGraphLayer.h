/* Runtime dump - APGraphLayer
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface APGraphLayer : CALayer
{
    float * * _Values;
    float * _Mins;
    float * _Maxes;
    int * _StartIndex;
    int * _NumValues;
    int _NumGraphs;
    struct CGPoint * _Lines;
    int _MaxLength;
    struct __CTFont * _Font;
    struct __CFDictionary * _TextAttributes;
}

+ (struct CGColor *)copyGraphColorWithIndex:(int)arg0;

- (void)setUpGraphs:(int)arg0;
- (void)setUpGraph:(int)arg0 min:(float)arg1 max:(float)arg2 numValues:(int)arg3;
- (void)updateValue:(int)arg0 value:(float)arg1;
- (void)dealloc;
- (APGraphLayer *)init;
- (void)drawInContext:(struct CGContext *)arg0;

@end
