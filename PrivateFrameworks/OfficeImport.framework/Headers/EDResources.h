/* Runtime dump - EDResources
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDResources : NSObject
{
    EDCollection * mStrings;
    EDContentFormatsCollection * mContentFormats;
    EDFontsCollection * mFonts;
    EDCollection * mAlignmentInfos;
    EDStylesCollection * mStyles;
    EDColorsCollection * mColors;
    EDColorsCollection * mThemes;
    EDCollection * mNames;
    EDLinksCollection * mLinks;
    EDCollection * mBorders;
    EDCollection * mBorder;
    EDCollection * mFills;
    EDCollection * mDifferentialStyles;
    EDTableStylesCollection * mTableStyles;
}

- (void)dealloc;
- (void)setColors:(NSArray *)arg0;
- (NSArray *)links;
- (NSArray *)strings;
- (NSArray *)colors;
- (NSMutableArray *)names;
- (NSMutableArray *)fonts;
- (EDBorders *)borders;
- (id)fills;
- (NSArray *)contentFormats;
- (EDResources *)initWithStringOptimization:(BOOL)arg0;
- (id)themes;
- (id)differentialStyles;
- (id)alignmentInfos;
- (id)tableStyles;
- (void)setThemes:(id)arg0;
- (NSMutableArray *)styles;
- (NSString *)border;

@end
