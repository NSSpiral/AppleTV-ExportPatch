/* Runtime dump - OAXDrawingState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXDrawingState : OCXReadState
{
    OAXClient * mClient;
    OCPPackagePart * mPackagePart;
    OADStyleMatrix * mStyleMatrix;
    OAXTableStyleCache * mTableStyleCache;
    NSMutableDictionary * mShapeIdMap;
    NSMutableDictionary * mDrawableIdToVmlShapeIdMap;
    id mDocumentState;
    OADBlipCollection * mTgtBlipCollection;
    NSMutableDictionary * mSrcURLToTgtBlipIndexMap;
    NSMutableArray * mTgtBulletBlips;
    NSMutableDictionary * mSrcURLToTgtBulletBlipIndexMap;
    OAVReadState * mOavState;
    OADColorScheme * mColorScheme;
    OADColorMap * mColorMap;
    OADFontScheme * mFontScheme;
    NSMutableArray * mGroupStack;
    CXNamespace * mOAXMainNamespace;
    CXNamespace * mOAXChartNamespace;
    CXNamespace * mOAXChartDrawingNamespace;
    CXNamespace * mOAXCompatNamespace;
    CXNamespace * mOAXLockedCanvasNamespace;
    CXNamespace * mOAXPictureNamespace;
    CXNamespace * mOAXWordProcessingMLNamespace;
    CXNamespace * mOAXDrawing2010Namespace;
}

@property (retain, nonatomic) NSMutableDictionary * sourceURLToTargetBlipIndexMap;
@property (retain, nonatomic) NSMutableDictionary * sourceURLToTargetBulletBlipIndexMap;
@property (retain, nonatomic) CXNamespace * OAXMainNamespace;
@property (retain, nonatomic) CXNamespace * OAXChartNamespace;
@property (retain, nonatomic) CXNamespace * OAXChartDrawingNamespace;
@property (retain, nonatomic) CXNamespace * OAXCompatNamespace;
@property (retain, nonatomic) CXNamespace * OAXLockedCanvasNamespace;
@property (retain, nonatomic) CXNamespace * OAXPictureNamespace;
@property (retain, nonatomic) CXNamespace * OAXWordProcessingMLNamespace;
@property (retain, nonatomic) CXNamespace * OAXDrawing2010Namespace;

- (void)dealloc;
- (OAXDrawingState *)init;
- (TIDocumentState *)documentState;
- (void)setDocumentState:(NSObject *)arg0;
- (OADColorScheme *)colorScheme;
- (void)setColorScheme:(OADColorScheme *)arg0;
- (OADStyleMatrix *)styleMatrix;
- (char)isInsideGroup;
- (OADColorMap *)colorMap;
- (void)setColorMap:(OADColorMap *)arg0;
- (OADFontScheme *)fontScheme;
- (CXNamespace *)OAXMainNamespace;
- (void)setupNSForXMLFormat:(int)arg0;
- (NSURL *)blipRefWithURL:(NSString *)arg0 blipArray:(NSArray *)arg1 blipURLtoIndexMap:(NSObject *)arg2;
- (NSObject *)peekGroup;
- (void)setOAXMainNamespace:(id)arg0;
- (void)setOAXChartNamespace:(id)arg0;
- (void)setOAXChartDrawingNamespace:(id)arg0;
- (void)setOAXLockedCanvasNamespace:(id)arg0;
- (void)setOAXPictureNamespace:(id)arg0;
- (void)setOAXWordProcessingMLNamespace:(id)arg0;
- (void)setOAXCompatNamespace:(id)arg0;
- (void)setOAXDrawing2010Namespace:(id)arg0;
- (OAXDrawingState *)initWithClient:(NSObject *)arg0;
- (OCPZipPackagePart *)packagePart;
- (void)setPackagePart:(OCPZipPackagePart *)arg0;
- (void)setStyleMatrix:(OADStyleMatrix *)arg0;
- (NSCache *)tableStyleCache;
- (void)setTableStyleCache:(NSObject *)arg0;
- (NSObject *)drawableForShapeId:(unsigned long)arg0;
- (void)setDrawable:(TSDDrawableInfo *)arg0 forShapeId:(unsigned long)arg1;
- (NSObject *)vmlShapeIdForDrawableId:(unsigned long)arg0;
- (void)setVmlShapeId:(NSObject *)arg0 forDrawableId:(unsigned long)arg1;
- (void)resetForNewDrawing;
- (NSObject *)oavState;
- (void)setOavState:(NSObject *)arg0;
- (void)setFontScheme:(OADFontScheme *)arg0;
- (id)targetBlipCollection;
- (void)clearTargetBlipCollection;
- (void)setTargetBlipCollection:(id)arg0;
- (void)setTargetBulletBlipArray:(NSArray *)arg0;
- (NSURL *)blipRefForURL:(NSURL *)arg0;
- (NSURL *)bulletBlipRefForURL:(NSURL *)arg0;
- (NSObject *)popGroup;
- (CXNamespace *)OAXChartNamespace;
- (CXNamespace *)OAXChartDrawingNamespace;
- (CXNamespace *)OAXCompatNamespace;
- (CXNamespace *)OAXLockedCanvasNamespace;
- (CXNamespace *)OAXPictureNamespace;
- (CXNamespace *)OAXWordProcessingMLNamespace;
- (CXNamespace *)OAXDrawing2010Namespace;
- (NSMutableDictionary *)sourceURLToTargetBlipIndexMap;
- (void)setSourceURLToTargetBlipIndexMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)sourceURLToTargetBulletBlipIndexMap;
- (void)setSourceURLToTargetBulletBlipIndexMap:(NSMutableDictionary *)arg0;
- (void)pushGroup:(NSObject *)arg0;
- (struct __asl_object_s *)client;

@end
