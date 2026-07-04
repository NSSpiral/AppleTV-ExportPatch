/* Runtime dump - PXVmlState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXVmlState : OAVReadState
{
    ESDObject * mLegacyTextGlobals;
    PBPresentationReaderState * mLegacyPresentationState;
}

- (void)dealloc;
- (id)legacyTextGlobals;
- (void)setLegacyTextGlobals:(id)arg0;
- (void)setLegacyPresentationState:(NSObject *)arg0;
- (NSObject *)legacyPresentationState;

@end
