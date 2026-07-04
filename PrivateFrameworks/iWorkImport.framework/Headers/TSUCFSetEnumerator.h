/* Runtime dump - TSUCFSetEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration>
{
    id mInlineObjects;
    void * * mObjects;
    long mCount;
    long mIndex;
}

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSArray *)allObjects;
- (NSObject *)nextObject;
- (TSUCFSetEnumerator *)initWithCFSet:(struct __CFSet *)arg0;

@end
