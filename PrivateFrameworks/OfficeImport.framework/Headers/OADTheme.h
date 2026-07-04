/* Runtime dump - OADTheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTheme : NSObject
{
    OADBaseStyles * mBaseStyles;
    OADDefaultProperties * mShapeDefaults;
    OADDefaultProperties * mLineDefaults;
    OADDefaultProperties * mTextDefaults;
}

@property (retain, nonatomic) OADBaseStyles * baseStyles;
@property (retain, nonatomic) OADDefaultProperties * shapeDefaults;
@property (retain, nonatomic) OADDefaultProperties * lineDefaults;
@property (retain, nonatomic) OADDefaultProperties * textDefaults;

- (void)dealloc;
- (OADTheme *)init;
- (OADBaseStyles *)baseStyles;
- (id)addShapeDefaults;
- (id)addLineDefaults;
- (id)addTextDefaults;
- (void)addDefaults;
- (void)setBaseStyles:(OADBaseStyles *)arg0;
- (OADDefaultProperties *)shapeDefaults;
- (void)setShapeDefaults:(OADDefaultProperties *)arg0;
- (OADDefaultProperties *)lineDefaults;
- (void)setLineDefaults:(OADDefaultProperties *)arg0;
- (OADDefaultProperties *)textDefaults;
- (void)setTextDefaults:(OADDefaultProperties *)arg0;

@end
