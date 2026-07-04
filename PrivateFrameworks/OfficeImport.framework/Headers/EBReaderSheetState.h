/* Runtime dump - EBReaderSheetState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBReaderSheetState : NSObject
{
    EBReaderState * mReaderState;
    EDSheet * mEDSheet;
    struct map<int, unsigned int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned int> > > mSharedFormulas;
    unsigned int mChartIndex;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (EDWorkbook *)workbook;
- (struct XlBinaryReader *)xlReader;
- (NSObject *)edSheet;
- (NSObject *)readerState;
- (unsigned int)sharedFormulaIndexForRowCol:(int)arg0;
- (void)setSharedFormulaIndex:(unsigned int)arg0 forRowCol:(int)arg1;
- (EBReaderSheetState *)initWithReaderState:(NSObject *)arg0;
- (void)setEDSheet:(NSObject *)arg0;
- (unsigned int)nextChartIndex;
- (void)reportWorksheetWarning:(struct TCTaggedMessageStructure *)arg0;
- (NSArray *)resources;

@end
