/* Runtime dump - ODDShape
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDShape : ODDLayoutObject
{
    int mType;
    int mPresetType;
    NSMutableArray * mAdjustments;
}

- (void)dealloc;
- (ODDShape *)init;
- (void)setType:(int)arg0;
- (int)type;
- (int)presetType;
- (void)setPresetType:(int)arg0;
- (void)addAdjustment:(_PLManagedAdjustment *)arg0;
- (CPLAdjustments *)adjustments;

@end
