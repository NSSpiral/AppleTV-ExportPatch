/* Runtime dump - TNFormBasedSheet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormBasedSheet : TNSheet
{
    struct __CFUUID * mTableID;
    TSTTableInfo * mTableInfo;
    NSString * mImportedTargetName;
}

@property (readonly) TSTTableInfo * tableInfo;
@property struct __CFUUID * tableID;

- (TNFormBasedSheet *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (struct __CFUUID *)tableID;
- (void)setTableID:(struct __CFUUID *)arg0;
- (TSTTableInfo *)tableInfo;
- (char)isForm;
- (void)clearTableInfoCache;
- (TNFormBasedSheet *)initWithContext:(NSObject *)arg0 importedTargetName:(NSString *)arg1;
- (void)resolveImportedTargetNameInDocumentRoot:(NSObject *)arg0;
- (void)dealloc;
- (float)contentScale;

@end
