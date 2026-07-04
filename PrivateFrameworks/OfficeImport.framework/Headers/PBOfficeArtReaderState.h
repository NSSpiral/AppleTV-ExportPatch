/* Runtime dump - PBOfficeArtReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOfficeArtReaderState : OABReaderState
{
    PBPresentationReaderState * mPresentationState;
}

- (NSObject *)presentationState;
- (NSObject *)drawableOnTgtSlideForShapeId:(int)arg0;
- (PBOfficeArtReaderState *)initWithPresentationState:(NSObject *)arg0;

@end
