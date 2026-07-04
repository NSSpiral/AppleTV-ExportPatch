/* Runtime dump - MSObjectQueue
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSObjectQueue : NSObject
{
    struct sqlite3 * _db;
    struct __CFDictionary * _statements;
}

@property (readonly) long long count;

- (void)dealloc;
- (long long)count;
- (MSObjectQueue *)initWithPath:(NSString *)arg0;
- (void)appendObjectWrappers:(id)arg0;
- (NSNumber *)allObjectWrappersMaxCount:(long long)arg0;
- (void)removeObjectWrappersFromQueue:(NSObject *)arg0;
- (NSObject *)smallestObjectWrappersTargetTotalSize:(long long)arg0 maxCount:(long long)arg1;
- (NSNumber *)objectWrappersWithZeroSizeMaxCount:(long long)arg0;
- (NSNumber *)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)arg0;
- (void)commitErrorCountsForObjectWrappers:(id)arg0;
- (void)commitObjectsWrappers:(id)arg0;
- (struct sqlite3_stmt *)_statementLabel:(NSString *)arg0 query:(char *)arg1;
- (NSObject *)_objectWrapperFromQueueQuery:(struct sqlite3_stmt *)arg0 outSize:(long long *)arg1;
- (void)removeAllObjectWrappersFromQueue;

@end
