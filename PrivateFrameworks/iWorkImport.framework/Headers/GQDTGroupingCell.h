/* Runtime dump - GQDTGroupingCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTGroupingCell : GQDTCell
{
    unsigned short mLevel;
    unsigned short mRowIdx;
    unsigned short mRowCount;
    char mIsCollapsed;
    id mValue;
    id mFormat;
    struct __CFBundle * mProcessorBundle;
    char mHasValidFormulaValue;
    struct __CFString * mFormulaValue;
}

+ (struct __CFString *)displayTypeString:(int)arg0;

- (void)setProcessorBundle:(struct __CFBundle *)arg0;
- (struct __CFString *)createFormattedValue;
- (char)hasFormulaValue;
- (int)readValue:(struct _xmlTextReader *)arg0;
- (int)readElement:(struct _xmlTextReader *)arg0;
- (int)readAttributes:(struct _xmlTextReader *)arg0;
- (int)readRootFormat:(struct _xmlTextReader *)arg0;
- (unsigned short)rowIdx;
- (void)dealloc;
- (void *)value;
- (unsigned short)level;
- (char)isCollapsed;
- (unsigned short)rowCount;

@end
