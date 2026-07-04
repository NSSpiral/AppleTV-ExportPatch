/* Runtime dump - PBAnimationCacheState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBAnimationCacheState : PDAnimationCacheState
{
    NSMutableSet * mEntranceDrawables;
    NSMutableSet * mExitDrawables;
}

- (void)dealloc;
- (PBAnimationCacheState *)init;
- (char)isValid:(char)arg0;

@end
