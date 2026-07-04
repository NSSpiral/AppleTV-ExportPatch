/* Runtime dump - ODDFillColorList
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDFillColorList : NSObject
{
    NSArray * mColors;
    int mHueDirection;
    int mMethod;
}

- (void)dealloc;
- (void)setColors:(NSArray *)arg0;
- (NSObject *)cycleColorAtIndex:(unsigned int)arg0;
- (NSObject *)repeatColorAtIndex:(unsigned int)arg0;
- (NSObject *)spanColorAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 state:(NSObject *)arg2;
- (NSObject *)colorAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 state:(NSObject *)arg2;
- (void)setHueDirection:(int)arg0;
- (void)getComponentsForIndex:(unsigned int)arg0 hue:(float *)arg1 saturation:(float *)arg2 brightness:(float *)arg3 state:(NSObject *)arg4;
- (void)setMethod:(int)arg0;

@end
