/* Runtime dump - PDAnimationInfoData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationInfoData : NSObject
{
    unsigned int mOrder;
    PDBuild * mBuild;
    PDSequentialTimeNode * mSequentialTimeNodeData;
    OADDrawable * mDrawable;
}

- (PDBuild *)build;
- (void)dealloc;
- (NSData *)data;
- (unsigned int)order;
- (TSDDrawableInfo *)drawable;
- (PDAnimationInfoData *)initWithTarget:(NSObject *)arg0 presetClass:(int)arg1 presetId:(int)arg2 triggerType:(int)arg3 iterateType:(int)arg4 delay:(double)arg5 direction:(double)arg6 order:(unsigned int)arg7 groupId:(NSString *)arg8 build:(PDBuild *)arg9;

@end
