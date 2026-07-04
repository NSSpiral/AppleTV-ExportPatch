/* Runtime dump - CPTextObject
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextObject : CPChunk
{
    struct CGPoint anchor;
    char metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (float)maxFontSize;
- (void)translateObjectYBy:(float)arg0;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (void)calculateMetrics;

@end
