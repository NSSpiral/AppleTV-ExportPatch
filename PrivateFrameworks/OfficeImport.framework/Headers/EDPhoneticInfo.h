/* Runtime dump - EDPhoneticInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPhoneticInfo : NSObject <EDImmutableObject>
{
    EDResources * mResources;
    unsigned int mFontIndex;
    NSString * mString;
    int mType;
    int mAlign;
    EDCollection * mRuns;
    BOOL mDoNotModify;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)phoneticInfoWithResources:(NSArray *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (void)appendString:(NSString *)arg0;
- (NSString *)string;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (void)setString:(NSString *)arg0;
- (id)runs;
- (void)setFontIndex:(unsigned int)arg0;
- (EDPhoneticInfo *)initWithResources:(NSArray *)arg0;
- (unsigned int)fontIndex;
- (char)isEqualToEDPhoneticInfo:(NSDictionary *)arg0;
- (void)prependString:(NSString *)arg0;
- (void)setDoNotModify:(BOOL)arg0;
- (int)align;
- (void)setAlign:(int)arg0;

@end
