/* Runtime dump - PBSlideState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideState : NSObject
{
    NSMutableDictionary * mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (void)dealloc;
- (PBSlideState *)init;
- (void)reset;
- (NSObject *)buildOrderMap;
- (void)addBuild:(PDBuild *)arg0 order:(unsigned int)arg1;
- (unsigned int)generateGroupId;

@end
