/* Runtime dump - WDListTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListTable : NSObject
{
    WDDocument * mDocument;
    NSMutableArray * mLists;
    NSMutableDictionary * mListMapById;
    WDList * mNullList;
}

- (void)dealloc;
- (WDListTable *)initWithDocument:(NSObject *)arg0;
- (NSObject *)listWithListId:(long)arg0;
- (NSArray *)lists;
- (NSObject *)addListWithListId:(long)arg0 listDefinitionId:(long)arg1;
- (unsigned int)listCount;
- (id)listAt:(unsigned int)arg0;

@end
