/* Runtime dump - WDTableStyleOverride
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableStyleOverride : NSObject <NSCopying>
{
    WDDocument * mDocument;
    WDStyle * mStyle;
    int mPart;
    WDParagraphProperties * mParagraphProperties;
    WDCharacterProperties * mCharacterProperties;
    WDTableRowProperties * mTableRowProperties;
    WDTableCellProperties * mTableCellStyleProperties;
    id mParagraphPropertiesOverridden;
    id mCharacterPropertiesOverridden;
    id mTableRowPropertiesOverridden;
    id mTableCellStylePropertiesOverridden;
}

- (void)dealloc;
- (WDTableStyleOverride *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)style;
- (void)setStyle:(NSObject *)arg0;
- (WDTableStyleOverride *)initWithDocument:(NSObject *)arg0;
- (char)isCharacterPropertiesOverridden;
- (NSDictionary *)characterProperties;
- (NSDictionary *)paragraphProperties;
- (NSDictionary *)tableProperties;
- (NSDictionary *)tableRowProperties;
- (NSDictionary *)mutableCharacterProperties;
- (void)setPart:(int)arg0;
- (int)part;
- (NSDictionary *)mutableParagraphProperties;
- (char)isParagraphPropertiesOverridden;
- (void)setParagraphPropertiesOverridden:(char)arg0;
- (void)setCharacterPropertiesOverridden:(char)arg0;
- (char)isTablePropertiesOverridden;
- (NSDictionary *)mutableTableRowProperties;
- (char)isTableRowPropertiesOverridden;
- (void)setTableRowPropertiesOverridden:(char)arg0;
- (NSDictionary *)tableCellStyleProperties;
- (NSDictionary *)mutableTableCellStyleProperties;
- (char)isTableCellStylePropertiesOverridden;
- (void)setTableCellStylePropertiesOverridden:(char)arg0;

@end
