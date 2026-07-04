/* Runtime dump - CPTextLineMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextLineMaker : NSObject
{
    NSMutableArray * textLines;
}

- (void)dealloc;
- (unsigned int)makeTextLines:(id)arg0;
- (NSMutableArray *)textLines;
- (void)splitByGraphic:(id)arg0 with:(struct CPPDFContext *)arg1;
- (void)zOrderSplitLines:(id)arg0;

@end
