/* Runtime dump - EDColorLocator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorLocator : NSObject
{
    unsigned int mColorOffset;
    int mColorIndex;
    OITSUColor * mColor;
}

- (void)dealloc;
- (void)setOffset:(unsigned int)arg0;
- (unsigned int)offset;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (EDColorLocator *)initWith:(id)arg0 index:(int)arg1 offset:(unsigned int)arg2;
- (int)colorIndex;
- (void)setColorIndex:(int)arg0;

@end
