/* Runtime dump - WDStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDStyle : NSObject <NSCopying>
{
    WDParagraphProperties * mParagraphProperties;
    WDCharacterProperties * mCharacterProperties;
    WDTableRowProperties * mTableRowProperties;
    WDTableCellProperties * mTableCellProperties;
    id mTableStyleOverrides;
    WDStyleSheet * mStyleSheet;
    WDStyle * mBaseStyle;
    WDStyle * mNextStyle;
    char mHidden;
    NSString * mName;
    NSString * mId;
    int mStyleType;
}

- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)type;
- (WDStyle *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)baseStyle;
- (NSDictionary *)characterProperties;
- (NSObject *)id;
- (NSDictionary *)paragraphProperties;
- (NSDictionary *)tableCellProperties;
- (NSDictionary *)tableProperties;
- (char)isAnythingOverridden;
- (void)setNextStyle:(NSObject *)arg0;
- (NSDictionary *)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)arg0;
- (void)setBaseStyle:(NSObject *)arg0;
- (WDStyle *)initWithStyleSheet:(NSObject *)arg0 id:(NSObject *)arg1 type:(int)arg2;
- (NSObject *)nextStyle;
- (char)hidden;
- (NSObject *)styleSheet;

@end
