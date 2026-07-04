/* Runtime dump - EXOfficeArtClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXOfficeArtClient : OAXClient
{
    char mAutoChartFillIsHollow;
    char mAutoChartStrokeIsHollow;
}

@property char autoChartFillIsHollow;
@property char autoChartStrokeIsHollow;

- (void)readClientDataFromNode:(struct _xmlNode *)arg0 toDrawable:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
- (char)chartAutoFillIsHollow;
- (char)chartAutoStrokeIsHollow;
- (void)setAutoChartFillIsHollow:(char)arg0;
- (void)setAutoChartStrokeIsHollow:(char)arg0;
- (char)autoChartFillIsHollow;
- (char)autoChartStrokeIsHollow;

@end
