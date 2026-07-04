/* Runtime dump - TSUObjectSnapshot
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUObjectSnapshot : NSObject
{
    unsigned long mEntryCount;
    void * * mSnapshot;
    NSArray * mCompared;
}

- (void)dealloc;
- (TSUObjectSnapshot *)init;
- (void)p_clear;
- (void)calibrate:(id)arg0;
- (void)compare;

@end
