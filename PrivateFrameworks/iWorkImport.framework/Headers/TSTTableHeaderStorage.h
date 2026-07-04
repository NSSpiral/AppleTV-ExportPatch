/* Runtime dump - TSTTableHeaderStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage>
{
    id mBuckets;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)saveToArchive:(struct HeaderStorage *)arg0 archiver:(NSObject *)arg1;
- (TSTTableHeaderStorage *)initWithArchive:(struct HeaderStorage *)arg0 unarchiver:(struct HeaderStorage)arg1 owner:(NSObject *)arg2;
- (NSString *)headerForKey:(unsigned long)arg0 willModify:(char)arg1 createIfNotThere:(char)arg2;
- (void)enumerateHeadersWithBlock:(id /* block */)arg0;
- (void)shiftKeysAtIndex:(unsigned long)arg0 amount:(long)arg1;
- (NSString *)headerForKey:(unsigned long)arg0 willModify:(char)arg1;
- (void)removeAllHeaders;
- (unsigned long)minKey;
- (unsigned long)maxKey;
- (unsigned long)upperBound:(unsigned long)arg0;
- (unsigned long)lowerBound:(unsigned long)arg0;
- (TSTTableHeaderStorage *)initWithOwner:(TSPObject *)arg0;
- (void)dealloc;
- (int)count;
- (void)setHeader:(NSString *)arg0 forKey:(unsigned long)arg1;
- (void)removeHeaderForKey:(unsigned long)arg0;

@end
