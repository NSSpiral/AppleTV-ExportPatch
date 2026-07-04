/* Runtime dump - BLRepairBrushStroke
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRepairBrushStroke : BLBrushStroke
{
    struct CGPoint _repairTextureOffset;
}

@property (nonatomic) struct CGPoint repairTextureOffset;

- (NSArray *)keysToEncode;
- (struct CGPoint)repairTextureOffset;
- (void)setRepairTextureOffset:(struct CGPoint)arg0;

@end
