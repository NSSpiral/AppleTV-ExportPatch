/* Runtime dump - WDList
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDList : NSObject
{
    WDDocument * mDocument;
    long mListId;
    long mListDefinitionId;
    NSMutableArray * mLevelOverrides;
}

@property (readonly, nonatomic) long listId;
@property (readonly, nonatomic) long listDefinitionId;

- (void)dealloc;
- (NSString *)description;
- (long)listDefinitionId;
- (long)listId;
- (unsigned int)levelOverrideCount;
- (id)levelOverrideAt:(unsigned int)arg0;
- (id)levelOverrideForLevel:(unsigned char)arg0;
- (id)levelOverrides;
- (WDList *)initWithDocument:(NSObject *)arg0 listId:(long)arg1 listDefinitionId:(long)arg2;
- (id)addLevelOverrideWithLevel:(unsigned char)arg0;

@end
