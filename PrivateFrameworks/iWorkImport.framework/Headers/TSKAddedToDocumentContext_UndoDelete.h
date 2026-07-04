/* Runtime dump - TSKAddedToDocumentContext_UndoDelete
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAddedToDocumentContext_UndoDelete : TSKAddedToDocumentContext
{
    NSMutableArray * mInsertedTableInfos;
}

- (void)addInsertedTableInfo:(NSDictionary *)arg0;
- (id)insertedTableInfos;
- (char)wasUndoDelete;
- (void)dealloc;
- (NSString *)description;

@end
