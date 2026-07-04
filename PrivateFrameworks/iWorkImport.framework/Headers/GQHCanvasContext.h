/* Runtime dump - GQHCanvasContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHCanvasContext : NSObject <GQHContext>
{
    GQDAffineGeometry * mGeometry;
    NSMutableString * mFunctionName;
    char mHasFill;
    char mHasStroke;
    struct __CFString * mBezierStr;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)createMaskedImageWithId:(struct __CFString *)arg0 geometry:(TSDInfoGeometry *)arg1 imageBinary:(GQDImageBinary *)arg2 cropGeometry:(NSObject *)arg3 maskingShapePath:(NSString *)arg4 alphaMaskBezier:(struct CGPath *)arg5 graphicStyle:(NSObject *)arg6 isFloating:(char)arg7 state:(NSObject *)arg8;
- (void)addScriptTagToHtml:(id)arg0 state:(NSObject *)arg1;
- (void)createShapeWithId:(struct __CFString *)arg0 path:(NSString *)arg1 geometry:(TSDInfoGeometry *)arg2 graphicStyle:(NSObject *)arg3 isFloating:(char)arg4 state:(NSObject *)arg5;
- (void)setBezierPath:(char *)arg0 state:(NSObject *)arg1;
- (float)strokeWidthWithGraphicStyle:(NSObject *)arg0;
- (struct GQHPathEndPointInfo)endPointInfoForPath:(struct CGPoint)arg0;
- (void)addPathForLineEndStyle:(int)arg0 graphicStyle:(NSObject *)arg1 atPoint:(struct CGPoint)arg2 neighboringCP:(struct CGPoint)arg3 filledPath:(struct CGPath * *)arg4 strokedPath:(struct CGPath)arg5;
- (void)prepareContext:(NSObject *)arg0;
- (void)mapStyle:(NSObject *)arg0 state:(NSObject *)arg1;
- (void)setCGPath:(struct CGPath *)arg0 state:(NSObject *)arg1;
- (void)mapLineEndFillStyle:(NSObject *)arg0 state:(NSObject *)arg1;
- (void)mapLineEndStrokeStyle:(NSObject *)arg0 state:(NSObject *)arg1;
- (void)teardownContext:(NSObject *)arg0;
- (void)setContextOpacity:(float)arg0 state:(NSObject *)arg1;
- (void)mapFill:(id)arg0 state:(NSObject *)arg1;
- (void)mapStroke:(id)arg0 state:(NSObject *)arg1;
- (void)setFillColor:(UIColor *)arg0 state:(NSObject *)arg1;
- (void)setGradient:(NSObject *)arg0 state:(NSObject *)arg1;
- (void)setImageFill:(struct __CFURL *)arg0 srcSize:(struct CGSize)arg1 mode:(int)arg2 state:(NSObject *)arg3;
- (void)setStrokeColor:(UIColor *)arg0 width:(float)arg1 state:(NSObject *)arg2;
- (NSObject *)strokeColorWithGraphicStyle:(NSObject *)arg0;
- (void)translate:(struct CGSize)arg0 state:(NSObject *)arg1;
- (void)dealloc;

@end
