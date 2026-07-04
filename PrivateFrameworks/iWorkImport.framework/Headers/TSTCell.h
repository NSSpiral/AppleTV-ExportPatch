/* Runtime dump - TSTCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCell : NSObject <NSCopying>
{
    struct ? mPrivate;
    TSULocale * mLocale;
}

@property (readonly, nonatomic) TSULocale * locale;

- (void)clearValue;
- (void)inflateFromStorageRef:(struct TSTCellStorage *)arg0 dataStore:(BKSApplicationDataStore *)arg1 suppressingFormulaInflation:(unsigned char)arg2;
- (TSTCell *)initWithStorageRef:(struct TSTCellStorage *)arg0 dataStore:(BKSApplicationDataStore *)arg1;
- (char)isCellContentsEqualToCell:(NSObject *)arg0;
- (void)inflateFromStorageRef:(struct TSTCellStorage *)arg0 dataStore:(BKSApplicationDataStore *)arg1 suppressingFormulaInflation:(unsigned char)arg2 suppressingTransmutation:(id)arg3;
- (void)writeToStorageRef:(struct TSTCellStorage *)arg0;
- (char)isEmptyForDataStore;
- (void)clearAllFormats;
- (void)applyFormulaResult:(struct TSCEValue *)arg0 context:(struct TSCEValue)arg1 hasWarnings:(char)arg2 outWriteDidBeginOrEndWithTextCell:(char)arg3;
- (void)applyFormulaResult:(struct TSCEValue *)arg0;
- (char)hasEqualValueToCell:(NSObject *)arg0;
- (void)clearStrokes;
- (NSString *)formulaSyntaxErrorString;
- (void)dealloc;
- (TSTCell *)init;
- (NSString *)description;
- (TSTCell *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (void)setLocale:(TSULocale *)arg0;
- (void).cxx_construct;
- (TSULocale *)locale;
- (void)clear;
- (TSTCell *)initWithCell:(NSObject *)arg0;
- (TSTCell *)initWithLocale:(TSULocale *)arg0;

@end
