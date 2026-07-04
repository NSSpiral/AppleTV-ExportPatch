/* Runtime dump - EFTableData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EFTableData : NSObject
{
    struct EFRefTok mRefTok;
    EDTable * mTable;
    EDReference * mReference;
    int mMakeups;
}

- (void)dealloc;
- (RMTable *)table;
- (void).cxx_construct;
- (unsigned short *)ptgData;
- (EFTableData *)initWith:(struct EFStrTok *)arg0;
- (struct EFRefTok *)refTok;
- (struct ?)reference;
- (void)makeup:(id)arg0 with:(int)arg1;

@end
