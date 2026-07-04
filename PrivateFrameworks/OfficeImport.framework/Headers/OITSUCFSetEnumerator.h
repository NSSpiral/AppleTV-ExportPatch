/* Runtime dump - OITSUCFSetEnumerator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCFSetEnumerator : NSObject <NSFastEnumeration>
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
- (OITSUCFSetEnumerator *)initWithCFSet:(struct __CFSet *)arg0;

@end
