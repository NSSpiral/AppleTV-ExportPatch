/* Runtime dump - OABReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABReaderState : NSObject
{
    Class mClient;
    NSMutableDictionary * mShapeIdMap;
    NSMutableDictionary * mEshContentIdMap;
    <OADColorPalette> * mColorPalette;
    NSMutableDictionary * mBlipIdMap;
    int mGroupDepth;
}

@property (nonatomic) int groupDepth;

- (void)dealloc;
- (OABReaderState *)init;
- (OABReaderState *)initWithClient:(Class)arg0;
- (NSObject *)drawableForShapeId:(int)arg0;
- (void)setDrawable:(TSDDrawableInfo *)arg0 forShapeId:(unsigned long)arg1;
- (struct EshContent *)eshContentForId:(int)arg0;
- (void)setEshContent:(struct EshContent *)arg0 forId:(int)arg1;
- (<OADColorPalette> *)colorPalette;
- (void)setColorPalette:(<OADColorPalette> *)arg0;
- (NSObject *)drawableForBlipId:(int)arg0;
- (void)setDrawable:(TSDDrawableInfo *)arg0 forBlipId:(int)arg1;
- (int)groupDepth;
- (void)setGroupDepth:(int)arg0;
- (Class)client;

@end
