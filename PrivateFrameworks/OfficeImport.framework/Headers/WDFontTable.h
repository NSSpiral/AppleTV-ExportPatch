/* Runtime dump - WDFontTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary * mFontTable;
    NSMutableArray * mFontsInOrderOfInsertion;
}

- (void)dealloc;
- (unsigned int)count;
- (WDFontTable *)init;
- (void)clear;
- (NSMutableArray *)fonts;
- (NSString *)createFontWithName:(NSString *)arg0;
- (NSString *)fontWithName:(NSString *)arg0 create:(char)arg1;
- (NSString *)fontWithName:(NSString *)arg0;

@end
