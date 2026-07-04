/* Runtime dump - PBReaderHyperlinkInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBReaderHyperlinkInfo : NSObject
{
    NSString * mHyperlink1;
    NSString * mHyperlink2;
    NSString * mScreenTip;
}

@property (retain, nonatomic) NSString * hyperlink1;
@property (retain, nonatomic) NSString * hyperlink2;
@property (retain, nonatomic) NSString * screenTip;

- (void)dealloc;
- (NSString *)hyperlink1;
- (void)setHyperlink1:(NSString *)arg0;
- (NSString *)hyperlink2;
- (void)setHyperlink2:(NSString *)arg0;
- (NSString *)screenTip;
- (void)setScreenTip:(NSString *)arg0;

@end
