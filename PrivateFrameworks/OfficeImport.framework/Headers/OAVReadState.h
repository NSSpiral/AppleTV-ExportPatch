/* Runtime dump - OAVReadState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVReadState : OCXReadState
{
    Class mClient;
    OAXDrawingState * mOAXState;
    OCPPackagePart * mPackagePart;
    NSMutableDictionary * mShapeTypes;
    NSMutableDictionary * mShapeIdMap;
    NSMutableSet * mDualDrawables;
}

- (void)dealloc;
- (OCPZipPackagePart *)packagePart;
- (void)setPackagePart:(OCPZipPackagePart *)arg0;
- (void)resetForNewDrawing;
- (NSURL *)blipRefForURL:(NSURL *)arg0;
- (NSObject *)drawableForVmlShapeId:(NSObject *)arg0;
- (void)addDualDrawable:(id)arg0;
- (OAVReadState *)initWithClient:(Class)arg0 packagePart:(struct _xmlNode *)arg1;
- (NSObject *)oaxState;
- (void)setOAXState:(NSObject *)arg0;
- (unsigned short)shapeTypeForId:(NSObject *)arg0;
- (void)setShapeType:(unsigned short)arg0 forId:(NSObject *)arg1;
- (void)setDrawable:(TSDDrawableInfo *)arg0 forVmlShapeId:(NSObject *)arg1;
- (char)isDualDrawable:(id)arg0;
- (unsigned long)officeArtShapeIdWithVmlShapeId:(NSObject *)arg0;
- (Class)client;

@end
