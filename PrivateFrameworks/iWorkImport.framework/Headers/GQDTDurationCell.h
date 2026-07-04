/* Runtime dump - GQDTDurationCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTDurationCell : GQDTCell
{
    double mValue;
    GQDTComputedFormatSpec * mComputedFormat;
    struct __CFBundle * mProcessorBundle;
}

- (void)setProcessorBundle:(struct __CFBundle *)arg0;
- (struct __CFString *)createStringValue;
- (int)readAttributesForDurationCell:(struct _xmlTextReader *)arg0;
- (void)dealloc;

@end
