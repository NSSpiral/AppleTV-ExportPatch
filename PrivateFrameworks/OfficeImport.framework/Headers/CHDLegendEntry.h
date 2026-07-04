/* Runtime dump - CHDLegendEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLegendEntry : NSObject
{
    unsigned int mFontIndex;
    unsigned int mEntryIndex;
    EDResources * mResources;
}

- (void)dealloc;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (void)setFontIndex:(unsigned int)arg0;
- (CHDLegendEntry *)initWithResources:(NSArray *)arg0;
- (void)setEntryIndex:(unsigned int)arg0;
- (unsigned int)fontIndex;
- (unsigned int)entryIndex;

@end
