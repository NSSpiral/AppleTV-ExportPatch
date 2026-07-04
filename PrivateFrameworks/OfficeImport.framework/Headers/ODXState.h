/* Runtime dump - ODXState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODXState : OCXReadState
{
    CXNamespace * mODXDiagramNamespace;
    OAXDrawingState * mOfficeArtState;
}

@property (retain, nonatomic) CXNamespace * ODXDiagramNamespace;

- (void)dealloc;
- (void)setupNSForXMLFormat:(int)arg0;
- (ODXState *)initWithOfficeArtState:(NSObject *)arg0;
- (CXNamespace *)ODXDiagramNamespace;
- (NSObject *)officeArtState;
- (void)setODXDiagramNamespace:(id)arg0;

@end
