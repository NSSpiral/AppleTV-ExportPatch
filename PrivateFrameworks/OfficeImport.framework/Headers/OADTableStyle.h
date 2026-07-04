/* Runtime dump - OADTableStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableStyle : NSObject
{
    NSString * mName;
    NSString * mId;
    OADTableBackground * mBackground;
    OADTablePartStyle * mWholeTableStyle;
    OADTablePartStyle * mBand1HorzStyle;
    OADTablePartStyle * mBand2HorzStyle;
    OADTablePartStyle * mBand1VertStyle;
    OADTablePartStyle * mBand2VertStyle;
    OADTablePartStyle * mFirstRowStyle;
    OADTablePartStyle * mFirstColumnStyle;
    OADTablePartStyle * mLastRowStyle;
    OADTablePartStyle * mLastColumnStyle;
    OADTablePartStyle * mNorthEastStyle;
    OADTablePartStyle * mNorthWestStyle;
    OADTablePartStyle * mSouthEastStyle;
    OADTablePartStyle * mSouthWestStyle;
}

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (UIImage *)background;
- (void)setBackground:(UISearchBarBackground *)arg0;
- (NSObject *)id;
- (NSObject *)firstRowStyle;
- (NSObject *)wholeTableStyle;
- (NSObject *)band1HorzStyle;
- (NSObject *)lastRowStyle;
- (void)setId:(NSObject *)arg0;
- (void)setWholeTableStyle:(NSObject *)arg0;
- (void)setBand1HorzStyle:(NSObject *)arg0;
- (void)setBand2HorzStyle:(NSObject *)arg0;
- (void)setBand1VertStyle:(NSObject *)arg0;
- (void)setBand2VertStyle:(NSObject *)arg0;
- (void)setFirstRowStyle:(NSObject *)arg0;
- (void)setLastRowStyle:(NSObject *)arg0;
- (void)setFirstColumnStyle:(NSObject *)arg0;
- (void)setLastColumnStyle:(NSObject *)arg0;
- (void)setNorthEastStyle:(NSObject *)arg0;
- (void)setNorthWestStyle:(NSObject *)arg0;
- (void)setSouthEastStyle:(NSObject *)arg0;
- (void)setSouthWestStyle:(NSObject *)arg0;
- (NSObject *)band2HorzStyle;
- (NSObject *)band1VertStyle;
- (NSObject *)band2VertStyle;
- (NSObject *)firstColumnStyle;
- (NSObject *)lastColumnStyle;
- (NSObject *)northWestStyle;
- (NSObject *)northEastStyle;
- (NSObject *)southWestStyle;
- (NSObject *)southEastStyle;
- (NSObject *)partStyle:(int)arg0;

@end
