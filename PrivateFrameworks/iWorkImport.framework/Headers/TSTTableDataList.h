/* Runtime dump - TSTTableDataList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataList : TSPObject
{
    int mListType;
    unsigned int mNextID;
    TSTIntegerKeyDict * mData;
    TSTTableDataObjectKeyDict * mIDs;
}

@property (readonly, nonatomic) unsigned int nextID;
@property (readonly, nonatomic) TSTIntegerKeyDict * data;

+ (TSTTableDataList *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0;

- (NSString *)packageLocator;
- (TSTTableDataList *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (id)allRichTextPayloadStorages;
- (unsigned long)flushableSize;
- (TSTTableDataList *)initWithType:(int)arg0 context:(NSObject *)arg1;
- (char)supportsIDMapForType:(int)arg0;
- (void)p_setupWithType:(int)arg0 nextKeyID:(unsigned int)arg1;
- (void)enumerateCustomFormatsUsingBlock:(id /* block */)arg0;
- (unsigned int)nextID;
- (void)dealloc;
- (TSTIntegerKeyDict *)data;

@end
