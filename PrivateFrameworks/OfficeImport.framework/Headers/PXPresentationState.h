/* Runtime dump - PXPresentationState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXPresentationState : OCXReadState
{
    NSMutableDictionary * mModelObjects;
    OAXDrawingState * mOfficeArtState;
    OAVReadState * mOAVState;
    OAXTableStyleCache * mTableStyleCache;
    NSMutableDictionary * mSlideURLToIndexMap;
    PDPresentation * mTgtPresentation;
    <TCCancelDelegate> * mCancel;
    CXNamespace * _PXPresentationMLNamespace;
}

@property (retain, nonatomic) <TCCancelDelegate> * cancelDelegate;
@property (retain, nonatomic) CXNamespace * PXPresentationMLNamespace;

- (void)dealloc;
- (PXPresentationState *)init;
- (char)isCancelled;
- (void)setupNSForXMLFormat:(int)arg0;
- (NSCache *)tableStyleCache;
- (NSObject *)oavState;
- (NSObject *)officeArtState;
- (void)setCancelDelegate:(<TCCancelDelegate> *)arg0;
- (<TCCancelDelegate> *)cancelDelegate;
- (id)tgtPresentation;
- (CXNamespace *)PXPresentationMLNamespace;
- (void)setModelObject:(NSObject *)arg0 forLocation:(NSObject *)arg1;
- (NSObject *)modelObjectForLocation:(NSObject *)arg0;
- (int)slideIndexForSlideURL:(NSURL *)arg0;
- (void)setTgtPresentation:(id)arg0;
- (void)resetOfficeArtState;
- (void)setSlideIndex:(int)arg0 forSlideURL:(NSURL *)arg1;
- (void)setPXPresentationMLNamespace:(id)arg0;

@end
