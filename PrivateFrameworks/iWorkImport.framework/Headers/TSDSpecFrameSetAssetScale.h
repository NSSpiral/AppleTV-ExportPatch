/* Runtime dump - TSDSpecFrameSetAssetScale
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecFrameSetAssetScale : TSDSpecStroke
{
    double _assetScale;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecFrameSetAssetScaleArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecFrameSetAssetScale *)newFromArchive:(struct SpecFrameSetAssetScaleArchive *)arg0 unarchiver:(struct SpecFrameSetAssetScaleArchive)arg1;

- (TSDSpecFrameSetAssetScale *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (NSObject *)frameModifiedFromFrame:(NSObject *)arg0;
- (void)saveSpecFrameSetAssetScaleToArchive:(struct SpecFrameSetAssetScaleArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecFrameSetAssetScale *)initSpecFrameSetAssetScaleWithArchive:(struct SpecFrameSetAssetScaleArchive *)arg0 unarchiver:(struct SpecFrameSetAssetScaleArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
