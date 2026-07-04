/* Runtime dump - OADTextField
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextField : OADTextRun
{
    OADParagraphProperties * mParagraphProperties;
    NSString * mId;
    NSString * mText;
}

- (void)dealloc;
- (OADTextField *)init;
- (char)isEmpty;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSObject *)id;
- (NSDictionary *)paragraphProperties;
- (void)setId:(NSObject *)arg0;
- (void)removeUnnecessaryOverrides;
- (unsigned int)characterCount;

@end
