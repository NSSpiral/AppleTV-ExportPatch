/* Runtime dump - PLUnmanagedAdjustment
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUnmanagedAdjustment : PLManagedObject

@property (retain, nonatomic) NSNumber * adjustmentBaseImageFormat;
@property (retain, nonatomic) NSString * adjustmentFormatIdentifier;
@property (retain, nonatomic) NSString * adjustmentFormatVersion;
@property (retain, nonatomic) NSDate * adjustmentTimestamp;
@property (retain, nonatomic) NSString * editorLocalizedName;
@property (retain, nonatomic) NSString * otherAdjustmentsFingerprint;
@property (retain, nonatomic) NSString * similarToOriginalAdjustmentsFingerprint;
@property (retain, nonatomic) NSString * uuid;
@property (retain, nonatomic) PLAdditionalAssetAttributes * assetAttributes;

+ (NSSet *)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(NSSet *)arg0;
+ (NSString *)addUnmanagedAdjustmentFromAdjustmentFileAtPath:(NSString *)arg0 withAsset:(NSSet *)arg1;
+ (PLUnmanagedAdjustment *)_convertRedEyeCorrections:(id)arg0 withOrientation:(int)arg1;
+ (PLUnmanagedAdjustment *)_convertRedEyeCorrection:(id)arg0 withOrientation:(int)arg1;

@end
