/* Runtime dump - NSBatchUpdateResult
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBatchUpdateResult : NSPersistentStoreResult
{
    id _aggregatedResult;
    unsigned int _resultType;
}

@property (readonly) id result;
@property (readonly) unsigned int resultType;

- (NSBatchUpdateResult *)initWithResult:(NSObject *)arg0 type:(unsigned int)arg1;
- (void)dealloc;
- (CKDPResponseOperationResult *)result;
- (unsigned int)resultType;

@end
