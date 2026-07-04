/* Runtime dump - WMOfficeArtMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMOfficeArtMapper : CMDrawableMapper
{
    char mFloating;
    char mIsMapped;
    char mIsInsideGroup;
    WDAContent * mContent;
    unsigned int mCurrentPage;
}

- (void)setCurrentPage:(unsigned int)arg0;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (OADBlip *)blipAtIndex:(unsigned int)arg0;
- (WMOfficeArtMapper *)initWithOadDrawable:(id)arg0 asFloating:(char)arg1 parent:(NSObject *)arg2;
- (void)setBoundingBox;
- (void)setWithClientData:(NSData *)arg0 state:(NSObject *)arg1;
- (void)mapOfficeArtShapeAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtImageAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtGroupAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapDiagramAt:(id)arg0 withState:(NSObject *)arg1;
- (WMOfficeArtMapper *)initWithWdOfficeArt:(id)arg0 parent:(NSObject *)arg1;
- (char)isInsideGroup;
- (void)setIsInsideGroup:(char)arg0;
- (void)mapTextBoxAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapOfficeArtTextboxAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)expandedSizeForTextBox:(id)arg0 withState:(NSObject *)arg1;

@end
