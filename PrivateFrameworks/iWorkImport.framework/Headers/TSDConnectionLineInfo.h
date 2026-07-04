/* Runtime dump - TSDConnectionLineInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineInfo : TSDShapeInfo
{
    NSUUID * mConnectedFromID;
    NSUUID * mConnectedToID;
    struct ? mInvalidFlags;
}

@property (nonatomic) TSDDrawableInfo * connectedFrom;
@property (nonatomic) TSDDrawableInfo * connectedTo;
@property (retain, nonatomic) NSUUID * connectedFromID;
@property (retain, nonatomic) NSUUID * connectedToID;

- (TSDConnectionLineInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)willCopyWithOtherDrawables:(id)arg0;
- (void)didCopy;
- (void)saveToArchive:(struct ConnectionLineArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ConnectionLineArchive *)arg0 unarchiver:(struct ConnectionLineArchive)arg1;
- (NSString *)presetKind;
- (Class)repClass;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (Class)layoutClass;
- (NSObject *)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1 chunkIndex:(unsigned int)arg2;
- (TSDDrawableInfo *)connectedFrom;
- (TSDDrawableInfo *)connectedTo;
- (NSObject *)computeLayoutInfoGeometry;
- (void)saveGeometryToArchive:(struct GeometryArchive *)arg0 archiver:(NSObject *)arg1;
- (void)performBlockWithTemporaryLayout:(NSObject *)arg0;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (char)canAnchor;
- (void)setConnectedFrom:(TSDDrawableInfo *)arg0;
- (void)setConnectedTo:(TSDDrawableInfo *)arg0;
- (NSUUID *)connectedToID;
- (NSUUID *)connectedFromID;
- (void)setConnectedToID:(NSUUID *)arg0;
- (void)setConnectedFromID:(NSUUID *)arg0;
- (void)computeLayoutInfoGeometry:(id *)arg0 andPathSource:(id *)arg1;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;

@end
