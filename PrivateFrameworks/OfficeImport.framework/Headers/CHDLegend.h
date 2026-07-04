/* Runtime dump - CHDLegend
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLegend : NSObject
{
    int mLegendPosition;
    OADGraphicProperties * mGraphicProperties;
    unsigned int mFontIndex;
    EDCollection * mLegendEntries;
    EDResources * mResources;
    BOOL mIsVertical;
}

- (void)dealloc;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (NSDictionary *)graphicProperties;
- (int)legendPosition;
- (void)setFontIndex:(unsigned int)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (CHDLegend *)initWithResources:(NSArray *)arg0;
- (void)setLegendPosition:(int)arg0;
- (void)setIsSingleColumnLegend:(BOOL)arg0;
- (unsigned int)fontIndex;
- (NSArray *)legendEntries;
- (BOOL)isSingleColumnLegend;

@end
