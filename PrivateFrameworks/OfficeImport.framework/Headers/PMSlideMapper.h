/* Runtime dump - PMSlideMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMSlideMapper : CMMapper
{
    PDSlide * mSlide;
    struct CGRect mRect;
}

- (void).cxx_construct;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (OADStyleMatrix *)styleMatrix;
- (void)mapDrawablesAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGRect)slideRect;
- (id)defaultTheme;
- (PMSlideMapper *)initWithPDSlide:(PDSlide *)arg0 slideRect:(struct CGRect)arg1 parent:(struct CGSize)arg2;
- (void)mapMasterSlideAt:(id)arg0 withState:(NSObject *)arg1;
- (NSString *)slideName;
- (void)mapBackgroundAt:(id)arg0 recursive:(char)arg1 withState:(NSObject *)arg2;

@end
