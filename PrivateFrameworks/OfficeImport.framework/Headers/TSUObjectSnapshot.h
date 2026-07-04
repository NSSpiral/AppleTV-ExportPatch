/* Runtime dump - TSUObjectSnapshot
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
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
