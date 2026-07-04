/* Runtime dump - OADUnderline
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADUnderline : NSObject
{
    OADStroke * mStroke;
    OADFill * mFill;
    unsigned char mType;
    id mIsUsingTextFill;
    id mIsUsingTextStroke;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (EDFill *)fill;
- (OADStroke *)stroke;
- (void)setFill:(TSDFill *)arg0;
- (void)setStroke:(TSDStroke *)arg0;
- (void)setIsUsingTextStroke:(char)arg0;
- (void)setIsUsingTextFill:(char)arg0;
- (char)isUsingTextFill;
- (char)isUsingTextStroke;
- (OADUnderline *)initWithStroke:(TSDStroke *)arg0 fill:(id)arg1 type:(int)arg2;

@end
