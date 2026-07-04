/* Runtime dump - PHBatchFetchingArray
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHBatchFetchingArray : NSArray
{
    NSArray * _oids;
    NSSet * _oidsSet;
    PHPhotoLibrary * _photoLibrary;
    unsigned int _count;
    NSCache * _cache;
    unsigned int _firstBatchIndex;
    NSArray * _firstBatch;
    NSObject<OS_dispatch_queue> * _firstBatchQueue;
    unsigned int _batchSize;
    unsigned int _propertyHint;
}

@property (readonly) PHPhotoLibrary * photoLibrary;
@property (readonly) NSArray * oids;
@property (readonly) NSSet * oidsSet;

+ (char)accessInstanceVariablesDirectly;

- (void)min:(id *)arg0 andMax:(id *)arg1 forKeypath:(NSString *)arg2;
- (NSObject *)_phObjectAtIndex:(unsigned int)arg0;
- (NSArray *)oids;
- (id)_phObjectsForOIDs:(id)arg0;
- (PHBatchFetchingArray *)initWithOIDs:(id)arg0 options:(NSDictionary *)arg1 photoLibrary:(PHPhotoLibrary *)arg2;
- (NSObject *)__batchHelper:(unsigned int)arg0;
- (void)prefetchObjectsAtIndexes:(NSArray *)arg0;
- (NSSet *)oidsSet;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (unsigned int)indexOfObject:(struct objc_method *)arg0;
- (NSString *)description;
- (NSObject *)subarrayWithRange:(struct _NSRange)arg0;
- (PHBatchFetchingArray *)copyWithZone:(struct _NSZone *)arg0;
- (void)getObjects:(id *)arg0 range:(struct _NSRange)arg1;
- (PHBatchFetchingArray *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (unsigned int)batchSize;
- (PHPhotoLibrary *)photoLibrary;
- (unsigned int)indexOfObject:(struct objc_method *)arg0 inRange:(struct _NSRange)arg1;

@end
