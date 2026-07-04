/* Runtime dump - EDTextBox
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTextBox : NSObject
{
    EDString * mText;
    EDAlignmentInfo * mAlignmentInfo;
    EDProtection * mProtection;
}

+ (EDTextBox *)textBox;

- (void)dealloc;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (EDAlignmentInfo *)alignmentInfo;
- (void)setAlignmentInfo:(EDAlignmentInfo *)arg0;
- (void)setProtection:(EDProtection *)arg0;
- (EDProtection *)protection;

@end
