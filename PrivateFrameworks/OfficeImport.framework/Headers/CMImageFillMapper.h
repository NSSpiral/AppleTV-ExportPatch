/* Runtime dump - CMImageFillMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMImageFillMapper : CMMapper
{
    OADFill * mFill;
    struct CGRect mBounds;
}

- (void).cxx_construct;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (OADBlip *)blipAtIndex:(unsigned int)arg0;
- (char)isCropped;
- (struct CGRect)uncroppedBox;
- (id)mainSubBlip;
- (id)mapImageFill:(id)arg0 withState:(NSObject *)arg1;
- (id)convertMetafileToPdf:(id)arg0 state:(NSObject *)arg1;
- (CMImageFillMapper *)initWithOadFill:(id)arg0 bounds:(struct CGRect)arg1 parent:(struct CGSize)arg2;
- (void)mapImageFillAt:(id)arg0 toStyle:(NSObject *)arg1 withState:(NSObject *)arg2;
- (void)mapNonImageFillAt:(id)arg0 toStyle:(NSObject *)arg1 withState:(NSObject *)arg2;

@end
