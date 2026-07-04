/* Runtime dump - GQDTDateCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTDateCell : GQDTCell
{
    struct __CFDate * mDate;
    GQDTComputedFormatSpec * mComputedFormat;
}

- (struct __CFString *)createStringValue;
- (int)readAttributesForDateCell:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (struct __CFString *)getDateFormat;
- (void)dealloc;
- (struct __CFDate *)date;

@end
