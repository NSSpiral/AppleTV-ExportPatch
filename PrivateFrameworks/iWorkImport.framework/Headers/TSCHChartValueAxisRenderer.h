/* Runtime dump - TSCHChartValueAxisRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer
{
    unsigned int mEditingLabelIndex;
}

- (id)transparencyLayers;
- (NSObject *)valueAxisLayoutItem;
- (void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (NSObject *)labelsLayoutItem;
- (id)labelStringForAxis:(id)arg0 index:(unsigned int)arg1;
- (double)unitSpaceValueForAxis:(id)arg0 index:(unsigned int)arg1;

@end
