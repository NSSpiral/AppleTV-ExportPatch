/* Runtime dump - BLRepairModel
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRepairModel : NSObject
{
    NSDictionary * _strokesDataDictionary;
    BLRepairLayerStack * _layerStack;
    NSLock * _lock;
}

- (void)dealloc;
- (BLRepairModel *)initWithAdjustmentsDictionary:(NSDictionary *)arg0;
- (char)hasRedeye;
- (void)setLayerStack:(BLRepairLayerStack *)arg0;
- (char)hasRepairOrRedeye;
- (char)hasRepair;
- (char)hasLayerStack;
- (BLRepairLayerStack *)layerStack;
- (void)buildLayerStackWithAnalysisImage:(UIImage *)arg0 andRepairImage:(UIImage *)arg1;
- (BLImagePatchList *)imagePatchList;

@end
