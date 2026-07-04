/* Runtime dump - TSCHDEPRECATED3DFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHDEPRECATED3DFill : NSObject
{
    TSDFill * mFill;
    TSCH3DLightingModel * mLightingModel;
    TSCH3DFillSetIdentifier * mIdentifier;
}

+ (TSCHDEPRECATED3DFill *)instanceWithArchive:(struct DEPRECATEDChart3DFillArchive *)arg0 unarchiver:(struct DEPRECATEDChart3DFillArchive)arg1;

- (void)saveToArchive:(struct DEPRECATEDChart3DFillArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHDEPRECATED3DFill *)initWithArchive:(struct DEPRECATEDChart3DFillArchive *)arg0 unarchiver:(struct DEPRECATEDChart3DFillArchive)arg1;
- (id)convertToTSDFill;
- (void)dealloc;

@end
