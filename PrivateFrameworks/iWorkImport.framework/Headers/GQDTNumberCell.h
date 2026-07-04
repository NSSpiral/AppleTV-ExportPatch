/* Runtime dump - GQDTNumberCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTNumberCell : GQDTCell
{
    double mValue;
    GQDTComputedFormatSpec * mComputedFormat;
}

- (int)readAttributesForNumberCell:(struct _xmlTextReader *)arg0;
- (int)readAttributesForNCell:(struct _xmlTextReader *)arg0;
- (struct __CFString *)createStringValue;
- (void)dealloc;
- (double)value;

@end
