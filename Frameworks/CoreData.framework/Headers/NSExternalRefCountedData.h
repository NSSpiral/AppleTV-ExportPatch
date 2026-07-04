/* Runtime dump - NSExternalRefCountedData
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSExternalRefCountedData : NSObject
{
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st _externalRefFlags;
    id * _toManyMap;
    double _birth;
}

+ (NSExternalRefCountedData *)allocWithZone:(struct _NSZone *)arg0;

- (void)_initializeRelationshipCaches;
- (NSExternalRefCountedData *)initWithOptions:(unsigned int)arg0 andTimestamp:(double)arg1;
- (void)incrementRefCount;
- (int)decrementRefCount;
- (int)externalReferenceCount;
- (void)incrementExternalReferenceCount:(int)arg0;
- (void)copyRelationshipCachesFrom:(NSObject *)arg0;
- (void)releaseRelationshipCaches;
- (void)updateMissingRelationshipCachesFromOriginal:(id)arg0;
- (NSObject *)relatedObjectIDsForProperty:(NSString *)arg0;
- (double)timestampForProperty:(NSString *)arg0;
- (void)setRelatedObjectIDs:(id)arg0 forProperty:(NSString *)arg1 options:(unsigned int)arg2 andTimestamp:(double)arg3;
- (NSObject *)ancillaryOrderKeysForProperty:(NSString *)arg0;
- (void)setAncillaryOrderKeys:(NSArray *)arg0 forProperty:(NSString *)arg1 options:(unsigned int)arg2 andTimestamp:(double)arg3;
- (NSExternalRefCountedData *)retain;
- (void)release;
- (void)dealloc;
- (unsigned int)retainCount;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (unsigned int)options;
- (struct _NSScalarObjectID *)objectID;

@end
