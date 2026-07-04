/* Runtime dump - WDTableCell
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableCell : NSObject
{
    unsigned int mIndex;
    WDTableRow * mRow;
    WDTableCellProperties * mProperties;
    WDText * mText;
    NSString * mIdentifier;
    char mUseTrackedProperties;
}

- (void)clearProperties;
- (void)dealloc;
- (PTSChoiceRow *)row;
- (NSString *)identifier;
- (NSString *)text;
- (void)setIdentifier:(NSString *)arg0;
- (unsigned int)index;
- (NSDictionary *)properties;
- (double)cellWidth;
- (char)useTrackedProperties;
- (void)setUseTrackedProperties:(char)arg0;
- (WDTableCell *)initWithRow:(id)arg0 at:(unsigned int)arg1;
- (int)compareIndex:(NSObject *)arg0;

@end
