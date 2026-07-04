/* Runtime dump - EMCellStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMCellStyle : CMStyle <NSCopying>
{
    EDStyle * _edStyle;
    int _edCellType;
    double _columnWidth;
    double _contentWidth;
    char _isRowZero;
    char _isColumnZero;
    char _truncateContents;
    char _resolvedProperties;
}

+ (NSString *)_parseFontName:(NSString *)arg0 nameContainsBold:(char *)arg1 nameContainsItalic:(char *)arg2;
+ (UIFont *)styleForFont:(UIFont *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EMCellStyle *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)cssStyleString;
- (NSString *)cacheFriendlyCSSStyleString;
- (EMCellStyle *)initWithEDStyle:(NSObject *)arg0 type:(int)arg1 rowIndex:(unsigned int)arg2 columnIndex:(unsigned int)arg3 columnWidth:(unsigned int)arg4 contentWidth:(unsigned int)arg5 truncateContents:(char)arg6;
- (void)addFontStyle:(NSObject *)arg0;
- (void)addBordersStyle:(NSObject *)arg0;
- (void)addFillStyle:(NSObject *)arg0;
- (void)addAlignmentStyle:(NSObject *)arg0;
- (void)resolveFormatType;
- (void)resolveContentWidth;
- (void)resolveBorders;

@end
